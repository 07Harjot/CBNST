#include<stdio.h>
int n;
void uppertriangular(float a[][n+1],int n){
int i,j,k;
float ratio;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(j>i){
ratio=a[j][i]/a[i][i];
for(k=0;k<n+1;k++){
    a[j][k]=a[j][k]- (ratio*a[i][k]);
}
    }}
}
}
void backsub(float a[][n+1],float value[],int n){
    float sum;
    int i,j;
    value[n-1]=a[n-1][n]/a[n-1][n-1];
    for(i=n-2;i>=0;i--){
        sum=0;
        for(j=i+1;j<n;j++){
            sum=sum +a[i][j]*value[j];
        }
        value[i]=(a[i][n]-sum)/a[i][i];
    }
}
void print(float value[],int n)
{  
   int i;
   printf("Values of unknowns are:\n");
   for(i=0;i<n;i++)
      printf("Value[%d]=%f\n",i,value[i]);  
}
int main(){
int i,j;
float sum,ratio;
printf("enter the no of unknowns\n");
scanf("%d",&n);
float a[n][n+1],value[n];
printf("enter the augumented matrix\n");
for(i=0;i<n;i++){
    for(j=0;j<n+1;j++)
    scanf("%f",&a[i][j]);
}
uppertriangular(a,n);
backsub(a,value,n);
print(value,n);
return 0;
}