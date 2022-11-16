#ifndef MAIN_H
#define MAIN_H
#include<string>
#include<cmath>

#define pi 3.141593

double radius(double c){
    return c / (2*pi);
}
double area(double rad){
    return 2*pi*rad*rad;
}
#endif // MAIN_H
