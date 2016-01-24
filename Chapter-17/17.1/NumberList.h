#ifndef NUMBERLIST
#define NUMBRELIST

class NumberList
{
	private:

		// declare a struct for list
		struct node
		{
			int value;    // value store in this struct
			node *next;   // next pointer point to next struct
		};
		node *head; // beginning list head pointer
	public:
		
		// constructor 
		NumberList()
		{ head = nullptr; }
		~NumnberList();
		~NumberList();
		void appendNode(int );
		void insertNode(int , int );
		void deleteNode(int );
		void displayList() const;
};
#endif
