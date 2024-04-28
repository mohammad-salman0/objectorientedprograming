#include<iostream>
using namespace std;
template <class T1 ,class T2>
float avg(T1 a , T2 b)
{
    return (a+b)/2.0;
}
int main ()
{
    float a , b ;
    a = avg(2.0 , 3.0);
    cout<<"the average is is "<<a <<endl;
    b= avg(12,3.0);
    cout<<"the average is "<<b <<endl;
    return 0 ;
}