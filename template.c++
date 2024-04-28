#include<iostream>
using namespace std;
template <class T1 ,class T2= float>
class devdas{
    public:
    T1 x ;
    T2 y;
    T2 z;
    devdas(T1 a , T2 b){
        x = a;
        y = b ;
        z= 0.0;
    }
void display()
{cout<<"the value is "<<x<<y;
}
};
int main()
{
    devdas<int , float>salam(12,13.2);
    salam.display();
    devdas<char , int> abdul('a',2);
    abdul.display();
    devdas<int >amar(12, 23.23);
    amar.display();
}