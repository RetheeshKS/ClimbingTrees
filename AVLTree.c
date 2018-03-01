#include<common.h>
#include<BinarySearchTree.c>
#include<math.h>
void AVL_BalanceTree(datanode *root, int newdata)
{
  if(abs(GetBalanceFactor(root)) >= 2){
    
  }
}
datanode * AVL_GetImbalanced()
{
}
datanode * AVL_InsertNode(datanode *root, int data)
{
  datanode *child = NULL, parent = NULL;
  child =  GetNewNode(data);
  if (root){
    parent = BST_GetInsertDataParent(root, data);
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


