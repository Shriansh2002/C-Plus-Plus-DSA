// Add One To Linked List

#include <bits/stdc++.h> 

int func(Node * &head){
	if(head == NULL)
		return 1;

	int carry = func(head->next);

	int value = head->data + carry;
	head->data = value % 10;
	carry = value / 10;

	return carry;
}


Node *addOne(Node *head){
	if(head == NULL)
		return head;

	int carry = func(head);

	Node *temp = new Node(carry);
	temp->next = head;
	head = temp;

	while(head->data == 0)
		head = head->next;
	
	return head;
}
