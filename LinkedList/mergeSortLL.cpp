#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int d)
        {
            this->data=d;
            this->next=NULL;
        }
};
Node* takeInput(int arr[])
{
    Node* head=NULL;
    Node* tail=NULL;
    for(int i=0;i<6;i++)
    {
        if(arr[i]==-1)
        {
            break;
        }
        Node* newNode = new Node(arr[i]);
        if(head==NULL)
        {
            head = newNode;
        }
        else
        {
            tail->next = newNode;
        }
        tail = newNode;
    }
    return head;
}
void printLL(Node* head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;

    }
    cout<<"end"<<endl;
}
Node* midPoint(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node* merge(Node* head1, Node* head2)
{
	if(head1==NULL)
	{
		return head2;
	}
	if(head2==NULL)
	{
		return head1;
	}
	Node* fhead = NULL;
	Node* ftail = NULL;
	if(head1->data < head2->data)
	{
		fhead = head1;
		ftail = head1;
		head1 = head1->next;
	}
	else
	{
		fhead = head2;
		ftail = head2;
		head2 = head2->next;
	}
	while(head1!=NULL && head2!=NULL)
	{
		if(head1->data<head2->data)
		{
			ftail->next = head1;
			ftail = head1;
			head1 = head1->next;
        } 
		else 
		{
            ftail->next = head2;
            ftail = head2;
            head2 = head2->next;
        }
    }
	if(head1!=NULL)
	{
		ftail->next = head1;
	}
	if(head2!=NULL)
	{
		ftail->next = head2;
	}
	return fhead;
}

Node *mergeSort(Node *head)
{
	//Write your code here
	if(head==NULL || head->next == NULL)
	{
		return head;
	}
	Node* mid = midPoint(head);
	Node* temp = mid->next;
	mid->next = NULL;
	Node* head1 = mergeSort(head);
	Node* head2 = mergeSort(temp);
	Node* mer = merge(head1,head2);
	return mer;
}
int main()
{
    int arr[] = {5,4,3,2,-1};
    Node* head = takeInput(arr);
    printLL(head);
    Node* mergeSortLL = mergeSort(head);
    printLL(mergeSortLL);

}