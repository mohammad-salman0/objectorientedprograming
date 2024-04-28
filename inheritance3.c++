#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rollno;
    int batch;
    int session;
    void display()
    {
        cout << "the name of the student is : " << name << endl;
        cout << "the roll no of the student is : " << rollno << endl;
        cout << "the batch of the student is : " << batch << endl;
        cout << "the session of the student is :" << session << endl;
        
    }
    student ();
    student(string s , int rno, int ba , int sess  )
    {
        name = s;
        rno = rollno;
        batch = ba ;
        session = sess;
    }
};
class test : virtual public student
{
public:
    int marks1, marks2, marks3;
  
    void display2()
    {
        cout << "marks in science :" << marks1 << endl;
        cout << "marks in maths :" << marks2 << endl;
        cout << "marks in  urdu :" << marks3 << endl;
    }
    test(int m1 , int m2 , int m3)
    {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
};
class sports : virtual public student
{
public:
    string performance;
    void display3()
    {
        cout << "the performance of the studnet is " << performance << " in sports " << endl;
    }
    
    sports (string s2)
    {
        performance = s2;
    }
};
class result : protected test, protected sports
{
public:
    float result2;
    float calc()
    {
        result2 = ((marks1 + marks2 + marks3) / 3.0);
    }
    void displayresult()
    {
        calc();
        cout << "the overall result of the student is " << result2 << endl;
        display2();
        display3();
    }
    result(string s3 , int noo, int no2 , int no3 , int no4 , int no5 , int no6 , string s4):student(s3 ,noo ,no2 ,no3),test(no4 , no5 ,no6),sports(s4){
        result2 = 0;
    }
};
int main()
{
    result salman("salman",11,22,24,90,92,94,"excellent");
    
    salman.displayresult();
    return 0;
}