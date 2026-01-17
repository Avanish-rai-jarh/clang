
//loops
#include<stdio.h>
#include<math.h>

int main(){
    //for loop
    for(int i=0;i<=20;i+=1){
        printf("Avanish Rai (JARH):%d\n",i);
    }
    
//     int i;
//     for(i=20;i>=0;i-=1){
//         printf("Avanish Rai (JARH):%d\n",i);
//     }
//     return 0;

for(int a=0;a<=10;a+=1){
    printf("%d\n",a);
}
//printing all characters
for(char ch='a';ch<='z';ch+=1) {
    printf("character==%c\n",ch);
}

//while loop
int number=0;
while(number<=100){
    printf("Jhelum:%d\n",number);//prints numbers from 1 to 100
    number+=1;
}

int  a;

printf("enter number :");
scanf("%d",&a);
int b=0;
while(b<=a){
    printf("%d\n",b);
    b+=1;
}
//do while loop
int alpha=1;
do{
    printf("Avanish Rai:: %d\n",alpha);
    alpha+=1;
}while(alpha<=100);

//reverse of natural numbers
int n;
printf("enter number for reverse===>");
scanf("%d",&n);
int natural=n;
do{
    printf("%d\n",natural);
    natural-=1;
}while(natural>=1);


//sum of n natural number
int p;
printf("enter number for finding sum from 1 to the enterred number===>");
scanf("%d",&p);
int st=1;
int sum=0;
do{
    sum+=st;
    st+=1;
}while(st<=p);
printf("sum of natural number from 1 to %d is %d\n",p,sum);//very important

//printing table
int tab;
printf("enter number:");
scanf("%d",&tab);

int product=1;
do{
    printf("%d*%d=%d\n",tab,product,tab*product);
    product+=1;
}while(product<=10);

//use of break
int nu=22;
do{
    if (nu==9){

        break;
    }
    printf("%d\n",nu);
    nu-=1;
}while(nu>=0);
printf("END\n");


//taking input until getting an odd number
int user;
printf("enter number=");
scanf("%d",&user);
int count=1;
do {
    if(user%2==1){
        printf("you entered an odd number %d\n",user);
        break;
    }
    int next_user;
    printf("enter number=");
    scanf("%d",&next_user);
    user = next_user;
    count+=1;
} while(count<=user);

//use of continue
for(int beta=0;beta<=10;beta+=1){
    if(beta==5){
        continue;
    }
    printf("%d\n",beta);
}
// printing only odd numbers in 0 to 50
int odd=0;
do{
    if(odd%2==0){
        odd+=1;
        continue;
    }
    printf("%d\n",odd);
    odd+=1;
}while(odd<=50);
printf("method 2\n");
// printing only odd numbers in 0 to 50 using for loop
for(int even=0;even<=50;even+=1){
    if(even%2==0){
        continue;
    }
    printf("%d\n",even);
}

//factorial of a number
// int fact=50;
// int new_fact=1;
// do{
//     new_fact*=fact;
//     fact-=1;
// }while(fact>1);
// printf("%d",new_fact);






return 0;
}





