// Linkedin list

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    };
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};
void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int checkIfPresent(Node *head, int value)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
int lengthOfLinkedList(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
Node* convert2arr(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
} 
Node* removeHead(Node * head){
    Node * temp = head;
    head=head->next;
    free(temp);
    return head;
}
Node * removeTail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;

    Node * temp = head;

    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}
Node * removeEl(Node * head,int k){
    if(head==NULL) return head;
    if(k==1){
        Node * temp = head;
        head=head->next;
        free(temp);
        return head;
    }  
    int cnt=1;
    Node * prev = NULL;
    Node * temp = head;
    while(temp!=NULL){
        cnt++;
        if(k==cnt-1){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp=temp->next;
    }
    return head;
}
Node * insertHead(Node* head,int val){
    Node * temp = new Node(val,head);
    return temp;
    
}
Node * insertTail(Node * head,int val){
    if(head==NULL) return head;
    Node * temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node *newNode = new Node(val);
    temp->next=newNode;
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    Node* head = convert2arr(arr);
    head = insertTail(head,7);
    printLinkedList(head);
}



