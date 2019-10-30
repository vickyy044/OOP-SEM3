#include<iostream>
#include<math.h>
using namespace std;
void power(int m,int n){
    double p=pow(m,n);
    cout<<" m^n = "<<p<<endl;
}
void power(double m, int n){
    double p=pow(m,n);
    cout<<" m^n = "<<p<<endl;
}
int main()
{
    cout<<"Calculating m^n\n";
    int k,n;
    while(k!=0){
        cout<<" Base is :\t 1.Integer\t2.Double\t0.Exit\n";
        cin>>k;
        switch(k){
            case 1: int l;
                    cout<<" Enter Base and Exponent :\n";
                    cin>>l>>n;
                    power(l,n);
                    break;
            case 2: double m;
            cout<<" Enter Base and Exponent :\n";
                    cin>>m>>n;
                    power(m,n);
            case 0: break;
            default: cout<<"Wrong Choice\n";
                     break;
        }
    }
}
