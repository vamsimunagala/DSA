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
// print linked list
void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// search an element in the linkedlist
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
// size of the linkedlist
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
// insert new node at head
Node *insertHead(Node *head, int value)
{
    Node *temp = new Node(value, head);
    return temp;
}
// covert array into linkedlist
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
// delete the head node 
Node* removeHead(Node * head){
    Node * temp = head;
    head=head->next;
    free(temp);
    return head;
}

// 

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    Node* head = convert2arr(arr);
    head = removeHead(head);
    cout<<head->data;
}



