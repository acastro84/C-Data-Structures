##include "ArrayBag.h"
#include <iostream>
#include <cstddef>

template<class ItemType>
ArrayBag<ItemType>::ArrayBag(): itemCount(0), maxItems(DEFAULT_CAPACITY)
{
}  // end default constructor

template<class ItemType>
int ArrayBag<ItemType>::getCurrentSize() const
{
	return itemCount;
}  // end getCurrentSize

template<class ItemType>
bool ArrayBag<ItemType>::isEmpty() const
{
	return itemCount == 0;
}  // end isEmpty

template<class ItemType>
bool ArrayBag<ItemType>::add(const ItemType& newEntry)
{
	bool hasRoomToAdd = (itemCount < maxItems);
	if (hasRoomToAdd)
	{
		items[itemCount] = newEntry;
		itemCount++;
	}  // end if
    
	return hasRoomToAdd;
}  // end add

template<class ItemType>
bool ArrayBag<ItemType>::remove(const ItemType& anEntry)
{
   int locatedIndex = getIndexOf(anEntry);
	bool canRemoveItem = !isEmpty() && (locatedIndex > -1);
	if (canRemoveItem)
	{
		itemCount--;
		items[locatedIndex] = items[itemCount];
	}  // end if
    
	return canRemoveItem;
}  // end remove

template<class ItemType>
void ArrayBag<ItemType>::clear()
{
	itemCount = 0;
}  // end clear

template<class ItemType>
int ArrayBag<ItemType>::getFrequencyOf(const ItemType& anEntry) const
{
   int frequency = 0;
   int curIndex = 0;       // Current array index
   while (curIndex < itemCount)
   {
      if (items[curIndex] == anEntry)
      {
         frequency++;
      }  // end if
      
      curIndex++;          // Increment to next entry
   }  // end while
   
   return frequency;
}  // end getFrequencyOf

template<class ItemType>
bool ArrayBag<ItemType>::contains(const ItemType& anEntry) const
{
	return getIndexOf(anEntry) > -1;
}  // end contains

/* ALTERNATE 1: First version
template<class ItemType>
bool ArrayBag<ItemType>::contains(const ItemType& target) const 
{
   return getFrequencyOf(target) > 0;
}  // end contains

// ALTERNATE 2: Second version 
template<class ItemType>
bool ArrayBag<ItemType>::contains(const ItemType& anEntry) const
{
   bool found = false;
   int curIndex = 0;        // Current array index
   while (!found && (curIndex < itemCount))
   {
      if (anEntry == items[curIndex])
      {
         found = true;
      } // end if
      
      curIndex++;           // Increment to next entry
   }  // end while   
   
   return found;
}  // end contains
*/

template<class ItemType>
std::vector<ItemType> ArrayBag<ItemType>::toVector() const
{
   std::vector<ItemType> bagContents;
	for (int i = 0; i < itemCount; i++)
		bagContents.push_back(items[i]);
      
   return bagContents;
}  // end toVector

// private
template<class ItemType>
int ArrayBag<ItemType>::getIndexOf(const ItemType& target) const
{
	bool found = false;
   int result = -1;
   int searchIndex = 0;
   
   // If the bag is empty, itemCount is zero, so loop is skipped
   while (!found && (searchIndex < itemCount))
   {
      if (items[searchIndex] == target)
      {
         found = true;
         result = searchIndex;
      } 
      else
      {
         searchIndex++;
      }  // end if
   }  // end while
   
   return result;
}  // end getIndexOf



/**************************************************************

#include <iostream>
#include <string>
#include "ArrayBag.h"

using namespace std;


void bagTester(ArrayBag<int>& bag);

/********************************************/
/* Function: swap                           */
/* Inputs: Refernce of int values xp and yp */
/* Outputs: None							*/
/* Purpose: 		This function swaps two */
/*					elements in an array.   */
/*									 		*/
/********************************************/


void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort 

/********************************************/
/* Function: bubbleSort                     */
/* Inputs: Integer Array, integer n         */
/* Outputs: None							*/
/* Purpose: 		This function sorts an  */
/*					integer array by using  */
/*					the swap function. 		*/
/********************************************/
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
            
    
    
}  

/* Function to print an array */
/********************************************/
/* Function: printArray                     */
/* Inputs: Integer Array, integer size      */
/* Outputs: None							*/
/* Purpose: 		This function prints an */
/*					integer array by using  */
/*					a for loop and the int  /*
/*					size            		*/
/********************************************/

int binarySearch(const int anArray[], int first, int last, int target)
{
	int index  = 0;
	if (first > last)
		index = -1; // target not in array
	else
	{
		//IF target is in anArray, anArray(first) < = target < =  anArray[last]
		int mid = first + (last - first) /2;
		if (target == anArray[mid])
			index = mid;  // target found at anArray[mid]
		else if (target < anArray[mid])
			//point x
			index = binarySearch(anArray, first, mid - 1, target);
				
		else
			//Point y
			index = binarySearch(anArray, mid + 1, last, target);
	}	// end if
	return index;
} // end binarySearch




void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
} 

int main()
{
	ArrayBag<int> bag;
	int items[] = {1, 33, 6, 9, 2, 65, 4, 29, 5, 8, 39, 88, 7, 25, 51, 3, 99, 14, 11, 10};
	
	
	cout << "Adding positive integers to the bag: " << endl;
	for (int i = 0; i < 20; i++)
	{
		bag.add(items[i]);
	}  // end for
	int n = sizeof(items)/sizeof(items[0]);
	bubbleSort(items, n); 
	
	
 
    cout<<"Sorted array: \n";  
    printArray(items, n);
    int searchSelection = 0;
    int fArray = items[0];
    int lArray = items[19];
    
    cout << "Welcome to the search program.  Please make a selection: ";
    cout << "1. Search for a value in the array of numbers. ";
    cout << "2. Quit;";
    cin >> searchSelection;
    
    
    while (searchSelection > 0)
    {
	
    
    	if (searchSelection = 1)
    	{
    		int searchNum = 0;
    		cout << "Please enter the number to search : \n";
    		cin >> searchNum;
    		binarySearch(items, fArray, lArray, searchNum);
    		cout << "Please make a selection: ";
    		cout << "1. Search for a value in the array of numbers. ";
    		cout << "2. Quit;";
    		cin >> searchSelection;
		}
		if (searchSelection = 2)
		{
			cout << "Exiting program. ";
			searchSelection = 0;
		}
		if (searchSelection > 2)
    	{
			cout << "Please enter 1 or 2: \n";
    		cout << "1. Search for a value in the array of numbers. \n";
    		cout << "2. Quit;\n";
    		cin >> searchSelection;
		}
	}

    
    
    
    
	//bagTester(bag);
	
   return 0;
   
}  // end main
/*

void bagTester(ArrayBag<int>& bag)
{
	cout << "The bag is not empty; isEmpty: returns " << bag.isEmpty() << endl;

	cout << "About to clear the bag, ";
	bag.clear();
   
	cout << "isEmpty: returns " << bag.isEmpty() << endl;
}  // end bagTester
*/


