#include<iostream>
#include<string.h> 
using namespace std;
int main(){
      string cp2=("a different string olalala");
     char ca[]={'a','c','b'};
   cout<< strlen(ca)<<endl;
   cout<<cp2.size()<<endl;
   string *psa=new string[5];
   delete[] psa;
          psa=&cp2;
   cout<<*psa <<endl;
  const char *str=cp2.c_str(); //将 string字符串通过c_str()函数进行转换,但是转换后的结果必须由常量字符串指针来指;
   printf("%s\n",str);
   cout<<"这个是c++风格输出的:"<<str<<"\n这个是加*str的输出:"<<*str<<endl; 
  //这个编译器可以区分 C的指针和c++的指针真是神奇
     const size_t rowSize=3;
     const size_t colSize=4;
     int ia[rowSize][colSize];
     for(size_t i=0;i!=rowSize;++i)
    {
       for(size_t j=0;j!=colSize;++j)
         {
            ia[i][j]=i*colSize+j;
           cout<<ia[i][j] <<endl;
         }
     // cout<<ia[i]<<endl; 
    }
     short short_value=32768;
     cout<<short_value+1<<endl;
     string a("expressions in c++ are composed....");
     string::iterator it=a.begin();
     while(it!=a.end()&&!isspace(*it))
     {
         *it=toupper(*it);
         ++it;
     }
       cout<< a<<endl;


}
