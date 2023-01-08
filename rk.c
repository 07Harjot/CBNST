#include<stdio.h>
#include<math.h>
#define f(x,y) (x+(y*y))
int main(){
float x0,y0,h,k1,k2,k3,k4,k,xn;
printf("enter the value of x0 y0,h,xn\n");
scanf("%f %f %f %f",&x0,&y0,&xn,&h);
printf("\n\nX\t\tY\n");
while(x0<xn){
k1=h*f(x0,y0);
k2=h*f((x0+h/2),(y0+k1/2));
k3=h*f((x0+h/2),(y0+k2/2));
k4=h*f((x0+h),(y0+k3));
k=(k1+2*k2+2*k3+k4)/6;
y0=y0+k;
x0=x0+h;
printf("%f\t%f\n",x0,y0);
}
}