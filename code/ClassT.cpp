#include<iostream>
#include"TestClass.h"
//using namespace std;
int main()
  {
      TestClass *t1;
      HellCode  h1;
       t1->test();
      int b=t1->hell(3,4);
      cout<<b<<endl;
      cout<<t1->hell(5,5)<<endl;
      h1.hello();
    // t1->hello();
     cout<<h1.jisu(2)<<endl;
      HellCode  h2;
      return 0;
  }
