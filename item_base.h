#include<iostream>
using namespace std;
class Item_base {
  public:
         int a;
         string item;
         void test_item(string &stra);
 private:
         
         int b;
         void hello_base();      
};
void Item_base::test_item(string &stra)
    {
        cout<<"这个是基类的函数:"<<stra<<endl;
    }
void hello_base()
    {
       cout << "欢迎使用item_base"<<endl;
    }
class Item_total :public Item_base{
  public:
         int ta;
         int tb;
         void test_ItemTotal(string &str);    
 private:
         int c;
         void hello_Total();

   };
void Item_total::test_ItemTotal(string &stra)
    { 
       cout<<"这个是派生类Item_Total:"<<stra<<endl;
    }
void Item_total::hello_Total()
    {
        cout<<"this is 派生类"<<endl;
    }
/*
int main()
   {
     
           Item_base objItem;
           objItem.item=("item_base");
           objItem.test_item(objItem.item);
           Item_base *obj=&objItem;//指针最好在定义的时候初始化 避免其乱指;
            cout<<"Item_base"<<*obj<<endl;

      return 0;
   }
*/
