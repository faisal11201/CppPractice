#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int d)
        {
            this->data = d;
            this->next = NULL;
        }
};
Node* takeInput(int arr[])
{
    Node *head=NULL;
    Node *tail=NULL;
    for(int i=0;i<6;i++)
    {
        if(arr[i]==-1)
        {
            break;
        }
        Node* newNode = new Node(arr[i]);
        if (head == NULL)
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
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"end"<<endl;
    return;
}
Node* deleteNode(Node* head, int i)
{
    int count = 1;
    Node* curr=head;
    while(count!=i)
    {
        curr = curr->next;
        count++;
    }
    curr->next = curr->next->next;
    return head;
}
int main()
{
    int arr[] = {1,2,3,4,5,-1};
    Node* head = takeInput(arr);
    printLL(head);
    deleteNode(head,2);
    printLL(head);
    return 0;
}