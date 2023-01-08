#include<stdio.h>
int main(){
int n,i,j;
printf("enter the number of terms\n");
scanf("%d",&n);
float X[n],Y[n],sum=0,x,term;
printf("enter the values  of x\n");
 for(i=0;i<n;i++){
    scanf("%f",&X[i]);
 }
printf("enter the values  of y\n");
for(i=0;i<n;i++){
    scanf("%f",&Y[i]);
 }
 printf("enter the value of x to find y\n");
 scanf("%f",&x);

for(i=0;i<n;i++){
    term=1;
    for(j=0;j<n;j++){
        if(i!=j)
            term=term * ((x-X[j])/(X[i]-X[j]));
    }
    sum=sum + term * Y[i];
}
printf("sum = %f",sum);
return 0;
}