#include <common.h>
int BST_InsertNode(datanode *root, datanode *newnode)
{
  if(!root){
    return FALSE;
  }
  if(GetData(root) >= GetData(newnode)){
    if(GetLeft(root)){
      BST_InsertNode(GetLeft(root), newnode);
    } else{
      SetLeft(root, newnode);
    } 
  } else {
    if(GetRight(root)){
      BST_InsertNode(GetRight(root), newnode);
    } else{
      SetRight(root, newnode);
    }
  }
  
  return TRUE;  
}
int BST_SearchData(datanode *root, int data)
{
  if(!root){
    return FALSE;
  }
  if(GetData(root) == data){
    return TRUE;
  }
  if(GetData(root) > data){
     return BST_SerachData(GetLeft(root), data);
  }
  return BST_SerachData(GetRight(root), data);
}
void BST_AdjustBalanceFactor(datanode *root)
{
  int myheight = 0;
  if (!root) return 0;
  lheight = BST_AdjustBalanceFactor(root->left);
  rheight = BST_AdjustBalanceFactor(root->right);
  myheight = max(lheight, rheight) + 1;
  root -> balancefactor = lheight - rheight;
  return myheight;
}
int BST_CalcutateHeight(datanode *root)
{
  int myheight = 0;
  if(root){
    myheight = max(BST_CalcutateHeight(root->left), BST_CalculateHeight(root->right)) + 1;
  }
  return myheight;
}

  
