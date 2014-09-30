  #include<iostream>
  using namespace std;
 class TestClass
  {
      friend class HellCode;  //将hellCode这个类 声明为友元类  
      public:
              TestClass();
             ~TestClass();
           // string str("1");  //类的数据成员在定义的时候不能初始化
             string str;
             void test();
      private: 
              int age;
              string ageStr;
             int  hell(int a,int b);
   
  };

//:  string str("类的成员变量在定义的时候不能初始化");
TestClass::TestClass():age(91),str("尚未初始化"),ageStr("这是TestClass的agestr") 
          {
        
          }

TestClass::~TestClass()
          {
      
          }
void  TestClass::test()
    {
      
         cout<<"hello world::"<<age<<endl;
    }
int TestClass::hell(int a,int b)
{
   return a*b;
}
class HellCode:public TestClass
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
        cout<<"这里是Hellocode派生类 "<<ageStr<<endl;
        cout<<"Hellcode::"<<"hello world" <<endl; 
    }
int  HellCode::jisu(int h)
  {
       
          for(int a=0;a!=9;a++)
           {
               h=h+1;
           }
         
        return h;
  }



