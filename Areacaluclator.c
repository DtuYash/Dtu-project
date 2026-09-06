#include<stdio.h>

float square(float x);

float recatangle(float x,float y);

float circle(float x);

////////////////////////////////////////////////
float square(float x){
float y;
y=x*x;

return y;

}
////////////////////////////////////////////
float rectangle(float x,float y){
float z;
z=x*y;

return z;

}

///////////////////////////////////////////////////
float circle(float x){
float y;
y=x*x*3.14;

return y;

}
///////////////////////////////////////////////////////////////////////
int main(){

int i;

    printf("press 1 for square, press 2 for the rectangle ,press 3 for the circle");
scanf("%d",&i);

if(i==1){

   float a,b;
printf("enter the dimension of the side: ");
scanf("%f",&a);
b=square(a);
printf("the area of the square is:%f\n",b);
}

else if(i==2){

   float a,b,c;
printf("enter the dimension of the lenght: ");
scanf("%f",&a);
printf("enter the dimension of the breath: ");
scanf("%f",&c);

b=rectangle(a,c);
printf("the area of the rectangle is:%f\n",b);
}

else if(i==3){

float a,b;
printf("enter the dimension of the radius: ");
scanf("%f",&a);
b=circle(a);
printf("the area of the circle is:%f\n",b);
}
else{


printf("aukat me rheh aur 3 shape se kaam chala");

}

return 0;
}

















