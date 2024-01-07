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
void printIthNode(Node* head, int i)
{
    int count=1;
    // Assuming i is in range of length of linkedList
    while(count!=i)
    {
        count++;
        head=head->next;
    }
    cout<<"Ith Node: "<<head->data<<endl;
    return;
}
int main()
{
    int arr[] = {1,6,3,4,5,-1};
    Node* head = takeInput(arr);
    printLL(head);
    printIthNode(head,4);
    return 0;
}