#include <stdlib.h>

struct node {
  int data;
  int balancefactor;
  struct node *left, *right;
};
typedef struct node datanode;

typedef enum {
  FALSE = 0,
  TRUE,
}boolean;
boolean InitNode(datanode *node)
{
  if (!node){
    return FALSE
  }
  memset(node, 0, sizeof(datanode))
  return TRUE;
}

boolean SetData(datanode * node, int data)
{
  if(!node){
    return FALSE;
  }
  node -> data = data;
  return TRUE;
}

boolean SetRight(datanode * parent, datanode * right)
{
  if(!parent){
    return FALSE;
  }
  parent -> right = right;
  return TRUE;
}

boolean SetLeft(datanode * parent, datanode * left)
{
  if(!parent){
    return FALSE;
  }
  parent -> left = left;
  return TRUE;
}

datanode * GetNewNode(int data)
{
  datanode temp = (datanode *)malloc(sizeof(datanode));
  if (InitNode(temp)){
    SetData(temp, data);
  }
  return temp;
}
