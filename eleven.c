#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main(){
printf("%d\n",sizeof(int));
printf("%d\n",sizeof(char));
printf("%d\n",sizeof(float));

//DMA
// FILE*ptr;
// int*ptr;
// ptr=(int*)malloc(5 * sizeof(int));
// ptr[0]=23;
// ptr[1]=24;
// ptr[2]=56;
// for(int i=0;i<=2;i+=1){
//     printf("%d",ptr[i]);
// }

// FILE*ptr1;
//int*ptr1;
// ptr1=(int*)calloc(5 , sizeof(int));
// ptr1[0]=23;
// ptr1[1]=24;
// ptr1[2]=56;
// for(int i=0;i<=2;i+=1){
//     printf("%d",ptr1[i]);
// }
// free(ptr1);

int*ptr5;
ptr5=(int*)calloc(5,sizeof(int));
ptr5[0]=1;
ptr5[1]=1;
ptr5[2]=1;

printf(("enter numbers(5):\n"));
for(int j=0;j<=5;j+=1){
    printf("%d\n",ptr5[j]);
}

ptr5=realloc(ptr5,8);

printf(("enter numbers(8):\n"));
for(int k=0;k<=8;k+=1){
    scanf("%d\n",ptr5[k]);
}

for(int k=0;k<=8;k+=1){
    scanf("number %d is %d\n",k,&ptr5[k]);
}
return 0;
}