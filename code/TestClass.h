  #include<iostream>
  using namespace std;
 class TestClass
  {
      friend class HellCode;  //将hellCode这个类 声明为友元类  
      public:
           // string str("1");  //类的数据成员在定义的时候不能初始化???
             string str; 
             void test();
             int  hell(int a,int b);
  };

  string str("类的成员变量在定义的时候不能初始化");
void  TestClass::test()
{
  cout<<"hello world"<<endl;
}
int TestClass::hell(int a,int b)
{
   return a*b;
}
class HellCode
   {
       
     public:
             HellCode();
            ~HellCode();
             void hello();
             int  jisu(int h);
   };
HellCode::HellCode()
 {
     cout<<"HelloCode 这个类已经被初始化"<<endl;
 }
HellCode::~HellCode() 
 {
       cout<<"这个Hello code 类将会被销毁"<<endl;
 }
void HellCode::hello()
 {
       cout<<"看来友元声明成功了 "<<str<<endl;
       cout<<"这个嘛 不清楚" <<endl; 
 }
int  HellCode::jisu(int h)
  {
       
          for(int a=0;a!=9;a++)
           {
               h=h+1;
           }
         
        return h;
  }



