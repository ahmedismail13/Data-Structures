class FloatList {

private:	// Declare a structure for the list
	struct ListNode
	{
		float value;
		ListNode *next;
	};
	ListNode *head;	// List head pointer
public:
	FloatList(void);	// Constructor
	FloatList(ListNode *);	// Constructor
	~FloatList(void); // Destructor
	void appendNode(float);
	void insertNode(float);
	ListNode * split();		// function to split list in half and returns first half
	void deleteNode(float);
	void displayList(void);
};
