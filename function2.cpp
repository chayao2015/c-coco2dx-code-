/*
   按照c++ primer第四版 201页 7.22节的说法
   普通形参 无法影响实参本身,执行swap时,酯交换了其实参的局部副本,传递给swap的实参本身的值并没有修改
   按照此书说法给形参添加了&引用 可以修改 
   引用类型无法修改const对象 也就是不能通过const对象进行调用
*/
#include<iostream>
using namespace std;
       void swt(int &v1,int &v2);
       void test(int v1,int v2);
       void swp(int &a);
       void printValues(const int ia[10]);
       const string &manip(string &s);
        char &get_val( string &str,string::size_type  ix);
int main()
   {
       int j=10;
       int h=20;
       swap(j,h);//晕 原来c++自带一个这么函数啊 我晕
       cout<<"c++ 自带的一个函数swap \n "<<"原来的J的值是10现在为:"<<j<<"原来的H的值为20,现在值为:"<<h<<endl;
        swt(j,h);
        cout<<"这个是自己定义的函数swt形参&int\n" <<"原来的J的值是10现在为:"<<j<<"原来的H的值为20,现在值为:"<<h<<endl;
       test(j,h);
        cout<<"这个是未添加的引用\n"<<"原来的J的值是10现在为:"<<j<<"原来的H的值为20,现在值为:"<<h<<endl;
       const int c=99;
      // swp(c);
      swp(j);  
      cout<<"原来j的值为10,现在的值为:" <<j<<endl;
      int jb=0;
      int jh[]={1,2,3};
      printValues(&jb);//其实这个操作已经造成数组越界访问了
      cout<<"***************************************************************** "<<endl;
      printValues(jh); 
      string ff("天下无敌");
       manip(ff);
       cout<<manip(ff)<<endl;
       string s("a value");
       cout<<s<<endl;
       get_val(s,2)='f';//其实这个函数的意思是将第几位替换为A 
       cout<<s<<endl;
      return 0;
 
   }
   char &get_val( string &str,string::size_type ix)
   {
          return str[ix];
   }
    const string &manip( string &s)
  {
     const  string &ret=s;
       cout<<ret<<endl;
       return ret;
      
  }
void printValues(const int ia[2])
    {
         for(size_t i=0;i!=10;++i)
            {
                cout<<"这个是printValues:"<<ia[i]<<endl;
            }
    }
void swt(int &v1,int &v2)
   {
        v1=888;
        v2=999;

   }
 
void test(int v1,int v2) 
   {

        int tmp=v2;
        v2=v1;
        v1=tmp;

   } 
void swp(int &b)
   {
        b=90;

   }


