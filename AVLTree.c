#include<common.h>
#include<BinarySearchTree.c>
#include<math.h>
void AVL_BalanceTree(datanode *root, int newdata)
{
  if(abs(GetBalanceFactor(root)) >= 2){
    
  }
}

datanode * AVL_GetImbalanced(datanode *root, int hopkey)
{
   if(!root){
     return null;
   }
   if(abs(GetBalanceFactor(root)) >= 2){
     return root;
   } else if(GetData(root) >= hopkey){
     return (AVL_GetImbalanced(GetLeft(root), hopkey));
   } else {
     return (AVL_GetImbalanced(GetRight(root), hopkey));
   }
}

int AVL_GetImbalanceType(datanode *grandParent, int hopkey)
{
   if(GetData(grandParent) >= hopkey){
     if(GetData(GetLeft(grandParent)) >= hopkey){
       return LEFTLEFT;
     } else {
       return LEFTRIGHT;
     }
   } else {
     if(GetData(GetRight(grandParent)) >= hopkey){
       return RIGHTLEFT;
     } else {
       return RIGHTRIGHT;
     }
   }
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


