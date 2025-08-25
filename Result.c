#include<stdio.h>

int main() {
int maths;
int chemistry;
int physics;

printf("Enter the marks of maths : ");
scanf("%d" , &maths);
printf("Enter the marks of chemistry : ");
scanf("%d" , &chemistry);
printf("Enter the marks of physics : ");
scanf("%d" , &physics);
  
int total  = maths + chemistry + physics;
float avg = (maths + chemistry + physics)/3;
  
printf("Total of three subject = %d\n",total);
printf("Average of three subject = %f \n",avg);

if(maths < 35 || chemistry < 35 || physics < 35){
printf("Better luck next time ! You are fail.\n");
}
else{
if(avg >= 70){
printf("Congratulation , You got distinction\n");
}
else if(avg >= 60){
printf("Congratulations , You got first class.\n");
}
else if(avg >= 50){
printf("Congratulations , You got second class.\n");
}
else if(avg >= 35){
printf("Congratulations,You got third class.\n");
}
else{
printf("Better luck next time ! You are fail.\n");
}
}

return 0;
}
