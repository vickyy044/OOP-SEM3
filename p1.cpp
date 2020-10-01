#include<iostream>
using namespace std;
int byreference(int &a,int &b){
int t=a;
    a=b;
    b=t;
    cout<<"Swapped Values in function: x="<<a<<" y="<<b<<endl;
    return (a,b);
}
int byvalue(int a,int b){
int temp=a;
a=b;
b=a;
cout<<"Values in function: x="<<a<<" y="<<b<<endl;
}
int main(){
   cout<<"SWapping programming using reference and value :\n";
int x,y;
cout<<"Enter the integers to be swapped: \n";
cin>>x>>y;
cout<<"\n 1. Swap using Call by Reference \t2. Swap using Call by Value\n";
int k;
cin>>k;
switch(k){
case 1: byreference(x,y);
        cout<<"Values in Main x="<<x<<" y="<<y;
        break;
case 2: byvalue(x,y);
        cout<<"Values in main x="<<x<<" y="<<y;
        break;
default: cout<<"Wrong Choice!!";
         break;
}
return 0;
}
