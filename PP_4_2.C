#include<stdio.h>
#include<conio.h>

void PRIME(int n)
{
  int i,count=0;
  for(i=0;i<=n;i++)
  {
   if(n%i==0)
   count++;
  }
  if(count==1)
   printf("\nUNIVERSAL NUMBER");
  else if(count==2)
   printf("\nPRIME NUMBER");
  else
   printf("\nCOMPOSITE NUMBER");
}



}

void armstrong(int n)
{
 int digit,sum=0;
 while(n!=0)
 {
  digit=n%10;
  sum+=digit*digit*digit;
  n/=10;
 }





void main()
{
 float r;
 clrscr();
 printf("enter the radius:");
 scanf("%f",&r);
 dimensions(r);
 getch();
}
