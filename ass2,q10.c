#include<stdio.h>
int main(){
int a,r,s;
printf("enter a number: ");
scanf("%d",&a);
r=(a%10);
printf("the remainder is %d\n",r);
s=(a-r);
printf("the net value is %d\n",s);

return 0;
}



