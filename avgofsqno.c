#include<stdio.h>
int main(){

    int a,b,c=0;
printf("enter your first number: ");
scanf("%d", &a);
printf("enter your last number: ");
scanf("%d", &b);

for(int i=a;i<=b;i++){

    c=c+i*i;


}
float d;
float e=b-a+1;
d=c/e;

printf("%f",d);
return 0;
}