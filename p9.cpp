#include<iostream>
using namespace std;
class base{
public:
    int a;
    virtual void getdata(int x)
   {   a=x;
       cout<<"Function of base Class : a="<<a<<endl;}
    };
class derived:public base{
public:
    int b;
    void getdata(int y){
    b=y;
    cout<<"Function of Derived Class : b="<<b<<endl;}
};

int main(){
base *p,*q;
base ob;
derived ob1;
p=&ob;
q=&ob1;
p->getdata(10);
q->getdata(342);
return 0;
}
