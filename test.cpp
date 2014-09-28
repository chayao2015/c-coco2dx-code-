#include <iostream>
 int main()
{
  char f[90];
  std::cin>>f;
  int c=0,d=1;
  int sum=c-d;
  std::cout<<sum<<std::endl;
  std::cout <<"hello world"<<std::endl;
  int a,b;
  std::cout<<"请输入俩个整数"<<std::endl;
  std::cin>>a>>b;
  if(a>=9) {std::cout<<"a太大了"<<std::endl;}
  if(b>=9) {
       int sum;
       std::cout<<"b太大了"<<std::endl;
       while(b<99)
       {
           sum+=b;
           ++b;
       }
          std::cout<<"b的总和值为"<<sum<<std::endl;
            }
 
  std::cout<<f<<std::endl; 
  std::cout<<f<<std::endl; 
  std::cout<<f<<std::endl; 
  return 0;
  
}
