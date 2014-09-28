#include<iostream>
using namespace std;
int main(){
   string s1("hello world");
  std::string s2("xintianxia");
  std::string *sp=&s2;
  std::cout<<"sp的指针输出"<<*sp<<std::endl;
  std::string s3=s1+","+s2;
  std::string s4="!!!"+s3;
  std::cout<<"s3的字符串为"<<s3<<std::endl;
   std::cout<<"s4的字符串为"<<s4<<std::endl;
  for(std::string::size_type ix=0;ix!=s4.size();ix++)
  {
    // std::cout<<s4[ix]<<endl;
  }
  string s5[]={"1,2,3,4,a,a,擦,5,6,7,9,3"};
 // string *sp1=&s5; 数组名本来就默认指向第一个元素 所以不用&
    string *sp1=s5;
 // string *sp2=sp1+5;
  cout<<"sp1的值为:"<<*sp1<<endl;
  cout<<"sizeof:"<< sizeof(s5)<<endl;
  for(int a=0;a!=10;a++)
   {   
       int ia[]={1,2,3,4i,5,6,7,9,10,11};
        int *isp=ia; 
         int *sp2=isp+a;
        cout<<"sp2的值为:"<<*sp2<<endl;
   }

  return 0;
}
