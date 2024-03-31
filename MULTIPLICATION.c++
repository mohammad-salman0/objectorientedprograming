#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
int n ;
printf ("enter a number \n");
scanf("%d", &n);
int product = 1;
for(int i = 1;i<=n;i++)
{product = product * i;}
printf("the product of the numbers is  %d\n", product);
return 0;
}