#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Tree{
    public:
    int data;
    Tree *left ,*right;
    Tree(int data)
    {
        this->data=data;
        left=right=NULL;

    }
    
};

void inorder(Tree* root,vector<int> &ans)
    {
        if(root==NULL)
        return ;
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
        
    }
    
    vector<int> inorderTraversal(Tree* root) {
            vector<int> ans;
        inorder(root,ans);
        return ans;
    }
Tree* Insert()
{
    int data1;
    cout<<"Inert root "<<endl;
    cin>>data1;
    if(data1==-1)
    return NULL;
    Tree *root=new Tree(data1);
    cout<<"Enter left child of"<<root->data<<endl;
    root->left=Insert();
    cout<<"Enter right child of"<<root->data<<endl;
    root->right=Insert();
    return root;
}
int main()

{
    Tree *root=Insert();
    vector<int> ans=inorderTraversal(root);
    for(auto i :ans)
    cout<<i<<" "<<endl;
    
    return 0;
}