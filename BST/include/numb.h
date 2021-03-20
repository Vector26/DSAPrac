#include <iostream>
using namespace std;

class numb{
    private:
    int a;
    public:
    numb(int n){
    a=n;
    }
    numb(){
    cout<<"Input Data(int)"<<endl;
    cin>>a;
    }
    void display(){
    cout<<a<<endl;
    }
    int Get(){
     return(a);
     }
    void Set(int b){
    a=b;
    }
};
