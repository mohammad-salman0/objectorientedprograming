#include<iostream>
using namespace std;
class base1{
    public:
    void display()
    {cout<<"hello";
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
 void display ()
 {
    base2 :: display();
 }
};
int main()
{
    derived salman;
    salman.display();
}