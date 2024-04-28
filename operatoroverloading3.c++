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
     int operator>(point p)
     {
        if(a>p.a && b>p.b)
        return 1;
        else 
        return 0;
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
if(p1>p2)
cout<<"point p1 is greater than p2";
else
cout<<"point p2 is greater than p1";
return 0;
}