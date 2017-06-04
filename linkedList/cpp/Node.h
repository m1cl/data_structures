/*
 * =====================================================================================
 *
 *       Filename:  Node.cpp
 *
 *    Description:  Node Class
 *
 *        Version:  1.0
 *        Created:  03.06.2017 18:56:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Michael Ajala (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>

#ifndef NODE_H
#define NODE_H

class Node
{
private:
  int data;
  Node *next;

public:
  Node(int);
  int getData();
  void setData(int);
  void setNextNode(Node*);
  virtual ~Node();
};

#endif /* NODE_H */
