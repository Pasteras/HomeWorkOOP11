#include <iostream>
using namespace std;

class Node
{
public:
	int value;
	Node* next1;
	Node* next2;
};

int main()
{
	Node* node1 = new Node();
	
	node1->next1 = new Node();
	node1->next2 = new Node();
	
	node1->next1->value = 2;
	node1->next1->next1 = new Node();
	node1->next1->next2 = node1->next2;
	node1->next1->next1->value = 3;
	node1->next1->next1->next1 = node1->next1;
	node1->next1->next1->next2 = node1->next2;
	node1->next1->next1->next2 = node1;
	node1->next2->value = 4;
	node1->next2->next1 = node1->next1;
	node1->next2->next2 = node1->next1->next1;

	Node* node1 = new Node();

	node1->value = 1;
	node1->next1 = new Node();
	node1->next2 = new Node();

	node1->next2->value = 2;
	node1->next2->next1 = new Node();
	node1->next2->next2 = nullptr;
	node1->next2->next1->value = 3;
	node1->next2->next1->next1 = node1->next2;
	node1->next2->next1->next2 = nullptr;
	node1->next1->value = 4;
	node1->next1->next1 = node1->next2;
	node1->next1->next2 = node1->next2->next1;
}