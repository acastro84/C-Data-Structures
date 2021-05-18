/*
IntQueue.cpp
Main.cpp
TemplateQueue.cpp

*/

/**********************************************/
/* Armando Castro                             */
/* Lab 04                                     */
/* This program uses a template class         */
/* to create a static queue of any data type. */
/* Options include:                           */
/*       1. Put an item in the queue.         */
/*       2. Remove an item from the queue.    */
/*       3. Display items in the queue.       */
/* This repeats until the user closes		  */
/* the application.                           */
/**********************************************/


#include<iostream>

#include "TemplateQueue.h"

using namespace std;

#define QUEUE_SIZE 1000 // just assume this max size

// template class function

template< class type >
void func()
{
	int choice;
	type item; // to take user input
	// create obj
	TemplateQueue<type> tempQueue(QUEUE_SIZE);

while(true)
{
	// ask for choice
	cout<<endl<<"1. Put an item in the queue";
	cout<<endl<<"2. Remove an item from the queue";
	cout<<endl<<"3. Display the items in the queue";
	cout<<endl<<"Choose option: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			// / check if full
			if(tempQueue.isFull())
			{
				cout<<endl<<"Queue is Full.";
				continue;
			}

			cout<<"Enter Item: ";
			cin>>item;
			
			// enqueue
			tempQueue.enqueue(item);
			break;

		case 2:
			// check for empty
			if(tempQueue.isEmpty())
			{
				cout<<"Queue is Empty.";
				continue;
			}
			//dequeue
			tempQueue.dequeue(item);
			cout<<endl<<"Dequeued Item: "<<item<<endl;
			
			break;
		case 3:
			// display the item
			cout<<endl<<"Queue Items: ";
			tempQueue.display();
			cout<<endl;
			
			break;
		default:
			cout<<"Invalid choice!";
	}

}

}

int main(int argc, char *argv[]){

int choice,dataType;

// ask user about type of item for queue

cout<<"1. Integers";
cout<<endl<<"2. Floats";
cout<<endl<<"3. Strings";
cout<<endl<<"which data type will you use? ";
cin>>dataType;

//create obj of class TemplateQueue
if(dataType == 1){

	func<int>();

}

else if(dataType == 2){

	func<float>();

}

else if(dataType == 3){

	func<string>();

}

return 0;

}


/************************************************************
#include <iostream>
#include "IntQueue.h"
#include <cstdlib>

using namespace std;

//*************************
// Constructor.           *
//*************************
IntQueue::IntQueue(int s)
{
   queueArray = make_unique<int []>(s);
   queueSize = s;
   front = -1;
   rear = -1;
   numItems = 0;
}


//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue.                 *
//********************************************
void IntQueue::enqueue(int num)
{
   if (isFull())
   {
      cout << "The queue is full.\n";
      exit(1);
   }
   else
   {
      // Calculate the new rear position
      rear = (rear + 1) % queueSize;      
      // Insert new item
      queueArray[rear] = num;      
      // Update item count
      numItems++;
   }
}

//**********************************************
// Function dequeue removes the value at the   *
// front of the queue, and copies it into num. *
//**********************************************
void IntQueue::dequeue(int &num)
{
   if (isEmpty())
   {
      cout << "The queue is empty.\n";
      exit(1);
   }
   else
   {
      // Move front
      front = (front + 1) % queueSize;
      // Retrieve the front item
      num = queueArray[front];
      // Update item count		
      numItems--;
   }
}

//*********************************************
// Function isEmpty returns true if the queue *
// is empty, and false otherwise.             *
//*********************************************
bool IntQueue::isEmpty() const
{
   return numItems == 0;
}

//********************************************
// Function isFull returns true if the queue *
// is full, and false otherwise.             *
//********************************************
bool IntQueue::isFull() const
{
   return numItems == queueSize;
}

//*******************************************
// Function clear resets the front and rear *
// indices, and sets numItems to 0.         *
//*******************************************
void IntQueue::clear()
{
   front = -1;
   rear = -1;
   numItems = 0;
}
***********************************************/

/*
#include <iostream>
#include "TemplateQueue.h"
#include <cstdlib>
using namespace std;

// forward declaration
template class TemplateQueue<int>;
template class TemplateQueue<float>;
template class TemplateQueue<string>;

//************************* // Constructor.
template <class X>
TemplateQueue<X>::TemplateQueue(int s) 
{
	queueArray = make_unique<X []>(s); // to store queue items
	queueSize = s;
	front = -1;
	rear = -1;
	numItems = 0;

}

//******************************************** // Function enqueue inserts the value in num * // at the rear of the queue. * //********************************************

template <class X>
void TemplateQueue<X>::enqueue(X item) {
	if (isFull()) {
		cout << "The queue is full.\n"; exit(1);
	}

	else {
		// Calculate the new rear position
		rear = (rear + 1) % queueSize;
		// Insert new item
		queueArray[rear] = item;
		// Update item count
		numItems++;
	}

}

//********************************************** // Function dequeue removes the value at the * // front of the queue, and copies it into num. * //**********************************************

template <class X>
void TemplateQueue<X>::dequeue(X &num) {
	if (isEmpty()) {
		cout << "The queue is empty.\n";
		exit(1);
	}
	else { // Move front
		front = (front + 1) % queueSize;
		// Retrieve the front item
		num = queueArray[front];
		// Update item
		numItems--;
	}

} //********************************************* // Function isEmpty returns true if the queue * // is empty, and false otherwise. * //*********************************************

template <class X>
bool TemplateQueue<X>::isEmpty() const {
	return numItems == 0;

}

//******************************************** // Function isFull returns true if the queue * // is full, and false otherwise. * //********************************************

template <class X>
bool TemplateQueue<X>::isFull() const {
	return numItems == queueSize;

} //******************************************* // Function clear resets the front and rear * // indices, and sets numItems to 0. * //*******************************************

template <class X>
void TemplateQueue<X>::clear() {
	front = -1;
	rear = -1;
	numItems = 0;

}

template <class X>
void TemplateQueue<X>::display() {
	for(int i=0;i<numItems;i++)
	{
		cout<<queueArray[i]<<" ";
	}

}
***************************************************************/

