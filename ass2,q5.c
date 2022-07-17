#include<stdio.h>

int main(){
int a,b=0;
printf("Enter a 3 digit number");
scanf("%d",&a);
for(int i=0;i<3;i++){
  b=a%10+b;
  a=a/10;

}
printf("%d",b);


return 0;
}
