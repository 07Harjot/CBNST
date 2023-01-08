#include<stdio.h>
#include<math.h>

int main(){
float a[100][100],x,u1,u,y;
int i,j,n,fact;
printf("enter no of terms\n");
scanf("%d",&n);
printf("enter the values of x\n");
for(i=0;i<n;i++){
    scanf("%f",&a[i][0]);
}
printf("enter the values of y\n");
for(i=0;i<n;i++){
    scanf("%f",&a[i][1]);
}
printf("enter the value for which you want to find\n");
scanf("%f",&x);
for(j=2;j<n+1;j++){
    for(i=0;i<n-j+1;i++){
      a[i][j]=a[i+1][j-1]-a[i][j-1];  
    }
}

printf("difference table\n");
for(i=0;i<n;i++){
    for(j=0;j<=n-i;j++){
        printf("%f",a[i][j]);
        printf("\n");
    }
}
u=(x-a[0][0])/(a[i][0]-a[0][0]);
y=a[0][1];
u1=u;
fact=1;
    for(i=2;i<=n;i++)
    {
        y=y+(u1*a[0][i])/fact;
        fact=fact*i; 
        u1=u1*(u-(i-1));
    }
    printf("\n\nValue at X=%g is = %f", x,y);
}
