#include<stdio.h>
float valueat(float x){
    return x*x*x - 2*x - 5;
}
float bisect(float x1,float x2){
    return (x1+x2)/2;
}

int main(){
    int maxitr,i;
    float x1,x2,x;
printf("enter the no of iteration\n");
scanf("%d",&maxitr);
do{
     printf("enter the initial roots\n");
     scanf("%f %f",&x1,&x2);
     if(valueat(x1)*valueat(x2)>0){
        printf("roots are not valid\n");
        continue;
     }
     if(valueat(x1)*valueat(x2)<0){
        printf("roots lies between %f and %f\n",x1,x2);
        break;
     }

}while(1);
for(i=0;i<maxitr;i++){
x=bisect(x1,x2);
if(valueat(x)*valueat(x1)<0){
    x2=x;
}
else{
    x1=x;
}
printf("iteration %d  root %f\n",i+1,x);
}
printf("total no of iteration  %d  root  %f\n",maxitr,x);
return 0;
}