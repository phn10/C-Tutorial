#include "NumberList.h

// function definition
// basically, this function will flip the array of struct from left to right
// now head pointer would be the last struct

void NumberList::reverseNode()
{
	ListNode *nodePtr; // to traverse the array of struct
	ListNode previousNode; // point to previous node
	int i = 0; // to count the number of struct in this array
	
	nodePtr = head;
	nodePtr->previous = nullptr; // the previous pointer of head pointer is nullptr
	
	// with that in mind, the array is end two side by two nullptr
	
	// get to the end struct
	while (nodePtr->next)
	{
		nodePtr = nodePtr->next;
		i += 1;
	}
	head = nodePtr; // assign head pointer new position

  // while inside the array
	while (i >= 0)
	{
		nodePtr->next = nodePtr->previous;
		nodePtr = nodePtr->previous; // move the nodePtr back to the beginning 
		i -= 1;
	}
} 
