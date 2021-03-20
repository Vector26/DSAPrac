#include <iostream>

using namespace std;

template <class T>
class Tree{
    private:
    T* value;
    Tree *LC;
    Tree *RC;
    Tree *Parent;
    public:
        Tree(){
        value=new T();
        Parent=NULL;
        LC=NULL;
        RC=NULL;
        }
        Tree(T* x){
        value=x;
        Parent=NULL;
        LC=NULL;
        RC=NULL;
        }
        void SetValue(T* x){
        value=x;
        }
        T* GetValue(){
        return value;
        }


        void SetLC(Tree *x){
        LC=x;
        //LC->GetValue()->display();
        }
        Tree* GetLC(){
        return LC;
        }


        void SetRC(Tree *x){
        RC=x;
        //RC->GetValue()->display();
        }
        Tree* GetRC(){
        return RC;
        }


        void SetParent(Tree *x){
        Parent=x;
        }
        Tree* GetParent(){
        return Parent;
        }

};

template <class B>
class BST{
    private:
    Tree<B>* root;
    Tree<B>* current;
    void xChange(Tree<B>* p,Tree<B>* f){
        B temp;
        temp=p->GetValue();
        p->SetValue(f->GetValue());
        f->SetValue(temp);
    }
    int compare(Tree<B>* parent,Tree<B>* foster){
        if(parent!=NULL){
        int p=parent->GetValue()->Get();
        int f=foster->GetValue()->Get();
        if(p>f)
            return 0;
        else if(f>p)
            return 1;
        }
        else{
            return 2;
        }
    }
    public:
    BST(){
    root=NULL;
    current=root;
    }
    BST(Tree<B>* x){
    root=x;
    current=root;
    }

    void join(Tree<B>* p,Tree<B>* f){

    int flag=compare(p,f);
        if(p!=NULL){
            if(flag==0){
                p->SetLC(f);
                f->SetParent(p);
            }
            else{
                p->SetRC(f);
                f->SetParent(p);
            }
        }
        else{
            root=f;
            //root->GetValue()->display();
        }
    }

    void Insert(){
            int flag;
            current=new Tree<B>();
            Tree<B>* temp=root;
            while(root==NULL||temp->GetLC()!=NULL||temp->GetRC()!=NULL)
                {
                    if(root!=NULL)temp->GetValue()->display();
                    flag=compare(temp,current);
                    if(flag==0&&temp->GetLC()!=NULL){temp=temp->GetLC();}
                    else if(flag==1&&temp->GetRC()!=NULL){temp=temp->GetRC();}
                    else
                        break;
                }
            join(temp,current);
        }
    void display(){
            traverse(root);
        }

    void traverse(Tree<B>* t){
        t->GetValue()->display();
        if(t->GetLC()!=NULL)
            {
            traverse(t->GetLC());
            }
        if(t->GetRC()!=NULL)
            {
                traverse(t->GetRC());
                //cout<<"\n log:right print:";
            }
        }

    void Sort(Tree<B>* t){

        }
    }
};
