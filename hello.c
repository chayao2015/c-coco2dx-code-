#include<stdio.h>
//#include<string.h>
int main(){
   char s1[]="123456789";
   char s2='s';
   printf("s1的字符串为%s,s2的单个字符为%c\n",s1,s2);
   char *sp=s1;
   printf("*sp所指向的字符串为%s\n",sp);
   printf("*sp所指向的第二个字符串为%c\n",*sp+5);
   int a;
   for(a=0;a<9;a++)
   {
       printf("%c\n",s1[a]);
   }
   return 0;
 }
