/*
 * =====================================================================================
 *
 *       Filename:  LinkedList.h
 *
 *    Description:  Linked list Header File 
 *
 *        Version:  1.0
 *        Created:  04.06.2017 15:52:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:   Michael Ajala (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "Node.h"
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList
{
private:
  /* Node head; */
  int data;
public:
  LinkedList();
  LinkedList(int);
  LinkedList (Node);
  virtual ~LinkedList ();
};
#endif /* LINKEDLIST_H */
