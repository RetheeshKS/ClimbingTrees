#include <stdlib.h>
#include <common.h>

typedef enum {
  FALSE = 0,
  TRUE,
}boolean;

struct node {
  int data;
  int balancefactor;
  struct node *left, *right;
};
typedef struct node datanode;

datanode * GetLeft(datanode * parent)
datanode * GetRight(datanode * parent)
int GetData(datanode * node)
boolean SetRight(datanode * parent, datanode * right)
boolean SetLeft(datanode * parent, datanode * left)
boolean SetData(datanode * node, int data)
  



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

int GetData(datanode * node)
{
  if(!node){
    return 0;
  }
  return(node -> data);
}

datanode * GetRight(datanode * parent)
{
  if(!parent){
    return null;
  }
  return(parent -> right);
}

datanode * GetLeft(datanode * parent)
{
  if(!parent){
    return null;
  }
  return(parent -> left);
}

datanode * GetNewNode(int data)
{
  datanode temp = (datanode *)malloc(sizeof(datanode));
  if (InitNode(temp)){
    SetData(temp, data);
  }
  return temp;
}
