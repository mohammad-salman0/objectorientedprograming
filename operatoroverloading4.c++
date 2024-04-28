#include <iostream>
using namespace std;
class distannce
{
private:
    int feet;
    int inches;

public:
    distannce()
    {
        feet = 0;
        inches = 0;
    }
    distannce(int f, int i)
    {
        feet = f;
        inches = i;
    }
    int operator>(distannce d)
    {
        if (feet > d.feet)
            return 1;
        else if (d.feet > feet)
        return 0;
        else if (inches > d.inches)
            return 1;
        else
            return 0;
    }
    void output()
    {
        cout << "the sum of the distance is as" << feet << "feet and " << inches << "inches";
    }
};
int main()
{
    distannce d1(15, 52);

    distannce d2(15, 23);
    distannce d3;
    if (d1 > d2)
        cout << "d1 is greater than d2";
    else
        cout << "d2 is greater ";
    return 0;
}