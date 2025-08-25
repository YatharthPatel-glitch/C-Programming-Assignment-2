#include<stdio.h>

int main(){

int a;
int b;

printf("Enter the value of a : ");
scanf("%d" , &a);

printf("Enter the value of b : ");
scanf("%d" , &b);

if(a <= b){
printf("%d(a) is smallest.\n",a);
}
else{
printf("%d(b) is smallest.\n",b);
}

if(a >= b){
  printf("%d(a) is largest.\n",a);
}
else{
  printf("%d(b) is largest.\n",b);
}

return 0;
}
