/*

linkedlist.cpp
node.cpp
main.cpp



*/

/*Main*/

#include "linkedlist.h"
#include <iostream>
#include <fstream>

int main()
{
	// create linkedlist to represent list data
	LinkedList list;
	string filename = "C:\\Users\\Armando\\Desktop\\ACC\\Semester IV\\Prog Fund III Data Structures\\Lab3\\stuff3.txt";
	// read from file Stuff1.txt
	ifstream file(filename);
		// check if file can be opened
		if (file.is_open()) 
		{
			// read line by line
			string line;
			while (!file.eof()) 
			{
				getline(file, line);
				// add line to list
				list.addNode(line);
			}
			// print file content
			cout << "File " << filename << " contains data:" << endl;
			list.displayList();
			// remove duplicates from list
			list.removeDuplicates();
			// annnd pint new list
			cout << "\nList after removing duplicates:" << endl;
			list.displayList();
		}
	else 
	{
		// print error message
		cout << "Could not open file: " << filename << endl;
	}
	return 0;
}

/***************************************************************
#include "linkedlist.h"
#include <iostream>

LinkedList::LinkedList() 
{
	// initialize head
	head = NULL;
}

LinkedList::~LinkedList() 
{
	// delete all nodes to free memory
	while (head != NULL) 
	{
		Node* temp = head;
		head = head->getNext();
		delete temp;
	}
}

void LinkedList::addNode(string line) 
{
	// creat a new node to insert
	Node* node = new Node();
	// set line to new node
	node->setLine(line);
	// check for first node
	// if head is null, then new node is the first node to insert
	if (head == NULL) 
	{
		head = node;
	}
	else 
	{
		// this pointer iterates the list. 
		Node* itr = head;
		//last node!!!
		while (itr->getNext() != NULL) 
		{
			itr = itr->getNext();
		}
		// add node at end of list
		itr->setNext(node);
	}
}

void LinkedList::removeDuplicates() 
{
	// create a pointer to iterate over list
	Node* itr1 = head;
	Node* itr2;
	// move iterator 1 till end of list for processing
	while (itr1 != NULL) {
		// compare 2 nodes
		// start iterator 2 at location of iterator 1
		// if node is not a dupe, move to the next one.
		itr2 = itr1;
		while (itr2 != NULL && itr2->getNext() != NULL) 
		{
			// compare data in nodes to remove duplicate
			// use compare function to compare string data
			if (itr1->getLine().compare(itr2->getNext()->getLine()) == 0) 
			{
				// remove next node from the node pointed by iterator 2
				// assign temparorary pointer to node to free its memory
				Node* temp = itr2->getNext();
				Node* nextNode = temp->getNext();
				// remove link of the node to be deleted
				itr2->setNext(nextNode);
				// delete the node with duplicate content
				delete temp;
			}
			else 
			{
				// move pointer to next node
				itr2 = itr2->getNext();
			}
		}
		itr1 = itr1->getNext();
	}
}

void LinkedList::displayList() 
{
	// creates a pointer to iterate over list
	Node* itr = head;
	// print each node's data
	while (itr != NULL) 
	{
		cout << itr->getLine() << endl;
		// move to next node
		itr = itr->getNext();
	}
}
*********************************************************************/

/**************************************************************
linkedlist.cpp

#include "linkedlist.h"
#include <iostream>

LinkedList::LinkedList() 
{
	// initialize head
	head = NULL;
}

LinkedList::~LinkedList() 
{
	// delete all nodes to free memory
	while (head != NULL) 
	{
		Node* temp = head;
		head = head->getNext();
		delete temp;
	}
}

void LinkedList::addNode(string line) 
{
	// creat a new node to insert
	Node* node = new Node();
	// set line to new node
	node->setLine(line);
	// check for first node
	// if head is null, then new node is the first node to insert
	if (head == NULL) 
	{
		head = node;
	}
	else 
	{
		// this pointer iterates the list. 
		Node* itr = head;
		//last node!!!
		while (itr->getNext() != NULL) 
		{
			itr = itr->getNext();
		}
		// add node at end of list
		itr->setNext(node);
	}
}

void LinkedList::removeDuplicates() 
{
	// create a pointer to iterate over list
	Node* itr1 = head;
	Node* itr2;
	// move iterator 1 till end of list for processing
	while (itr1 != NULL) {
		// compare 2 nodes
		// start iterator 2 at location of iterator 1
		// if node is not a dupe, move to the next one.
		itr2 = itr1;
		while (itr2 != NULL && itr2->getNext() != NULL) 
		{
			// compare data in nodes to remove duplicate
			// use compare function to compare string data
			if (itr1->getLine().compare(itr2->getNext()->getLine()) == 0) 
			{
				// remove next node from the node pointed by iterator 2
				// assign temparorary pointer to node to free its memory
				Node* temp = itr2->getNext();
				Node* nextNode = temp->getNext();
				// remove link of the node to be deleted
				itr2->setNext(nextNode);
				// delete the node with duplicate content
				delete temp;
			}
			else 
			{
				// move pointer to next node
				itr2 = itr2->getNext();
			}
		}
		itr1 = itr1->getNext();
	}
}

void LinkedList::displayList() 
{
	// creates a pointer to iterate over list
	Node* itr = head;
	// print each node's data
	while (itr != NULL) 
	{
		cout << itr->getLine() << endl;
		// move to next node
		itr = itr->getNext();
	}
}


****************************************************************/

/*
Node.cpp

#include "node.h"

Node::Node() 
{
	// initialize data to nulls
	line = "";
	next = NULL;
}


string Node::getLine() 
{
	return line;
}


Node* Node::getNext() 
{
	return next;
}


void Node::setLine(string line) 
{
	this->line = line;
}


void Node::setNext(Node* next) 
{
	this->next = next;
}


*/
