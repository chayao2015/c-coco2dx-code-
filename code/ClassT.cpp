#include<iostream>
#include"TestClass.h"
//using namespace std;
int main()
  {
      TestClass *t1;//不管什么类型的指针在声明的时候最好初始化
      TestClass  a1;
      a1.test();
      cout<<"TestClass的str默认字符串为:"<<a1.str<<endl;
       a1.str=("天地无极 万里追踪");
       t1=&a1;
       t1->str=("鬼斧神工");// 类的成员变量不能通过未初始化的类指针进行赋值 
      cout<<t1->str<<endl;
      HellCode  h1;
      h1.test();
     HellCode *b1=&h1;
     h1.hello();
     // t1=&h1;
   //  t1->hello();就算基类指针对派生类对象进行引用也无法访问派生类的函数
      return 0;
  }
