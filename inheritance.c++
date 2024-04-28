#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rollno;
    int batch;
    int session;
    void getdata()
    {
        cout << "enter the name of the student " << endl;
        cin >> name;
        cout << "enter the roll no " << endl;
        cin >> rollno;
        cout << "enter the batch of the student" << endl;
        cin >> batch;
        cout << "enter the session" << endl;
        cin >> session;
    }
    void display()
    {
        cout << "the name of the student is : " << name << endl;
        cout << "the roll no of the student is : " << rollno << endl;
        cout << "the batch of the student is : " << batch << endl;
        cout << "the session of the student is :" << session << endl;
    }
};
class test : virtual public student
{
public:
    int marks1, marks2, marks3;
    void getmarks()
    {
        cout << "enter the marks obtained science :" << endl;
        cin >> marks1;
        cout << "enter the marks obtained in maths :" << endl;
        cin >> marks2;
        cout << "enter the marks obtaines in urdu :" << endl;
        cin >> marks3;
    }
    void display2()
    {
        cout << "marks in science :" << marks1 << endl;
        cout << "marks in maths :" << marks2 << endl;
        cout << "marks in  urdu :" << marks3 << endl;
    }
};
class sports : virtual public student
{
public:
    string performance;
    void getinfo()
    {
        cout << "enter the performance of the student with respect to sports  ";
        cin >> performance;
    }
    void display3()
    {
        cout << "the performance of the studnet is " << performance << " in sports " << endl;
    }
};
class result : public test, public sports
{
public:
    float result;
    float calc()
    {
        result = ((marks1 + marks2 + marks3) / 3.0);
    }
    void displayresult()
    {
        calc();
        cout << "the overall result of the student is " << result << endl;
        display2();
        display3();
    }
};
int main()
{
    result salman;
    salman.getdata();
    salman.getmarks();
    salman.getinfo();
    salman.displayresult();
    return 0;
}