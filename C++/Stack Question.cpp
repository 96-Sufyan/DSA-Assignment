#include <iostream>
using namespace std;
const int size = 100;
int top=-1;
int arr[size];
void push(int n)
{
	arr[++top] = n;
}

void pop()
{
	top--;
}

void isFull()
{
	if(top>=size)
	{
		cout<<"Stack is full."<<endl;
	}
	else
	{
		cout<<"Stack is empty."<<endl;
	}
}

void isEmpty()
{
	if(top==-1)
	{
		cout<<"Stack is empty."<<endl;
	}
	else
	{
		cout<<"Stack is full."<<endl;
	}
}
int show()
{
	return arr[top];
}

int main()
{
	int n;
	int choice;
	while(true)
	{
	cout<<"\n<==Menu==> "<<endl;
	cout<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. isFull"<<endl;
	cout<<"4. isEmpty"<<endl;
	cout<<"5. Show"<<endl;
	cout<<"6. Exit"<<endl;
	cout<<"\nEnter your choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter value to push in stack: ";
			cin>>n;
			push(n);
			cout<<endl<<"Pushed!!!"<<endl;
		break;
		
		case 2:
			pop();
			cout<<"Popped!!!"<<endl;
		break;
		
		case 3:
			isFull();
		break;
		
		case 4:
			isEmpty();
		break;
		
		case 5:
			cout<<"The value of top is: "<<show()<<endl;
		break;
		
		case 6:
			cout<<"Exiting....."<<endl;
			return 0;
		break;
		
		default:
			cout<<"You entered wrong choice!"<<endl;
		break;
	}
	}
}
