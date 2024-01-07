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
int lengthOfLLR(Node* head)
{
    if(head==NULL)
    {
        return 0;
    }
    return 1 + lengthOfLLR(head->next);
}
int main()
{
    int arr[] = {1,2,3,4,5,-1};
    Node* head = takeInput(arr);
    printLL(head);
    cout<<"Length of LL: "<<lengthOfLLR(head)<<endl;
}