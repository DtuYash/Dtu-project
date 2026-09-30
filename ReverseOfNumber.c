#include<stdio.h>
int main(){


int n,a,d=1,sum=0;
printf("enter the number");
scanf("%d",&n);


for(int i=1;n!=0;i++){

a=n%10;

sum=sum*10+a;

n=n/10;




}

printf("%d",sum);
















    return 0;
}