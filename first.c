#include <stdio.h>
int main(){
    printf("hello world\n");

// PRINTING IN DIFFERENT LINES
    printf("hello\n Avanish Rai \n");
    int a=2;
    printf("%d\n",a);

// for printing integers
int integ=102;
printf("%d\n",integ);

// for printing real numbers
 float b=21.768586;
 printf("%d\n",b);

//  for printing characters
char letter='a';
printf("%c\n",letter);


// print sum of numbers
float m,n;
printf("enter m =");
scanf("%f",&m);

printf("enter n =");
scanf("%f",&n);

printf("%f\n",m+n);


// area of a square
float side1,side2;
printf("enter side1=");
scanf("%f",&side1);
printf("enter side2="); 
scanf("%f",&side2);
if (side1==side2)
printf("area of square is=%f",(side1*side1));
else
printf("area of rectangle is=%f",(side1*side2));
// area of a circle
float r;
printf("\nenter radius=");
scanf("%f",&r);
printf("area of required circle is=%f",(3.14*r*r));
return 0;
}



