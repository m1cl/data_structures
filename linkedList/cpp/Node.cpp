/*
 * =====================================================================================
 *
 *       Filename:  Node.cpp
 *
 *    Description:  Node Header 
 *
 *        Version:  1.0
 *        Created:  03.06.2017 19:01:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Michael Ajala (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "Node.h"

Node::Node(int data){
  this->data = data;
}

void Node::setData(int data){
  this->data = data;
}
int Node::getData(){
  return this->data;
}

void Node::setNextNode(Node *next){
  this->next = next;
}
