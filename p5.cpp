#include<iostream>
using namespace std;
class x{
private:
    int a,b;
    int *z;
public:
    x(){
    a=0;
    b=0;
    cout<<"Default Constructor  a= "<<a<<"  b= "<<b<<endl;
    }
    x(int m){
    a=m;b=0;
    cout<<"One Argument Constructor  a= "<<a<<"  b= "<<b<<endl;
    }
    x(int m,int n){
    a=m;b=n;
    cout<<"Two Argument Constructor  a= "<<a<<"  b= "<<b<<endl;
    }
    x(const x &ob){
    cout<<"Copy Constructor  a= "<<ob.a<<"   b= "<<ob.b<<endl;
    }
    x(int k,int l,int m){
    a=k;
    b=l;
    z=new int ;
    *z=m;
    cout<<"Dynamic Constructor  a= "<<a<<"  b= "<<b<<"   new memory= "<<*z<<endl;
    }
};
int main(){
    x ob1;
    x ob2(2,4);
    x ob3(998);
    x ob4(ob2);
    x(1,2,654);
    return 0;
}
