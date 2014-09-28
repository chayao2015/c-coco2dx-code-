#include<iostream>
#include<vector>
using namespace std;
//using std::vector;
/*
  迭代器的使用 容器类型的模板都会有迭代器:
*/
int main(){
  string word;
  string stop("c");
  string stop2("x");
  string stop3("z");
  cout<<"三个不同的选项"<<"c"<<"x"<<"z"<<endl;
  vector<string> text;
   while(cin>>word){
        text.push_back(word);
    
    if(word==stop){
       cout<<"原始的类似数组下标的用法"<<endl;
      for(vector<int>::size_type ix=0;ix!=text.size();++ix)
         {
              cout<<ix<<endl;
              cout<<text[ix]<<endl;  
         }  
                   } 
     if(word==stop2)
          { 
             vector<string>::iterator iter;
         cout<<"迭代器第一种用法begin end用法"<<endl;
            // for(const  vector<string>::iterator iter=text.begin();
             for(iter=text.begin();iter!=text.end();++iter)
             //这迭代器声明时必须初始化 而且无法叠加 没有多大用
                    {
                     //  *iter="labu"; 
                       cout<<*iter<<endl;
                    }
                                                     
                      iter=text.begin()+text.size()/2;
                      cout<<"最中间的元素为"<<endl;
                      cout<<*iter<<endl; 
           }
      if(word==stop3)
           {
              cout<<"const迭代器的类型"<<endl;
                 for(vector<string>::const_iterator iter=text.begin();
                 iter!=text.end();++iter)
                    {
                 //     *iter="labu"; //这种const不能改变所指向的内容
                       cout<<*iter<<endl;
                    }
           }
                    }
                    
        
    return 0;
}
