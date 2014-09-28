#include<iostream>
using namespace std;
int main(){
   string s1;
   string s3("c");
    while(cin>>s1){
    cout<<"你输入的字符串为"<<s1<<endl;
    if(s1==s3){
       cout<<"这个不会退啊"<<endl;
    } 
}
    return 0;

}
