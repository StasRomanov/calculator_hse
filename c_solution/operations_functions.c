//
// Created by Илья Володин on 09.02.2022.
//

#include "operations_functions.h"
#include <tgmath.h>

comp u(comp a){return -a;}
comp mag(comp a){return cabs(a);}
comp phase(comp a){return atan(cimag(a)/creal(a));}
comp cabsd(comp a){return cabs(a);}
comp creald(comp a){return creal(a);}
comp cimagd(comp a){return cimag(a);}

comp plus(comp a, comp b){return a+b;}
comp minus(comp a, comp b){return a-b;}
comp multiplication(comp a, comp b){return a*b;}
comp division(comp a, comp b){return a/b;}
comp exponentiation(comp a, comp b){return cpow(a,b);}