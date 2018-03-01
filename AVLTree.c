#include<common.h>
#include<BinarySearchTree.c>
void AVL_BalanceTree(datanode *GGP, datanode *GP)
{
  if 
}

datanode * AVL_InsertNode(datanode *root, int data)
{
  datanode *parent = NULL;
  if (!root){
    root = GetNewNode(data);
  }
  parent = BST_GetParentNode(root, data);
  if(GetData(parent) >= data){
    SetLeft(parent, GetNewNode(data));
  } else {
    SetRight(parent, GEtNewNode(data));
  }
}
