/*
   const的这个修饰符的位置摆放  决定了=& 和= 这俩个操作符的使用 也就是 修改对象的值 和 修改对象
   基本用法: 修饰变量, 使其值不可更改:
       const int a = 1;
       a = 2;// ERROR: Read-only variable is not assignable
        const配合指针时:
         情况一, const放在*前面, 则指针指向的值不能改变,
         int a = 1;
         const int *pa = &a;
         *pa = 2; // ERROR: Read-only variable is not assignable
         情况二, const放到*后面, 则指针不能指向别处,
         int a = 1, b = 2;
         int * const pa = &a;
         pa = &b; // ERROR: Read-only variable is not assignable
         情况三, *左右皆放置const, 则指针既不可改其值, 又不可指向别处
         int a = 1, b = 2;
         const int * const pa = &a;
         pa = &b; // ERROR: Read-only variable is not assignable
         *pa = 3; // ERROR: Read-only variable is not assignable
*/
#include<iostream>
using namespace std;
int  main(){
           double pi=3.1415926;
            // double *ptr;
          const double  *ptr;//1 2一样 定义是不需要初始化赋值 说明锁定对象但不锁定值
        //  double const *ptr;//2 1和2这俩种声明可以通过&取得值 但是不能直接通过=进行赋值操作 
          //   *ptr=2.32;    error: read-only variable is not assignable  
      // double *const ptr=&pi;// 这个方式声明 这个双精度常量指针对象可以通过*ptr=2.31这种方式改变他的值 将*放置在const前面 说明不容许改变所指向对象的值
                                // 这种声明
           //以上这三种声明方式 含义都一样 同时声明 编译会提示重复声明 但是虽然声明的含义意思一样 但是第三种声明需要初始化赋值并锁定了对象,不容许改变对象的值
             ptr=&pi;  //区分
              *ptr=2.32; //如果想要接受123152 字面值 赋值操作的话 需要添加* 如果是指针的话 可以直接赋值 但是const 指针类型不能直接赋值 只能去引用
                             //一般的指针初始化完之后 可以*ptr=2.323等字面值 直接赋值操作 但是加上const之后
            cout<<"正常的ptr的值"<<*ptr<<endl;//指向const对象的指针也必须在该指针前面加上const 这是c++语法强制要求
                              //const对象的指针所指向的对象 可以是非const类型但必须是同一种数据类型 或者可以同等转换得类型 
         
           double longP=98764.0934; 
          double *pp=&longP;
         // ptr=pp;//将 双精度类型指针赋值给双精度常量指针 顶层const编译可以通过 可以内容变了;但是底层const不行
          cout<<"这个值有没有改变"<<*ptr<<endl;
          double *pt=&pi;
          *pt=123458.32;
          cout<<"这个const对象指针ptr所指向的值"<<*ptr<<endl;
          const int pi1=99;
          const int *pint;
          pint=&pi1;//const 指针对象必须指向const 同等数据类型
          cout<<"pint的值为:"<<*pint<<endl; 
          int a=92;;
          int *p1=&a;
          cout<<"p1的值为"<<*p1<<endl;
          *p1=10;
         // pint=88;
          cout<<"现在P1的值为:"<<*p1<<endl;        
    
     return 0;
}
