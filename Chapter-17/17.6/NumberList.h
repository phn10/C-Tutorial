#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
	private:
		struct ListNode
		{
			double value;
			ListNode *next;
			ListNode *previous;
		};

		ListNode *head;
		
	public:
		NumberList()
		{ 
			head = nullptr;
		}
		/*~NumberList();*/
		void appendNode(double );
		void insertNode(int, double );
		void deleteNode(double );
		void reverseNode();
		void displayNode();
};
#endif
