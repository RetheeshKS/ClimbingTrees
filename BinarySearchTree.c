#include <common.h>
int BST_InsertNode(struct node *root, struct node *newnode)
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
int BST_SearchData(struct node *root, int data)
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
