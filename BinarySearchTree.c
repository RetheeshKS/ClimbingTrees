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
    
}
int BST_SerachData(struct node *root, int data)
{
}
