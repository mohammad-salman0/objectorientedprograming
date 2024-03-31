#include<iostream>
using namespace std;

class employee{
private: 
int a ,b ,c;
public:
int   d;
void display (){
    cout<<a;
     cout<<b;
      cout<<c;
       cout<<d;
}
void set (int a1 , int b1 , int c1);  



};
void employee ::set(int a1, int b1, int c1){
    a =a1;
    b=b1;
    c=c1;}
int main()
{
employee harry;
harry.set(1,2,3);
harry.d=4;
harry.display();
}

