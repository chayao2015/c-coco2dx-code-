#include<iostream>
using namespace std;
class A{
   public:
         A(int _a):a(_a){};
         friend int getA_a(A&_classA);
   private:
         int a;
 
};
int getA_a(a&_classA)
{
     return _classA.a;
}
int main()
  {
     a _classA(3);
     cout<<getA_a(_classA);
     return 0;
  }



