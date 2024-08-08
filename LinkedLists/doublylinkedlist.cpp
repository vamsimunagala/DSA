#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node *Convert2Dll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *deleteHead(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    { // Empty list
        return nullptr;
    }
    Node *temp = head;
    head = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}
Node *deleteTail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    { // Empty list
        return nullptr;
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *newTail = tail->back;
    newTail->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}
Node *deleteKthElement(Node *head, int k)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    };
    int cnt = 0;
    Node *Knode = head;
    while (Knode != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        Knode = Knode->next;
    }
    Node *prev = Knode->back;
    Node *next = Knode->next;

    if (prev == nullptr && next == nullptr)
    {
        return nullptr;
    }
    else if (prev == nullptr)
    {
        return deleteHead(head);
    }
    else if (next == nullptr)
    {
        return deleteTail(head);
    };
    prev->next = next;
    next->back = next;

    Knode->back = nullptr;
    Knode->next = nullptr;

    delete Knode;
    return head;
}
Node* insertBeforeHead(Node * head,int val){
    Node * newNode = new Node(val,head,nullptr);
    head->back=newNode;
    return newNode;
}
Node* insertBeforeTail(Node * head,int val){
    if(head->next== NULL){
        return insertBeforeHead(head,val);
    }
    Node * tail = head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node * prev=tail->back;
    Node * newTail = new Node(val,tail,prev);
    prev->next=newTail;
    tail->back=newTail;
    return head;

}
Node* insertKthElement(Node * head,int k,int value){
    if(head == NULL || head->next==NULL){
        return insertBeforeHead(head,value);
    }
    Node * temp = head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt == k ) break;
        temp = temp->next;
    }
    Node * prev = temp->back;
    Node * newNode = new Node(value,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}
void insertBeforeNode(Node * head,int value){
    Node * prev = head->back;
    Node * newNode = new Node(value,head,prev);
    prev->next=newNode;
    head->back=newNode;
    

}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = Convert2Dll(arr);
    insertBeforeNode(head,10);
    print(head);
    return 0;
}