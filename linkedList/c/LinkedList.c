/*
 * =====================================================================================
 *
 *       Filename:  LinkedList.c
 *
 *    Description:  Linked List
 *
 *        Version:  1.0
 *        Created:  04.06.2017 18:20:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Michael Ajala (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>


void prepend(int data, struct linkedList node);
struct linkedList{
  int data;
  struct linkedList *next;
};


int main(){
  struct linkedList ll;
  ll.data = 10;
  ll.next = NULL;
  prepend(234234, ll);
  return 0;
}

// Prepend a new node to a linked list 
void prepend(int data, struct linkedList node){
  struct linkedList newNode; 
  newNode.data = data;
  newNode.next = &node;
}
