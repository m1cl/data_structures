/*
 * =====================================================================================
 *
 *       Filename:  LinkedList.cpp
 *
 *    Description:  LinkedList Class
 *
 *        Version:  1.0
 *        Created:  04.06.2017 15:51:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Michael Ajala (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList(Node start){
  Node head = start;
}
LinkedList::LinkedList(int data){
   this->data = data;
}
 
