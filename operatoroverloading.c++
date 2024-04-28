#include<iostream>
using namespace std;
class point{
    private :
    int a ,b ;
    public :
    point ()
    {
    a = 0;
    b= 0;
    }
    point (int x , int y)
    {a = x;
    b = y;
    }
     void output(){
        cout<<"the co-ordinates of the point  is ("<<a<<"," <<b<<")"<<endl;

     }
     point operator+(point p)
     {
        point temp;
        temp.a = a + p.a;
        temp.b = b + p.b;
        return temp ;
     }
     void result ()
     {
        cout<<"The sum of the points is as follows :("<<a<<","<<b<<")" ;

     }
};
int main ()
{
    int x1 , y1 ;
cout<<"enter the co-ordinates of the first  point" <<endl;
cin>>x1>>y1;
point p1 (x1 , y1);
p1.output();
int x2 , y2;
cout<<"enter the co_ordinates of the second point "<<endl;
cin>>x2>>y2;
point p2 (x2, y2);
point p3;
p3 = p1 + p2;
p3.result();
return 0;
}