#include<iostream>
using namespace std;
void simpleinterest(int p,int t,float r=10){
    int s=p*(1+r*t);
    cout<<"Final Amount : "<<s<<"\n Simple Interest : "<<s-p<<endl;;
}
int main(){
    int p,t,k;
cout<<"\t\t----- SIMPLE INTEREST CALCULATOR -----\n";
cout<<"Enter the Principle Amount :\n";
cin>>p;
cout<<"Enter the Time Period(Yrs):\n";
cin>>t;
while(k!=0){
  float r;
cout<<" Calculate Simple Interest using \n1.User Defined Interest rate \n2.Default Interest Rate of 10%\n0. EXIT\n";
cin>>k;
switch(k){
case 0: break;
case 1: cout<<"Rate of Interest :\n";
        cin>>r;
        simpleinterest(p,t,r);
        break;
case 2: simpleinterest(p,t);
        break;
default : cout<<"Wrong Choice\n";
          break;

        }
}
}
