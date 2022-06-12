vector<int>  Inorder1(Tree *root)
{
    
    static vector<int> ans;
    

    if(root==NULL)
    return {};
    Inorder1(root->left);
    ans.push_back(root->data);
    Inorder1(root->right);
 
     re