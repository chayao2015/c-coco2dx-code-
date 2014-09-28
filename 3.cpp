#include<iostream>
using namespace std;
typedef void(*Fun)(int,int);//定义函数指针类型
void min(int a,int b);
void max(int a,int b);
void min(int a,int b)
{
    int minValue=a<b?a:b;
    cout<<"最小的数值为value is"<<minValue<<"\n"<<endl;
}
void max(int a,int b)
{
    int maxValue=a>b?a:b;
    cout<<"最大的数值为value is"<<maxValue<<"\n"<<endl;
}
int main(){
     Fun pFun=NULL;//定义函数指针变量
     pFun=&min;
     pFun(1,2);
     pFun=&max;
     pFun(1,2);

   cout<<"123"<<endl;

  return 0;
}
