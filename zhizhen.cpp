#include<iostream>
using namespace std;
int main(){
    string s2("chayao");
    string *sp=&s2;
    cout<<*sp<<endl;
    *sp="wugui";
    cout<<*sp<<s2<<endl;
    cout<<s2<<endl;
    string s3("sina");
     *sp=s3;// 等价与sp=&s3;  但是不能*sp=&s3;
     cout<<*sp<<s2<<endl;
     //sp=&s2;
     // sp=&s2; 
    //  cout<s2<<endl;//为什么s2现在不能访问了呢 
     string **sp1=&sp;
     string **sp2=sp1;
     cout<<"**sp1的值为:"<<**sp1<<endl;
     cout<<"sp2的值为为:"<<**sp2<<endl;
    return 0;
}
