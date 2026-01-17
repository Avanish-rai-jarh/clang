//Conditional Statements
#include<stdio.h>
#include<math.h>
int main(){
float age;
printf("enter age:");
scanf("%f",&age);
if (age>=18){
    printf("he is adult");
}
else{
    printf("he is not adult\n");
}
//TERNERY OPERATORS
printf("\nEnter Your Age:");
scanf("%f",&age);
age==5? printf("True"): printf("False");

//Switch operator
int mode;
printf("\nenter mode=");
scanf("%d",&mode);
switch(mode){
    case 1:printf("\nyou have selected dark mode");
               break;
    case 2:printf("\nyou have selected light");
                break;
    default:printf("you have selected wrong mode\n");
}

//nesting
float marks;
printf("\nenter your marks====>");
scanf("%f",&marks);

if (marks >= 0 && marks <= 100){
    if (marks > 30){
    printf("Pass");
}
else if(marks <= 30 && marks >= 0){
    printf("Fail");
}
}
else{

    printf("you have entered invalid value");
}

// grading
float mark;
printf("\nenter your marks===>");
scanf("%f",&mark);

if(mark<30 && mark>=0){
    printf("Your Grade is 'C'");
}
else if(mark<70 && mark>=30){
    printf("Your Grade is 'B'");
}
else if(mark<90 && mark>=70){
    printf("Your Grade is 'A'");
}
else if(mark<=100 && mark>=90){
    printf("Your Grade is 'A+'");
}
else{
    printf("you entered invalid marks credentials , pls try again!");
}

// CHECKING ENTERED CHARACTER IS UPPER CASE OR NOT
char letter;
printf("\nenter your character==>");
scanf(" %c",&letter);

if (letter>='A' && letter<='Z'){
    printf("ENTERED CHARACTER IS 'UPPERCASE'");
}
else if(letter>='a' && letter<='z'){
    printf("ENTERED CHARACTER IS 'LOWERCASE'");
}
else{
    printf("SORRY! you have entered wrong credentials");
}
// checking armstrong number
//checking natural number
int number;
printf("\nenter your number==>");
scanf("%d",&number);

if(number==(int)number && number>0){
    if(number>0){
    printf("ENTERED VALUE IS 'NATURAL NUMBER'");
}
}
else{

    printf("ENTERED VALUE IS 'NOT NATURAL NUMBER'");
}




return 0;
}

