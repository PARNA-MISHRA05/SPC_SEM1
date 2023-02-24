//call by value swap
//PARNA MISHRA D083 SAP:60009220201

#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
 printf("\nVALUES AFTER SWAPPING: num1=%d and num2=%d ",*a,*b);
}
void main()
{
 int num1,num2;
 clrscr();
 printf("\nENTER THE TWO NUMBERS TO BE SWAPPED: ");
 scanf("%d %d",&num1,&num2);
 printf("\nVALUES BEFORE SWAPPING: num1=%d and num2=%d",num1,num2);
 swap(&num1,&num2);
 //PROPERTY OF CALL BY VALUE
 printf("\nVALUES IN MAIN EVEN AFTER SWAPPING : num1=%d and num2=%d",num1,num2);
 getch();
}
