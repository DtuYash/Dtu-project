#include<stdio.h>

int fact(int n);

int fact(int n){

    if(n==1){
         return 1 ;
        }
int a= n;
int b= fact(n-1)*n;

return b;

}

int main(){

printf("enter the number for which u want to calculate the factorial: ");
int n;
scanf("%d",&n);

printf("apka factorial is: %d",fact(n));





return 0;
}
