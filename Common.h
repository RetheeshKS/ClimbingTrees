
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

datanode * GetLeft(datanode * parent);
datanode * GetRight(datanode * parent);
int GetData(datanode * node);
boolean SetRight(datanode * parent, datanode * right);
boolean SetLeft(datanode * parent, datanode * left);
boolean SetData(datanode * node, int data);
datanode * GetNewNode(int data);
int max(int, int);
