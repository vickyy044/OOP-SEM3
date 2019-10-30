#include<iostream>
using namespace std;
class trains{
public:
    int n=8;
    display(){
    cout<<"Train Number : "<<n<<endl;}
    };
class metro:public trains{
private: string lines[4]={"BLUE","RED","MAGENTA","VIOLET"};
         string city="DELHI";
public:
    display(){
    cout<<"\tMetro City : "<<city<<"\n \tNo. of Coaches = "<<n<<"\n"<<endl;}
    };
class shatabdi:public trains{
public:
    int tr=150678;
    string trname="SHATABDI EXPRESS";
    display(){
    cout<<"\tTrain Name : "<<trname<<"\tTrain No. = "<<tr<<endl;
    cout<<"\tNo. of Coaches : "<<n<<"\n"<<endl;}
    };
class publictransport: public metro,public shatabdi{
public:
    modes(){
    cout<<"\t---------Modes of Public transport--------- \n\n";}
};
int main(){
    publictransport p;
    p.modes();
    p.shatabdi::display();
    p.metro::display();
    return 0;
}

