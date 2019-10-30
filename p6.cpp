#include<iostream>
using namespace std;
class grandpa{
public:
    int G_age=67;
    display(){
    cout<<"Grandpa's Age is : "<<G_age<<" yrs.\n";}
    };
class father:public grandpa{
public:
    int F_age=45;
    display(){
    cout<<"Father's Age is : "<<F_age<<" yrs.\n";}
    };
class child:public father{
public:
    int C_age=18;
    display(){
    cout<<"Child's Age is : "<<C_age<<" yrs.\n";}
    sumofage(){
    int sum=G_age+F_age+C_age;
    cout<<"Sum of ages : "<<sum<<" yrs. ";}
    };
int main(){
    child c1;
    c1.grandpa::display();
    c1.father::display();
    c1.display();
    c1.sumofage();
    return 0;
}
