# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include<iostream>
#include<iomanip>
#define PI 3.14159265358979323846
double Cylinder :: SurfaceArea(){
    
    return 2.0*height*PI*radius+PI*radius*radius*2;
}

double Cylinder :: Volume(){
    return 1.0*PI*radius*radius*height;
}

double Cylinder :: Circumference(){
    return 1.0*PI*radius*2;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in>>cldr.radius>>cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<"Circumference: "<<fixed<<setprecision(3)<<cldr.Circumference()<<endl;
    out<<"SurfaceArea: "<<fixed<<setprecision(3)<<cldr.SurfaceArea()<<endl;
    out<<"Volume: "<<fixed<<setprecision(3)<<cldr.Volume()<<endl;
    return out;
}

# endif
