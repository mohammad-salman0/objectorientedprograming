#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
int n ;
printf ("enter a number \n");
scanf("%d", &n);
int fact = 1;
for(int i = 1;i<=n;i++)
{fact = fact * i;}
printf("the factorial  of the numbers is  %d\n", fact);
return 0;
}
