// < Mohyla Taras >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 21
#define _USE_MATH_DEFINES
#include<cmath>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
double a; // вхідний параметр
double z1; // результат обчислення 1-го виразу
double z2; // результат обчислення 2-го виразу
    
cout << "a = "; cin >> a;
    
z1 = 2 * (sin(3*M_PI - 2*a) * sin(3*M_PI - 2*a)) * cos(5*M_PI + 2*a) * cos(5*M_PI + 2*a);
z2 = (1./4) - (1./4) * sin((5./2) * M_PI - 8*a);
    
cout<<endl;
cout << "z1 = " << z1 << endl;
cout << "z2 = " << z2 << endl;
    
 cin.get();
 return 0;
    
}

