#include<stdio.h>
#include<math.h>

int count_odds(int a[],int n);
int reverse_array(int re[],int m);

int main(){
int marks[5];

printf("physics:");
scanf("%d",&marks[0]);

printf("chemistrty:");
scanf("%d",&marks[1]);

printf("mathematics:");
scanf("%d",&marks[2]);

printf("mark1=%d mark2=%d mark3=%d",marks[0],marks[1],marks[2]);

int b[]={1,2,3,4,5,6,7,8,9,0};
printf("\n%d",b[0]);
//STORING MARKS OF TWO STUDENTS FOR THREE SUBJECTS FOR EACH
int alpha[2][3];
alpha[0][0]=29;
alpha[0][1]=92;
alpha[0][2]=85;

alpha[1][0]=65;
alpha[1][1]=89;
alpha[1][2]=100;

printf("\n%d",alpha[0][1]);//92
int a[]={1,2,3,4,5,6,7,8,9,10};
printf("\n%d\n",count_odds(a,10));

int re[]={1,2,3,4,5,6,7,8,9};
reverse_array(re,8);
int signal[10];
    return 0;
}
//to count no. of odd numbers in a array
int count_odds(int a[],int n){
    int count =0;
    for(int i=0;i<n;i+=1){
        if( a[i]%2!=0){
            count+=1;
        }
    }
    return count;
}
int reverse_array(int re[],int m){
    for(int i=m;i>=0;i-=1){
        printf("\n%d",re[i]);
    }

}

