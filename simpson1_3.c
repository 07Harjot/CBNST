#include<stdio.h>
float valueat(float x){
    return 1/(1+(x*x));
}
int main(){
int n,pos=1;
float i,h,sum =0,a,b;
printf("enter the no of intervals\n");
scanf("%d",&n);
printf("enter the limit\n");
scanf("%f %f",&a,&b);

sum = valueat(a)+valueat(b);
h=(b-a)/n;
for(i=a+h;i<b;i=i+h){
    if(pos%2==0){
        sum = sum + 2*valueat(i);
    }
    else{
        sum= sum + 4*valueat(i);
    }pos++;
}
sum =sum *(h/3);
printf("The integral value is %f\n",sum);
return 0;
}