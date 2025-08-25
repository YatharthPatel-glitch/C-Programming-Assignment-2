#include<stdio.h>
int main() {

float a, b, c, d;

printf("Enter marks: ");
scanf("%f", &a);

if(a > 70)
{
    printf("Distinction");
}
else if(a > 60 && a < 70)
{
    printf("First");
}
else if(a > 50 && a < 60)
{
    printf("Second");
}
else if(a > 25 && a < 50)
{
    printf("Third Class");
}
else if(a >= 0 && a < 35)
{
    printf("Fail");
}
return 0;

}
