#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
double func(double x)
{
    return (x*exp(x)-2*x*x-1);
}
double find(double x0, double x1, double eps)
{
    double left = x0, right = x1, x, fl, fr, f;
    int iter = 0;
    cout << "x0= " << x0 << " x1= " << x1 << " ";
    do {
        x = (left + right) / 2;
        f = func(x);
        if (f > 0) right = x;
        else left = x;
        iter++;
    } while (fabs(f) > eps && iter < 20000);
    cout << iter << " iterations" << endl;
    return x;
}
int main()
{
    cout << find(1.0, 10.0, 0.000001);
    cin.get(); return 0;
}