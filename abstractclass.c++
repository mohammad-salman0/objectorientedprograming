#include<iostream>
using namespace std;
class base1{
    public:
    virtual void display()=0;
    
};
class base2 {
public :
void display (){
    cout<<"hola ";
}
};
class derived : public base1 , public base2 {
public :
 void display ()
 {
    cout<<"asalamolikum";
 }
};
int main()
{
    derived salman;
    salman.display();
}