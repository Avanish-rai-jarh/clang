#include<stdio.h>
#include<math.h>
// instructions and operators
// arithmetic instructions
int main(){
    // int a,b;
    // a=23;
    // b=34;
    // printf("sum=%d",a+b);
        //    or
    int a=23;
    int b=34;
    printf("sum=%d",a+b);

// power of a number
    int m=2;
    int n=3;
    printf("\n%d",(int)pow(m,n));//8
//remainder of a number 
    int n3=3;
    int n4=4;
    printf("\nremainder=%d",-n4%n3);

//implicit and explicit conversion
    // int a=1.999999;
    // printf("\n%d",a);//this gives error
    int nu=(int)1.99999999;
    printf("\n%d",nu);//it give integer value as 1 becau8se we have done explicit conversion from float to integer forcefully.

//see priority and then proceed with leftb to right 
    printf("\n%d",2+3/3*5);

    
// logical operators
    printf("\n%d",3>2 && 4>3);//1
    printf("\n%d",2>4 &&  4>2);//0
    printf("\n%d",2<1 && 2>10);//0


    printf("\n%d",3>2 || 4>3);//1
    printf("\n%d",2>4 ||  4>2);//1
    printf("\n%d",2<1 || 2>10);//0

    printf("\n%d",!(4>1)); //0


//division check
 printf("\nenter your number====>");
 scanf("%d",&a);
 if (a%2==0)
     printf("Yes The Given Number Is Divisible By 2");

 else
     printf("No The Given Number Is Not Divisible By 2");

//average of three number
float fa, fb, fm;
printf("\nnumber1=");
scanf("%f",&fa);
printf("\nnumber2=");
scanf("%f",&fb);
printf("\nnumber3=");
scanf("%f",&fm);
printf("\nAverage Of Your Numbers====>%f",(fa+fb+fm)/3 );

//practice of checking whether it is a digit or not
printf("enter character==");
scanf("%d",&n);
printf("%d",0<=n && n<10);// 1 for digit and 0 for non digit

    return 0;
   

}