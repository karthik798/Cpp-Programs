// CPP code to find the pair with given product
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node* next;
};

/* Given a reference (pointer to pointer) 
	to the head of a list and an int, 
	push a new node on the front 
	of the list. */
void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = new Node;
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

/* Takes head pointer of the linked list and product*/
int check_pair_product(struct Node* head, int prod)
{
	struct Node *p = head, *q;
	while (p != NULL) {

		q = p->next;
		while (q != NULL) {

			// check if both product is equal to
			// given product
			if ((p->data) * (q->data) == prod) {
				cout << p->data << " " << q->data;
				return true;
			}
			q = q->next;
		}

		p = p->next;
	}

	return 0;
}

/* Driver program to test above function */
int main()
{
	/* Start with the empty list */
	struct Node* head = NULL;

	/* Use push() to construct linked list*/
	push(&head, 1);
	push(&head, 4);
	push(&head, 1);
	push(&head, 12);
	push(&head, 1);
	push(&head, 18);
	push(&head, 47);
	push(&head, 16);
	push(&head, 12);
	push(&head, 14);

	/* function to print the result*/
	bool res = check_pair_product(head, 26);
	if (res == false)
		cout << "NO PAIR EXIST";

	return 0;
}
