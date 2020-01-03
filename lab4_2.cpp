#include<iostream>

using namespace std;

//Write function findDistance() here
double findDistance(double u,double a,double t)
{
  double s;
    s=(u*t)+0.5*a*(t*t);
    return s;
}

int main(){

  //Calling findDistance() using test cases
  cout<<"Distance is "<<findDistance(5,4,3);

  return 0;
}
