#include<stdio.h>
int main(){
 int a,b,c,d,e,f,g,h,i,j;
printf("enter your 1st no: ");
scanf("%d",&a);
printf("enter your 2nd no: ");
scanf("%d",&b);
printf("enter your 3rd no: ");
scanf("%d",&c);
printf("enter your 4th no: ");
scanf("%d",&d);
printf("enter your 5th no: ");
scanf("%d",&e);
printf("enter your 6th no: ");
scanf("%d",&f);
printf("enter your 7th no: ");
scanf("%d",&g);
printf("enter your 8th no: ");
scanf("%d",&h);
printf("enter your 9th no: ");
scanf("%d",&i);
printf("enter your 10th no: ");
scanf("%d",&j);

int max;
max=a;

if (b>max){
    max=b;
}
if (c>max){
    max=c;
}
if (d>max){
    max=d;
}
if (e>max){
    e=max;
}

if (f>max)
{
    max=f;
}

if (g>max){
    max=g;
}
if (h>max){
    max=h;
}
if (i>max){
    max=i;
}
if (j>max){
    max=j;
}


printf("the largest number amongst these is: %d",max);

return 0;

} 