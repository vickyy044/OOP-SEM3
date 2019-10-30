#include<iostream>
using namespace std;
class complex{
    private: int real,img;
    public:
        complex(){
         real=0;img=0;
         cout<<" Initial Complex Number is : "<<real<<" + i"<<img<<endl;
        }
        void display(){
        cout<<"Complex Number is : "<<real<<" + i"<<img<<endl;
        }
        void realoperation(int a){
        real=real-a;
        }
        void imgoperation(int b){
        img=img-b;
        }
        void getdata(int x,int y){
        real=x; img=y;
        }
};
int main(){
    cout<<"---- Complex No. Operation ----\n";
    complex ob;
    int k,ch,m,x,y;
    while(k!=0){
        cout<<" Operations:\n1.Add/Subtract a real no.\n2.Add/Subtract a imaginary no.\n3.Assign Value to Complex No.\n4.Display\n0.EXIT\n";
        cin>>k;
        switch(k){
        case 1: cout<<"1.ADD Real\n2.SUBTRACT Real\n";
                cin>>ch;
                if(ch==1){
                    cout<<"Enter the no. to be added\n";
                    cin>>m;
                    ob.realoperation(-m);
                }
                else{
                    cout<<"Enter the no. to be Subtracted\n";
                    cin>>m;
                    ob.realoperation(m);
                }
                break;
        case 2:  cout<<"1.ADD Img\n2.SUBTRACT Img\n";
                cin>>ch;
                if(ch==1){
                    cout<<"Enter the no. to be added\n";
                    cin>>m;
                    ob.imgoperation(-m);
                }
                else{
                    cout<<"Enter the no. to be Subtracted\n";
                    cin>>m;
                    ob.imgoperation(m);
                }
                break;
        case 3: cout<<"Enter new values to assigned to REAL and IMAGINARY\n";
                cin>>x>>y;
                ob.getdata(x,y);
                break;
        case 4: ob.display();
                break;
        case 0: break;
        default: cout<<"WRONG CHOICE\n";
                 break;
        }
    }
    return 0;
}
