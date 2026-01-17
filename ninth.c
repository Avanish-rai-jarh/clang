#include<stdio.h>
#include<math.h>
#include<string.h>

// struct student{
//     char name[100];
//     int class;
//     float cgpa;
// };
typedef struct student{
    char name[100];
    int class;
    float cgpa;
 }stu;

 typedef struct address{
   int houseNo;
   char block;
   char city[50];
   char state[50];

 } add;

//passing structure to function
void info( stu s1);

int main(){
    //1
    // struct student s1;
    // strcpy(s1.name,"Avanish Rai");
    // s1.class=10;
    // s1.cgpa=8.5;
    // struct student cse[2];

    // strcpy(cse[0].name,"Manvi");
    // cse[0].class=10;
    // strcpy(cse[1].name,"Avanish");
    // cse[1].class=10;

    // printf("your name is=%s\n",s1.name);
    // printf("your class is=%d\n",s1.class);
    // printf("your cgpa is=%f\n",s1.cgpa);


    // printf("Name1=%s\n",cse[0].name);
    // printf("Class1=%d\n",cse[0].class);
    // printf("Name2=%s\n",cse[1].name);
    // printf("Class2=%d\n",cse[1].class);

    stu s2={"Manvi",10,7.5};
    printf("Name=%s\n",s2.name);
    printf("class=%d\n",s2.class);
    printf("cgpa=%f\n",s2.cgpa);
    stu s1={"Avanish Rai",10,8.01};
    info(s1);


    add s3={25,'A',"Gorakhpur","Uttar Pradesh"};
    printf("House No.=>%d\n",s3.houseNo);
    printf("Block=>%c\n",s3.block);
    printf("City=>%s\n",s3.city);
    printf("State=>%s\n",s3.state);
    

   

    return 0;
}
void info(stu s1){
    printf("Name=%s\n",s1.name);
    printf("Class=%d\n",s1.class);
    printf("Cgpa=%f\n",s1.cgpa);

}