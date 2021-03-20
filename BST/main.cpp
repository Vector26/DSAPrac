#include <iostream>
#include "BST.h"
#include "numb.h"
using namespace std;

int main()
{
    BST<numb> c;
    int flag;
    while(1)
        {
        cout<<"______A BINARY TREE_____"<<endl;
        cout<<"______OPTIONS:______"<<endl;
        cout<<"1 -> Insert/Create"<<endl;
        cout<<"2 -> Display"<<endl;
        cout<<"3 -> Sort"<<endl;
        cout<<"0 -> Exit"<<endl;
        cin>>flag;
        switch(flag)
            {
            case 1:
                c.Insert();
                c.Insert();
                c.Insert();
                c.Insert();
                c.Insert();
                c.Insert();
                c.Insert();
                c.Insert();
                c.Insert();
                c.Insert();
                break;
            case 2:
                c.display();
                break;
            case 3:
                c.Sort();
                break;
            case 0:
                cout<<"____EXITING____"<<endl<<"bye..."<<endl;
                exit(0);
            default:
                cout<<"Wrong option man";
                break;
            }
        }
    return 0;
}
