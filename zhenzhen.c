#include<stdio.h>
int main(){
    String s2("chayao");
    String *sp=&s2;
    printf("%s",*sp);
   // cout<<*sp<<endl;
    *sp="wugui";
    printf("%s",*sp);
                                       //  cout<<s2<<endl;
    string s3("sina");
     sp=&s3;
     printf("s3d的值为%s,s2的值为%s",*sp,s2);
   // cout<<*sp<<s2<<endl; 
    // cout<s2<<endl;//为什么s2现在不能访问了呢 百思不得其解 
    return 0;
}
