#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x,y,e=2.71828;
    cout<<"Enter x =";
    cin>>x;
    y=(3*x*x*x)+(2*e)+pow(2,(2*x+1))+sqrt(x*x+1);
    cout<<"Result y ="<<y;
    return 0;
}
