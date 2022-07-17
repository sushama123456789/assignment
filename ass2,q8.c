#include<stdio.h>
int main(){
int a,r;
printf("enter a number : ");
scanf("%d",&a);
r=a%2;
if(r==0){
   printf("%d is an even number",a);
}
else{
 printf("%d is an odd number",a);
}

return 0;
}
