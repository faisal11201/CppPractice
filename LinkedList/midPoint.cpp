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
int main()
{
    int arr[] = {1,3,4,5,-1};
    Node* head = takeInput(arr);
    printLL(head);
    Node* mid = midPoint(head);
    if(mid!=NULL)
    {
        cout<<mid->data<<endl;
    }
}