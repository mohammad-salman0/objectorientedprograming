#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
int n ;
printf ("enter a number \n");
scanf("%d", &n);
int sum = 0;
for(int i = 1;i<=n;i++)
{sum = sum + i;}
printf("the sum of the numbers is as follws  %d\n", sum);
return 0;
}