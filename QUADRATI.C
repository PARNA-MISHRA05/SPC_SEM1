#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float a,b,c,disc,root1,root2,equal_root;
 clrscr();
 printf("ENTER THE COEFFICIENTS a,b,c of the quadratic equation:");
 scanf("%f%f%f",&a,&b,&c);
 disc=b*b-4*a*c;
 if(disc<0)
 printf("\nTHE ROOTS ARE IMAGINARY");
 else if(disc==0)
 {
   equal_root=-b/(2*a);
   printf("\nTHE ROOTS ARE REAL AND EQUAL AND THEIR VALUE IS: %f",equal_root);
 }
 else if (disc>0)
 {
 root1=(-b+sqrt(disc))/2*a;
 root2=(-b-sqrt(disc))/2*a;
 printf("\nTHE ROOTS ARE %f AND %f ",root1,root2);
 }
 getch();
}
