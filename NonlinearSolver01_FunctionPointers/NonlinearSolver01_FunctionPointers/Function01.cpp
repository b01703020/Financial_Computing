//
//  Function01.cpp
//  NonlinearSolver01_FunctionPointers
//
//  Created by wu yen sun on 2022/3/27.
//

#include "Function01.h"
namespace fre
{
    double F1(double x) { return x * x - 2; }
    double DF1(double x) { return 2 * x; } 
}
