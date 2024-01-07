#include <iostream>
using namespace std;

class Node
{
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
    Node* head = NULL;
    Node* tail = NULL;
    int i = 0;
    while (arr[i]!=-1)
    {
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
        i++;

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
Node* insertNode(Node* head,int elem, int pos)
{
    if(pos<0)
    {
        return head;
    }
    if(pos==0)
    {
        Node* newNode = new Node(elem);
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node* curr = head;
        Node* prev = curr;
        int i = 0;
        while(i!=pos)
        {
            i++;
            prev = curr;
            curr=curr->next;
        }
        Node* newNode = new Node(elem);
        prev->next = newNode;
        newNode->next = curr;

    }
    return head;
}
int main()
{
    int arr[] = {1,2,3,4,5,-1};
    Node* head = takeInput(arr);
    printLL(head);
    Node* newHead = insertNode(head,6,2);
    printLL(newHead);

}