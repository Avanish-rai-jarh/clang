
//functions and recursions
#include<stdio.h>
#include<math.h>

//function prototype
void name();
void goodbye();
void congrats1();
void congrats2();
int sum(int a,int b);
void table(int n);
void square(int sq);
void recur(int count);
int add(int alpha);
int fact(int number);
float temp(float degree);
float percent(float m1,float m2,float m3);
int fibo(int x1);
//function call
int main(){
    name();
    goodbye();
    char country;
    printf("enter your nationality :");
    scanf("%c",&country);
    if (country=='i'){
        congrats1();
    }
    else{
        congrats2();
    }


    int a;
    printf("enter number a:");
    scanf("%d",&a);
    int b;
    printf("enter number b:");
    scanf("%d",&b);
    int s =sum(a,b);
    printf("sum of a and b is %d\n",s);
    
    int n;
    printf("enter your number :");
    scanf("%d",&n);
    table(n);

    int sq;
    printf("enter number:");
    scanf("%d",&sq);
    square(sq);

    recur(10);
    printf("%d\n", add(100));
    printf("%d\n", fact(5));
    printf("temperature in farenheit is : %f\n",temp(30));

    float m1,m2,m3;
    printf("enter marks in Science:");
    scanf("%f",& m1);
    printf("enter marks in Mathematics:");
    scanf("%f",& m2);
    printf("enter marks in Sanskrit:");
    scanf("%f",& m3);
    printf("Your overall percentage is : %f\n",percent(m1,m2,m3));
    int x1;
    printf("enter value:");
    scanf("%d",&x1);
    fibo(x1);
    return 0;
}

//function definition
void name(){
    printf("Avanish_Rai\n");
}
void goodbye(){
    printf("good_bye\n");
}
void congrats1(){
    printf("namaste\n");
}
void congrats2(){
    printf("bonjour\n");
}
int sum(int a,int b){
    return a+b;
}
void table(int n){
    for(int i=1;i<=10;i+=1){
        printf("%d*%d=%d\n",n,i,n*i);
    }
}
void square(int sq){
    printf("square of number is : %d\n",sq*sq);
}
void recur(int count){
    if (count==0){
       return;
    }
    printf("hello world\n");
    recur(count-1);
}
// sum using recursion
int add(int alpha){
    if(alpha==1){
    return 1;
}
int sumnm1=add(alpha-1);
int sumn=sumnm1+alpha;
return sumn;

}
// factorial usng recursion
int fact(int number){
    if(number==1){
        return 1;
    }
    int fnm1=fact(number-1);
    int fn=fnm1*number;
    return fn;
}
//temperature change
float temp(float degree){
    float faren=degree*1.8+32;
    return faren;




    return 0;
}
float percent(float m1, float m2 , float m3){
    if (m1>100 || m2>100 || m3>100){
        printf("Invalid ! mark input, try again\n");
        return 0;
    }
    float percentage=(m1+m2+m3)/3;
    return percentage;
}
//fibonacci sequence
int fibo(int x1){
int fiboo[x1];
fiboo[0]=0;
fiboo[1]=1;
 printf("%d\n%d\n",fiboo[0],fiboo[1]);
for(int l=2;l<=x1;l+=1){
  fiboo[l]=fiboo[l-1]+fiboo[l-2];
  printf("%d\n",fiboo[l]);
}
return 0;
}




    
