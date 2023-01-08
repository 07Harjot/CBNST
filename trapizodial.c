#include<stdio.h>
float valueat(float x){
return x*x*x;
}
int main(){
    int n;
    float i,h,sum=0,a,b;
    printf("enter the number of intervals\n");
    scanf("%d",&n);
printf("enter the upper and lower limit\n");
scanf("%f %f",&a,&b);
h=(b-a)/n;

sum=valueat(a)+valueat(b);

for(i=a+h;i<b;i=i+h){
sum = sum + 2*valueat(i);
}
sum=sum*h/2;
printf("value of integral= %f",sum);
return 0;
}