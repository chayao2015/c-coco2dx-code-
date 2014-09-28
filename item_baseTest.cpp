#include<iostream>
#include"item_base.h"
using namespace std;
int main()
   {

           Item_base objItem;
           objItem.item=("item_base");
           objItem.test_item(objItem.item);
           Item_base *obj=&objItem;//指针最好在定义的时候初始化 避免其乱指;
            obj->a=100;
            cout<<obj->a<<endl;
      
        // cout<<"Item_base"<<*obj<<endl;
          Item_total Total;//声明派生类对象
           Item_total *objTotal=&Total;//派生类指针初始化
            objTotal->item=("派生类继承至基类的字符串类型可以使用");
            objTotal->test_ItemTotal(objTotal->item);
               Total.a=90;
           cout<<"这个事派生类的对基类a的使用"<<Total.a<<endl;
             obj=&Total;// 基类指针可以引用派生类对象 但是不能访问派生类成员 因为无论对象具有哪种类型,编译器都将它当做基类类型对象
            //   objTotal=&objItem; //assigning to 'Item_total *' from incompatible type 'Item_base *' 派生类指针貌似不能引用基类对象
             // obj->ta=992;//no member named 'ta' in 'Item_base'
            // cout<<"基类指针指向了派生类变量" << obj->ta <<endl;
      
          
        return 0;
   }

