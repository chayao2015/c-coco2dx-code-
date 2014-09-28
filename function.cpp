   #include<iostream>
   using namespace std;
   typedef void (*pf) (string *str);//定义一个指向字符串类型的函数指针 如果函数返回值 形参类型不一样 那么就不能使用这个函数指针
   typedef void (*pi) (const int *p);
   void test(const int *);
   void strTest(string *str);
   void strT(string *str);
   void test2(int p);
  // bool cmp(double dd);
     int main()
   {
        pf  p1=strTest;// 定义的函数指针
           // pf=strT; 函数的指针还必须初始化和赋值 
            p1=strT;
        pi  p2=test;
        int a=102; 
        int *p=&a;
        cout<<*p<<endl;        
       // test(p);
          p2(p);
         cout<<*p<<endl;//
        string ft("c++ 大全增持版");
        string *ftstr=&ft;
        cout<<"未调用函数之前\n"<<*ftstr<<endl;
        strTest(ftstr);
        cout<<"调用函数之后\n"<<*ftstr<<endl;
        strT(ftstr);
        cout<<"str=&ff 这个写法居然不会改变指向的变量值\n"<<*ftstr<<endl;    
        const int b=9;
        test2(b);
        cout<<b<<endl;    
       return 0;

   }
   void test2(int p)//形参无法改变const实参
     {   
         p=100;
         cout<<"p的值为:"<<p<<endl;
         int d=p+99;
         cout<<"d的值为"<<d<<endl;
         p=d;
     }
   void test(const int *p)//const 形参不会改变 所指向的内容
   {
     // *p=0;//普通指针需要先初始化 常量整数类型的指针不需要初始化么?
       p=0;//初始化完毕后才可以直接赋值操作
        cout<<p<<endl;
       cout<<"***********************8"<<endl;
   }
   void strTest(string *str)
   {   string ff=("天下无敌");
       *str=ff;
       
   }
   void strT(string *str)
   {   string ff=("天下归公 ");
       str=&ff;//奇怪为什么一个意思  结果会不一样
   
   }
