/*
 * File:   LinkedList.h
 * Author: Bruno
 *
 * Created on 24 de Outubro de 2009, 09:49
 */

#ifndef _LINKEDLIST_H
#define	_LINKEDLIST_H
using namespace std;
#include <iostream>

typedef int Node_entry;
struct Node {
// data members
	Node_entry entry;
	Node *next,*prev;
	// constructors
	Node();
	Node(Node_entry, Node *add_on = NULL, Node *pre = NULL);
};


class LinkedList{
  private:
	Node *front,*rear;
        int qtdEl();
  public:
	LinkedList();
	~LinkedList();
	bool insertFront(Node_entry el);
	bool insertRear(Node_entry el);
	bool insert(Node_entry);//insert ordenado
	void print();
	/*bool isEmpty();

   	bool insertpos(int,Node_entry);//insert em determinada posicao
	bool remove(Node_entry); //remove o elemento passado por parâmetro

        void media();
        bool ordena();
	bool isinList(Node_entry); //verifica se um determinado elemento (passado por parâmetro) está na lista
   */
};



#endif	/* _LINKEDLIST_H */

