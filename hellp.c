#include<stdio.h>
int main(){
int n;
printf("enter the number triagnle u want to make: ");
scanf("%d",&n);
int a=0;

for(int i=1;i<=n;i++){

a=a+1;
 for(int j=1;j<=i;j++)
 {
 printf("%d",a);
 
 }


printf("\n");
}

return 0;
}