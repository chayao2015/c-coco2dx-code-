#include<iostream>
#include<thread>
#include<unistd.h>
using namespace std;
int tickets=100;
mutex Tmutex;
mutex Gmutex;
void myThreadA();
void myThreadB();
void myThreadA(){
      while(true)
           {   
               Tmutex.lock();
               if(tickets>0)
                 {
                   sleep(2);
	           cout<<"A还剩下:\n"<<tickets--<<endl; 
                   Tmutex.unlock();                  
                 }else{
                        break;
                      }      
           }     

}
void myThreadB(){
      while(true)
           {  Tmutex.lock();
               if(tickets>0)
                 {
                   sleep(2);
	           cout<<"B还剩下:\n"<<tickets--<<endl;
                  Tmutex.unlock();
                 }else{
                        break;
                      }
           }

}


int main(){  int a;
             thread t1(&myThreadA);
             t1.detach();
             //  t1.join();
             thread t2(&myThreadB);
             t2.detach();
              cin>>a;
               return 0;
          }





