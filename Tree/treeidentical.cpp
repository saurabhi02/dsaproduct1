#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Tree{
    public :
    int data;
    Tree *left,*right;
    Tree(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};

Tree* insert()
{
    int data1;
    
    cout<<"insert root"<<endl;
    cin>>data1;
    if(data1==-1)
    return NULL;
   
    Tree* root=new Tree(data1);
    cout<<"insert left "<<root->data<<endl;
    root->left=insert();
    cout<<"insert right "<<root->data<<endl;
    root->right=insert();
    
    return root;
}

bool isSame(Tree* p,Tree* q)
{
    if(p==NULL && q==NULL)
    return true;
    else if(p!=NULL && q!=NULL)
    {
        if(p->data==q->data){
        if(isSame(p->left,q->left)==true && isSame(p->right,q->right)==true)
        return true ;

        return false;
        }
        return false;

    }
    return false;
}



int main()
{
    Tree* head=insert();
    Tree* tail=insert();
    bool ans=isSame(head,tail);
    cout<<ans;
    return 0;
}