#include<stdio.h>

int main(){
int n;
printf("enter number==>");
scanf("%d",&n);

if(n<2){
    printf("none");
}
else if(n==2){
    
    printf("prime");
}
else{
    int val;
    for(val=2;val<n;val+=1){
        if(n%val==0){
            printf("composite\n");
            break;
        }
    }
    if(val==n){
        printf("prime\n");

    }
        }

       printf("%s","Hello, World!\n");
       char s[100];
       fgets(s,100,stdin);
     


return 0; 
}

