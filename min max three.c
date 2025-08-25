#include<stdio.h>

int main() {
int a;
int b;
int c;

printf("Enter the value of a : ");
scanf("%d" , &a);
printf("Enter the value of b : ");
scanf("%d" , &b);
printf("Enter the value of c : ");
scanf("%d" , &c);

if(a <= b && a <= c){
printf("%d(a) is smallest.\n",a);
}
else if(b <= a && b <= c){
printf("%d(b) is smallest.\n",b);
}
else{
printf("%d(c) is smallest.\n",c);
}

 if(a >= b && a >= c){
printf("%d(a) is largest.\n",a);
}
else if(b >= a && b >= c){
printf("%d(b) is largest.\n",b);
}
else{
printf("%d(c) is largest.\n",c);
}

return 0;
}
