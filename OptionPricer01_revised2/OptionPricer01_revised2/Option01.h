#pragma once

namespace fre {
	//pricing European option
	double PriceByCRR(double S0, double U, double D, double R, int N, double K);

	//computing call payoff
	double CallPayoff(double z, double K);

	//homework 1 version 1
	double HW1Function(int N, int n);
	double HW1PriceByCRR(double S0, double U, double D, double R, int N, double K);

	//homework 1 version 2
	double HW1Factorial(int n);
	double HW1V2PriceByCRR(double S0, double U, double D, double R, int N, double K);

}