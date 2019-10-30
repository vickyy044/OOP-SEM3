#include<iostream>
using namespace std;
class dad{
public:
    string name="Baburao";
    int F_age=45;
    view(){cout<<"Father's Age : "<<F_age<<endl;}
    };
class mom{
public:
    string name="Anuradha";
    int M_age=42;
    view(){cout<<"Mother's Age : "<<M_age<<endl;}
    };
class child: public dad, public mom{
public:
    string name="Shyam";
    int C_age=18;
    view(){cout<<"Child's Age : "<<C_age<<endl;}
    display(){
    cout<<"Father Name : "<<dad::name<<"\t\tMother Name : "<<mom::name<<"\n"<<"Child Name : "<<name<<"\n";}

    };
int main(){
child c1;
c1.display();
c1.dad::view();
c1.mom::view();
c1.view();
return 0;
}
