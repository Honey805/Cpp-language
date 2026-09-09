#include<iostream>
using namespace std;

class rectangle{
private:
    int length;
    int width;

public:
    void setlength(int l){
        length=l;
    }

    void setwidth(int w){
        width=w;
    }

    int getlength(){
        return length;

    }

    int getwidth(){
        return width;
    }

    int area(){
        return length*width;
    }
};

int main(){
    rectangle r;
    int l,w;

    cout<<"enter length: ";
    cin>>l;

    cout<<"enter width: ";
    cin>>w;

    r.setlength(l);
    r.setwidth(w);

    cout<<"length"<<r.getlength()<<endl;
    cout<<"width"<<r.getwidth()<<endl;
    cout<<"area"<<r.area()<<endl;

   
         

    return 0;


}