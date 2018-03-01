#include<common.h>
#include<BinarySearchTree.c>
void AVL_BalanceTree(datanode *root, int newdata)
{
  if(imbalan) 
}

datanode * AVL_InsertNode(datanode *root, int data)
{
  datanode *child = NULL, parent = NULL;
  child =  GetNewNode(data);
  if (root){
    parent = BST_GetParentNode(root, data);
    if(GetData(parent) >= data){
      SetLeft(parent, child);
    } else {
      SetRight(parent, child);
    }
    BST_AdjustBalanceFactor(root);
    return root;
  } 
  return child;
}


