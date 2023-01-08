#include<stdio.h>
#include<math.h>
#define EPSILON 0.0001
float valueat(float x){
    return x*x*x -2*x -5;
}

float findx(float x1,float x2){
    return (x1*valueat(x2) - x2*valueat(x1))/(valueat(x2)-valueat(x1));
}
int main(){
int maxitr,i;
float x,x1,x2,x3;
printf("enter the no of iteration\n");
scanf("%d\n",&maxitr);

do{
    printf(" enter the initial roots\n");
    scanf("%f%f",&x1,&x2);
if(valueat(x1)*valueat(x2)>0){
    printf("invalid roots\n");
    continue;
}
else{
    printf("roots lies between %f and %f\n",x1,x2);
    break;
}
}while(1);
x=findx(x1,x2);
for(i=0;i<maxitr;i++){
    if(valueat(x)*valueat(x1)<0){
        x2=x;
    }
    else{
        x1=x;
    }
    printf("iteration %d  and root  %f\n",i+1,x);
    x3=findx(x1,x2);

    if(fabs(x3-x)<EPSILON){
        printf("iteration  %d  root  %f\n",i+1,x);
        return 0;
    }
    x=x3;
}
printf("iteration  %d  and root  %f\n",i,x);
return 0;
}