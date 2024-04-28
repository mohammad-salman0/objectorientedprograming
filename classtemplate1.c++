#include<iostream>
using namespace std;
class base1{
    public:
    int a;
     virtual void display()
    {cout<<"hello";
    cout<<a;
    }
};
class base2 {
public :
void display (){
    cout<<"hola ";
}
};
class derived : public base1 , public base2 {
public :
int c;
 void display ()
 {
    cout<<"derived class display function";
 }
};
int main()
{
    derived salman;
    
    base1 * basepointer;
    basepointer = &salman;
    basepointer->a=23;
    basepointer->display();
}