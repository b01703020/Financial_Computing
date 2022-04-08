//
//  EuropeanOption.h
//  EuropeanOptions_BS
//
//  modified by wu yen sun on 2022/3/29.
//

// EuropeanOption2.hpp
//
// Class that represents  solutions to European options. This is
// an implementation using basic C++ syntax only. It has been
// written for pedagogical reasons
//
// (C) Datasim Component Technology BV 2003-2006

#pragma once


#include <string>
#include <iostream>
#include <cmath>
using namespace std;

class EuropeanOption
{
    
    private:
    
        double r;        // Interest rate
        double sig;        // Volatility
        double K;        // Strike price
        double T;        // Expiry date
        double U;        // Current underlying price (e.g. stock, forward)
        double U_div;    // U - current value of future constant dividend
        double b;        // Cost of carry

        char* optType = nullptr;        // Option name (C, P)
        char* optType_Full = nullptr;    // Option name (Call, Put)

        double Div;        // constant Dividend
        double DivTime; // payment time

        // 'Kernel' functions for option calculations
        double CallPrice() const;
        double PutPrice() const;
        double CallDelta() const;
        double PutDelta() const;
        double CallGamma() const;
        double PutGamma() const;
        double CallVega() const;
        double PutVega() const;
        
        // Gaussian functions
        double n(double x) const;
        double N(double x) const;


    public:
    
        EuropeanOption() :
            r(0.08), sig(0.30), K(65.0), T(0.25), U(60.0), b(r), Div(0), DivTime(0)
        {
            CalU_div();
            optType = new char[2];
            strcpy(optType, "C");
            Update_CallPutFull();
        }

        EuropeanOption(double r_, double sig_, double K_, double T_, double U_, double b_, char* const optType_) :
            r(r_), sig(sig_), K(K_), T(T_), U(U_), b(b_), Div(0.0), DivTime(0.0)
        {
            CalU_div();
            optType = new char[strlen(optType_) + 1];
            strcpy(optType, optType_);
            Update_CallPutFull();
        }
    
        EuropeanOption(double r_, double sig_, double K_, double T_, double U_, double b_, char* const optType_, double Div_, double DivTime_) :
            r(r_), sig(sig_), K(K_), T(T_), U(U_), b(b_), Div(Div_), DivTime(DivTime_)
        {
            CalU_div();
            optType = new char[strlen(optType_) + 1];
            strcpy(optType,optType_);
            Update_CallPutFull();
        }

        EuropeanOption(const EuropeanOption& EO):
            r(EO.r), sig(EO.sig), K(EO.K), T(EO.T), U(EO.U), b(EO.b), Div(EO.Div), DivTime(EO.DivTime)
        {
            Div = 0.0;        // constant Dividend
            DivTime = 0.0; // payment time
            CalU_div();
            optType = new char[strlen(EO.optType) + 1];
            strcpy(optType, EO.optType);
            Update_CallPutFull();
        }
    
        virtual ~EuropeanOption()
        {
            if (optType != nullptr)
                delete[] optType;
            if (optType_Full != nullptr)
                delete[] optType_Full;
        }

        // GetOptType
        char* GetOptType();

        // Functions that calculate option price and sensitivities
        double Price() const;
        double Delta() const;

        // Modifier functions
        void toggle();        // Change option type (C/P, P/C)
        void Update_CallPutFull();
        void SetConstantDiv(double Div, double payTime);
        void CalU_div(){ U_div = U - Div * exp(-DivTime * r); }

};


