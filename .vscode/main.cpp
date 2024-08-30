#include <iostream>
#include "qbMatrix.h"

using namespace std;

int main(){
    qbMatrix2<double> m1;
    qbMatrix2<double> m2(3,3);

    delete m1,m2;
    return 0;
}