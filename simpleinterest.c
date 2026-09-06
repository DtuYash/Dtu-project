#include<stdio.h>
int main(){

int p,r;
int t;
printf("enter your principle amount: ");
scanf("%d", &p);

printf("enter your rate of intrest: ");
scanf("%d", &r);

printf("enter your time period: ");
scanf("%d", &t);

int x=p*r*t;
int si=x/100;

printf("Your simple interest of the period of %d would be %d ruppess",t,si);

return 0;







}