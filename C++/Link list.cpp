#include <iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
	Node(int val)
	{
		data = val;
		next = NULL;
	}
};
class List
{
	Node* head;
	Node* tail;
	public:
	List()
	{
		head = tail = NULL;
	}
	
	void read_values(int val)
	{
		Node* newNode = new Node(val);
		if(head == NULL)
		{
			head = tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
	}
	
	void remove_node(int pos)
	{
		if(head == NULL)
		{
			cout<<"Link list is empty! Nothing to remove."<<endl;
		}
		else
		{	
			if(pos == 1)
			{
				Node* del = head;
				head = head->next;
				delete del;
				cout<<"Node delted from position 1."<<endl;
				return;
			}
			
			Node* temp = head;
			for(int i=1; i<pos-1 && temp!=NULL; i++)
			{
				temp = temp->next;
			}
			
			if(temp == NULL || temp->next == NULL)
			{
				cout<<"Invalid position!"<<endl;
				return;
			}
			
			Node* del = temp->next;
			temp->next = temp->next->next;
			delete del;
			cout<<"Node removed from position "<<pos<<endl;
		}
	}
	
	void display_LL()
	{
		if(head == NULL)
		{
			cout<<"Linked List is empty!."<<endl;
			return;
		}
		Node* temp = head;
		while(temp != NULL)
		{
			cout<<temp->data<<"->";
			temp = temp->next;
		}
		cout<<"NULL"<<endl;
	}
};

int main()
{
	List ll;
	int pos, val;
	cout<<"Enter five values:"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<" ";
		cin>>val;
		ll.read_values(val);
	}
	cout<<endl;
	cout<<"Linked list becomes:"<<endl;
	ll.display_LL();
	cout<<"\nEnter position of node you want to remove: ";
	cin>>pos;
	ll.remove_node(pos);
	cout<<endl;
	cout<<"Updated List:"<<endl;
	ll.display_LL();
	return 0;
}
