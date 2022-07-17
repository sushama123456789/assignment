#include<stdio.h>
int main(){

int a,b,c;
printf("enter the two number");
scanf("%d %d",&a,&b);
//int c;
c=a;
a=b;
b=c;
printf("after the swapping\n");
printf("the first value is %d and the second value is %d",a,b);


return 0;
}
