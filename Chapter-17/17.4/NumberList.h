#ifndef NUMBERLIST_H
#define NUMBERLIST_H


// this class is different because I add the previous pointer,
// this pointer will point to the previous struct
// so I can easily go back the struct list up to head
class NumberList
{
	private:
		struct ListNode
		{
			double value;
			ListNode *next;
			ListNode *previous; // previous pointer
		};

		ListNode *head;
		
	public:
		NumberList()
		{ 
			head = nullptr;
		}
		/*~NumberList();*/
		void appendNode(double );
		void insertNode(double );
		void deleteNode(double );
		void reverseNode();
		void displayNode();
};
#endif
