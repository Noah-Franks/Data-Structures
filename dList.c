#include <stdlib.h>
#include <stdio.h>

struct dList {
  node * head;
};

struct node {
  int value;
  struct node * next;
};

node * node_add_first(double value, dList * list) {
  
  node * newNode = malloc(sizeof(node));
  newNode->value = value;

  

  return newNode;
}

node * node_add_last(double value, dList * list) {

}

int main() {
  
}
