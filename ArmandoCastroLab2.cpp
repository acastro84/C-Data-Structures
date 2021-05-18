#include<C:\Users\Armando\Desktop\ACC\Semester IV\Prog Fund III Data Structures\Lab2\Lab2.h>
/******************************************************
* This program stores items entered from a user into a*
* stack. This stack acts as a virtual "bag". 		  *
*													  *
*		Options include:		                      *
*       1. Add an item to the stack                   *
*       2. Remove the last item in a list.            *
*       3. Look at the last item in the list.         *
*		4. Check if the stack is empty.cout if True   *
*		5. Display the contents of the stack/show top.*
*		6. Exit the program. 						  *
* This repeats until the user chooses the    		  *
* option to quit.  (6)                          	  *
******************************************************/


int main()
{
    Stack st;
    Item myitem;
    int choice = 0;
    int sent = 0;
    
    
    cout << "This program has the following options:" << endl;
    cout << "1. Add an item." << endl;
    cout << "2. Remove the last item in the list." << endl;
    cout << "3. Look at the last item in the list." << endl;
    cout << "4. Check if the stack is empty." << endl;
    cout << "5. Display the contents of the stack." << endl;
    cout << "6. Quit progam." << endl;;
    cout << "Please enter a number from 1-6:";
    cin >> choice;
    cout << "\n";
    
    while(sent < 1)  	// Keep the menu based options going.  
    {
    	switch(choice)
    	{
    		case 1:  //adding an item
			{
				    	
    			string name = "";
    			string color = "";
    			cout << "Please enter the name of the item:" << endl;
    			cin >> name;
    			cout << "Please enter the color of the item." << endl;
    			cin >> color;
    			myitem.setcolor(color);
    			myitem.setname(name);
    			if(st.isEmpty())
        			cout<<"Stack is empty\n";
    			cout<<"\nAdding item "<<myitem.getname()<<" "<<myitem.getcolor()<<endl;
    			st.push(myitem);
    			cout<<"Item added to stack...\n\n";
    			cout << "1. Add an item." << endl;
    			cout << "2. Remove the last item in the list." << endl;
    			cout << "3. Look at the last item in the list." << endl;
    			cout << "4. Check if the stack is empty." << endl;
    			cout << "5. Display the contents of the stack." << endl;
    			cout << "6. Quit progam." << endl;;
    			cout << "Please enter a number from 1-6:" << endl;
    			cin >> choice;
    			cout << "\n\n";
    			break;
    		}
    		case 2:			//Removing an item
    		{
				cout << "Removing last item entered. \n\n" << endl;
    			st.pop();
    			cout << "1. Add an item." << endl;
    			cout << "2. Remove the last item in the list." << endl;
    			cout << "3. Look at the last item in the list." << endl;
    			cout << "4. Check if the stack is empty." << endl;
    			cout << "5. Display the contents of the stack." << endl;
    			cout << "6. Quit progam." << endl;;
    			cout << "Please enter a number from 1-6:" << endl;
    			cin >> choice;
    			cout << "\n\n";
    			break;
    		}
    		
    		case 3:  			//Look at last item in stack
    		{
    			cout<<"Item at top of stack is: "<<st.peek().getname()<<" "<<st.peek().getcolor()<<endl<<endl;
    			cout << "1. Add an item." << endl;
    			cout << "2. Remove the last item in the list." << endl;
    			cout << "3. Look at the last item in the list." << endl;
    			cout << "4. Check if the stack is empty." << endl;
    			cout << "5. Display the contents of the stack." << endl;
    			cout << "6. Quit progam." << endl;;
    			cout << "Please enter a number from 1-6:" << endl;
    			cin >> choice;
    			cout << "\n\n";
    			break;
    		}
    		
			case 4:		//Check if the stack is empty
			{
				
				if(st.isEmpty())
        			cout<<"Stack is empty\n";
        		else
					cout << "The stack is not empty. \n\n";	
    			
				cout << "Please enter your choice 1 - 6:" << endl;
				cout << "1. Add an item." << endl;
    			cout << "2. Remove the last item in the list." << endl;
    			cout << "3. Look at the last item in the list." << endl;
    			cout << "4. Check if the stack is empty." << endl;
    			cout << "5. Display the contents of the stack." << endl;
    			cout << "6. Quit progam." << endl;;
    			cout << "Please enter a number from 1-6:";
    			cin >> choice;
    			cout << "\n\n";
				break;	
			}
			case 5:		//Display the contents of the stack.
			{
				
				cout<<"Displaying contents of stack using display function\n";
    			st.display();
				cout << "\n1. Add an item." << endl;
    			cout << "2. Remove the last item in the list." << endl;
    			cout << "3. Look at the last item in the list." << endl;
    			cout << "4. Check if the stack is empty." << endl;
    			cout << "5. Display the contents of the stack." << endl;
    			cout << "6. Quit progam." << endl;;
    			cout << "Please enter a number from 1-6:";
    			cin >> choice;
    			cout << "\n\n";
    			break;
			}
			
			case 6:			//Quit program
			{
				cout << "Exiting program.";
				sent =1;
				break;	
    		}
    	}	
    		
	}
    


}
