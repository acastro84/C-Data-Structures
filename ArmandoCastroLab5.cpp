/*

WorkerInfo.cpp
testDriver.cpp
*/

/**********************************************/
/* Armando Castro                             */
/* Lab 5                                      */
/* This program stores employees and their id */
/* numbers into a tree format. 				  */
/* The user is given the option to add 1 	  */
/* new employee. 							  */
/* The user is given the option to delete 1	  */
/* current employee 						  */
/* After the user chooses if they want to add */
/* or delete an employee, the program ends.   */
/**********************************************/

#include "WorkerInfo.h"
#include "WorkerTree.h"
#include <iostream>
using namespace std;

int main() {
    
    WorkerTree tree;

    // meet the requirements for testing. 
    tree.insertWorker(WorkerInfo(6702, "James B W Bevis"));
    tree.insertWorker(WorkerInfo(1255, "Romney Wordsworth"));
    tree.insertWorker(WorkerInfo(2487, "Jennifer Twain"));
    tree.insertWorker(WorkerInfo(1071, "Revis Jacara"));
    tree.insertWorker(WorkerInfo(2390, "Clegg Forbes"));
    tree.insertWorker(WorkerInfo(1558, "Kalin Tros"));
    tree.insertWorker(WorkerInfo(7406, "Archibald Beechcroft"));
    tree.insertWorker(WorkerInfo(7562, "Penthor Mul"));
    tree.insertWorker(WorkerInfo(3004, "Bartlet Finchley"));
    tree.insertWorker(WorkerInfo(4922, "Latham Bine"));
    tree.insertWorker(WorkerInfo(8483, "Jeff Myrtlebank"));
    
    cout << "This program stores workers and their ID numbers in a tree format. \n";
    cout << "The user has the option to add or remove one worker at a time. \n";
    cout << "The user also has the option to search for an employee by their user ID. \n\n";
    
    //Ask first if user wants to add more before displaying. 10 points please!!??
    
    string addChoice = "";
	cout << "Do you have an employee/employees to add? Enter Y or N: ";
	cin >> addChoice;
	
	if (addChoice == "y" or addChoice == "Y")
	{
	
		int workerID = 0;
		string workerName = "";
		cout << "Please enter the 4 digit worker ID number: ";
		cin >> workerID;
		
		cout << "Please enter the worker name: ";
		cin >> workerName;
		tree.insertWorker(WorkerInfo(workerID, workerName));
		cout << workerName + " has been added. \n\n";
	}
	if (addChoice == "n" or addChoice == "N")
	{
	
    	// Show sorted (in-order display) 10 points please!!!??
    	cout << "Here is your list of workers: \n\n";
    	tree.sortedDisplay();
	}
	
		
		
    // asking for an id of an Enployee to search from the tree
    int id  = 0;
    cout<<"\n\nEnter the ID of the Employee to search: ";
    cin>>id;
    tree.nodeSearch(id);
    cout << "\n\n";
    cout << "Here is your sorted list: \n\n";
    tree.sortedDisplay();

    //15 points please???!!!! (Remove a user) 
    
    string removeChoice = "";
    int removeID  = 0;
    
    cout << "\n\nWould you like to delete an employee? Enter Y or N:";
    cin >> removeChoice;
    
    if (removeChoice == "y" or removeChoice == "Y")
    {
	
		cout<<"\n\nEnter the ID of the Employee to delete: ";
    	cin>>removeID;
    	tree.nodeSearch(removeID);
    	tree.nodeRemove(WorkerInfo(removeID, ""));
    	// dislaying the inorder traversal after the deletion
    
    	cout << "Here is your tree after the deletion: \n\n";
    	tree.sortedDisplay();
    	cout << "\n\n Thank you for using this program. ";
	}
	if (removeChoice == "n" or removeChoice == "N")
		cout << "\n\nThank you for using this program. ";
	
    return 0;
}


/*********************************************************************
Workerinfo.cpp

//Employeeinfo.cpp   testing a change to Workerinfo.cpp

#include "Workerinfo.h"

WorkerInfo::WorkerInfo(){
    workerID = 0;
    workerName = "";
}

WorkerInfo::WorkerInfo(int ID, string name){
    workerID = ID;
    workerName = name;
}

int WorkerInfo::getworkerID(){
    return workerID;
}

string WorkerInfo::getworkerName(){
    return workerName;
}


*/
