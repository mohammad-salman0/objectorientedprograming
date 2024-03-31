#include<iostream>
using namespace std;
class Y;

class X{
private :
int a ;
public: 
    X()
    {}
  X (int x){
      a = x;
    } 
    friend void swap (X &  , Y &);
       void display1()
    {cout<<"THE VALUE OF a  BEFORE SWAPPING IS "<<a<<endl;}
    void display2()
    {cout<<"THE VALUE OF a AFTER SWAPPING IS "<<a<<endl;}
};

 
class Y{
    int b ;
    public :
    Y (int y){
        b = y;
    }
   friend void swap (X &  , Y & );
   void display3()
    {cout<<"THE VALUE OF b  BEFORE SWAPPING IS "<<b<<endl;}
   void display4()
   {cout<<"THE VALUE OF b AFTER SWAPPING IS "<<b<<endl;}
};
void swap(X & o1 , Y & o2){
    int temp ;
    temp = o1.a;
    o1.a = o2.b;
    o2.b= temp;

}


int main ()
{ 
    X o1(4) ;
    Y o2 (5);
    o1.display1();
    o2.display3();
    swap(o1 , o2);
    o1.display2();
    o2.display4();
}  