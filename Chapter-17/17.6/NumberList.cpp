#include "NumberList.h"

// insert the number according to the index, 
// if index = 0, put the number at the beginning of the array
// if index > length of array, put the number at the end of the array
void NumberList::insertNode(int index, double num)
{
	ListNode *newNode; // to store the value of new number
	ListNode *nodePtr; // to traverse the array
	ListNode *previousNode; 

	newNode = new ListNode; // dynamically allocate new truct 
	newNode->value = num; // store the number value

// if the index = 0, put number at the beginning of the array
	if (index == 0) 
	{
		newNode->next = head;
		head = newNode;
	}
	
	// if index is greater than 0
	else
	{
		int i = 0;
		nodePtr = head;
		
		// traverse the nodePtr as long as it reach the index or it surpass the lenght of array
		while (nodePtr->next != nullptr && i < index)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
			i += 1; 
		}
    
    // if the index surpass the length of array, which mean nodePtr->next is nullptr
		if (nodePtr->next == nullptr)
		{
			nodePtr->next = newNode;
			newNode->next = nullptr;
		}
		
		// if the index is inside the array
		else
		{
		  // put the newNode between previousNode and nodePtr
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}
