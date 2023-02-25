#include<stdio.h>
#include<conio.h>
float Power(float base,float exponent)
{
  if(exponent==0) return 1;
  else return (base*Power(base,(exponent-1)));
}

void main()
{
 float num,power,result;
 clrscr();
 printf("\nENTER THE NUMBER AND THE POWER ");
 scanf("%f %f",&num,&power);
 result=Power(num,power);
 printf("\nRESULT= %f",result);
 getch();
}
