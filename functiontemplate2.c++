#include<iostream>
using namespace std;
template <class T1 >
float avg(T1 & a, T1 & b)
{
    T1 c;
    c= a;
    a= b;
    b=c;
    
}
int main ()
{
    float f1 = 2.3 ;
     float f2 = 3.4;
    avg(f1 , f2);
    cout<<"the value of f1 after swapping is "<<f1<<endl<<"and the value of f2 is "<<f2;
    int a = 23;
    int b = 34;
    avg(a , b);
    cout<<"the value of a after swapping is "<<a<<endl<<"and the value of b is "<<b;
    return 0 ;
}