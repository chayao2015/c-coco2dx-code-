#include<iostream>
using namespace std;
int main(){
 int a=6;
 string s1("hello world!");
 string s2(2,'d');
const int &i=a;//引用？？？
 cout<<"i的值为"<<i<<endl;
 cout<<"请给被引用的a输入值"<<endl; 
 cin>>a;
 cout<<"i的值为"<<i<<endl; 
 cout<<s1<<endl;
 cout<<s2<<endl;
   return 0;
}
