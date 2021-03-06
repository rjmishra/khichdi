/*------------------------------------------------------------------
Name: Ranjan Mishra
Roll Number: CS1519
Date of Submission:
Deadline date: 
Program description:
Acknowledgements:
--------------------------------------------------------------------*/


typedef struct node{
	int element;
	struct node *next;
	} Node;


Node* createNode(int element);


Node* init(int element);

Node* addAtBeginning(int element, Node *header);

void addAtEnd(int element, Node *header);

void addAtPosition(int position, int element, Node *header);

Node* deleteFromBeginning(Node *header);

Node* deleteFromEnd(Node *header);

Node* deleteFromPosition(int position, Node* header);

void displayList(Node *header);

int moveBackandForth(Node *header);
