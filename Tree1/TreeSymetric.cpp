#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Tree{
    public :
    int data ;
    Tree *left,*right;  
    Tree(int data)
    {

        this->data=data;
        left=right=NULL;
    }
};

Tree* insert()
{
    int data;
    cout<<"Insert root"<<endl;
    cin>>data;
    if(data==-1)
    return NULL;
    Tree *root=new Tree(data);
    cout<<"Insert left of "<<root->data<<endl;
    root->left=insert();
    cout<<"Insert right of "<<root->data<<endl;
    root->right=insert();
    return root;

}
bool symetric1(Tree* root,Tree* root1)
{
    if(root==NULL && root1==NULL)
    return true;
    else if(root!=NULL && root1 !=NULL)
    {
        int ans=(root->data==root1->data) && symetric1(root->left,root1->right) && symetric1(root->right,root1->left);
        return ans;

    }
    return false;
}

bool isSymettric(Tree* root)
{
    if(root==NULL)
    return true;
    bool ans=symetric1(root->left,root->right);
    return ans;
}



int main()
{
    Tree* root=insert();
    bool ans=isSymettric(root);
    cout<<ans;
    return 0;
}