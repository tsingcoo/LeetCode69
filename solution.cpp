//
// Created by 王青龙 on 21/02/2017.
//

#include <cmath>
#include "solution.h"

int Solution::mySqrt(int x) {
    double x0 = 1.0;
    while (std::fabs(x0 * x0 -x) > 1e-5){
        x0 = (x0+x/x0)/2;
    }
    return x0;
}
