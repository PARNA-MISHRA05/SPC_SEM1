#include<stdio.h>
#include<conio.h>
int evensum(int a, int b)
{
 if(a>b) return 0;
 if(a%2==0)
 {
  return (a+evensum(a+2,b));
 }
 else return(evensum(a+1,b));
}
int oddsum(int a,int b)
{
 if(a>b) return 0;
 if(a%2!=0)
 {
  return(a+oddsum(a+2,b));
 }
 else return(oddsum(a+1,b));
}

void main()
{
 int a,b,esum,osum;
 clrscr();
 printf("\nENTER THE SMALLEST AND LARGEST CAP OF THE RANGE :");
 scanf("%d %d",&a,&b);
 esum=evensum(a,b);
 osum=oddsum(a,b);
 printf("\nSUM OF EVEN TERMS IS %d",esum);
 printf("\nSUM OF ODD TERMS IS %d",osum);

 getch();
}
