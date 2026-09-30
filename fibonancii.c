#include<stdio.h>

int fib(int n);

int fib(int n){

if(n==0){return 0;}

if(n==1){return 1;}

int a= fib(n-1) + fib(n-2) ;

return a;
}



int main(){
int n ; 
printf("enter the number: ");
scanf("%d",&n);
int b=fib(n);
printf("fibonachi of the number is : %d", b );
return 0;
}

//int x=0;
//int y=1;
//int n;
//printf("enter the number : ");
//scanf("&d", &n);

//for(int z=0;z<=n;z=x+y){
 //  printf("%d\n",z);
  // x=y;
   //y=z;
   
//}




  //  return 0;
//}
////