#include<stdio.h>
#include<math.h>
#include<string.h>//not necessary to write in your code
//strings
void slicing(char arra[],int g,int h);
void occ(char new[]);
void new_array(char axl[],char ch);


int main(){
// methood 1
char name[]={'A','V','A','N','I','S','H','\0'};
char last[]={'R','A','I','\0'};
printf("%s\t %s\n",name,last);

//method 2
char name1[]="AVANISH  RAI";
printf("%s\n",name1);



char firstName[20];
printf("enter your firstName==>");
scanf("%s",firstName);
char lastName[20];
printf("enter your firstName==>");
scanf("%s",lastName);
printf("surname=:%d\n",strlen(firstName));
for(int i=0;i<strlen(firstName);i+=1){
    printf("%c\n",firstName[i]);
}
printf("last name=:%d\n",strlen(lastName));
for(int j=0;j<=strlen(lastName);j+=1){
    printf("%c\n",lastName[j]);
}


char N1[19];
printf("Enter your surName==");
scanf("%s",N1);


char N2[19];
printf("Enter your lastName==");
scanf("%s",N2);

printf("Fullname==>%s %s\n",N1,N2);

char m[100];
printf("enter a sentence=");
scanf("%s\n",m);
printf("%s",m);//it will print only first word of sentence and not complete sentence

//use of gets puts fgets
//1.
char use[50];
gets(use);//still it is outdated
puts(use);//it also helps to print text  or move cursor to next line

//2.
char str[100];
fgets(str,100,stdin);//input string name,size of string,stdin
puts(str);//move cursor to next  line

//INPUT
char user[100];
gets(user);
puts(user);
printf("%d",strlen(user));

//strcpy
char str1[]="AVANISH";
char str2[]="RAI";

strcpy(str1,str2);

printf("%s\n",str1);
printf("%s\n",str2);


//concatination
char firststr[]="Avanish\t";
char secstr[]="Rai";
printf("%s",strcat(firststr,secstr));

//strcmp
char str5[100];
printf("enter your string1==>");
scanf("%s",str5);
char str6[100];
printf("enter your string2==>");
scanf("%s",str6);
printf("%d\n",strcmp(str5,str6));//negative value 


//salting
char salt[]="123";
char str10[100];
printf("enter your password==>");
scanf("%s",str10);
strcat(str10,salt);
puts(str10);

//slicing
char arra[]="avanish rai";
slicing(arra,0,6);

char new[100];
printf("enter the string for its properties==>\n");
scanf("%s",new);
occ(new);

char axl[]="Avanish Rai";
char ch='c';
new_array(axl , ch);



return 0;
}
void slicing(char arra[],int g, int h){
    char arri[100];
    int j=0;
    for(int x1=g;x1<=h;x1+=1,j+=1){
        arri[j]=arra[x1];
    }
    arri[j]='\0';
    puts(arri);
}
void occ(char new[]){
    int count=0;
    for (int m1=0;m1<=strlen(new)-1;m1+=1){
        if(new[m1]=='a' || new[m1]=='e' || new[m1]=='i' || new[m1]=='0' || new[m1]=='u'){
            count+=1;
        }
        
    }
    printf("total vowels in the given string==>\n%d",count);
    printf("total consonants in the given string==>\n%d",strlen(new)-count);
}

void new_array(char axl[],char ch){
    for (int p1=0;p1!='\0';p1+=1){
       if(axl[p1]==ch){
        printf("Yes! the entered character is present in the string.\n");
        return;
       }

    }
    printf("character is not present\n");
}