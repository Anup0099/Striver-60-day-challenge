
#include <assert.h>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>

struct Node
{
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

Node *findNthNodeFromFront(Node *head, int n)
{
    if (head == nullptr || n <= 0)
    {
        return nullptr; // Invalid input or empty list
    }

    Node *current = head;
    int count = 1;

    while (current != nullptr && count < n)
    {
        current = current->next;
        count++;
    }

    if (count < n || current == nullptr)
    {
        return nullptr;
    }

    return current;
}

void displayList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void userInput(Node *&head)
{
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    if (n <= 0)
    {
        return;
    }

    int value;
    cout << "Enter the value of the nodes: ";
    cin >> value;

    head = new Node(value);
    Node *current = head;

    for (int i = 1; i < n; i++)
    {
        cin >> value;
        current->next = new Node(value);
        current = current->next;
    }
}

int main()
{
    Node *head = nullptr;
    userInput(head);

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    Node *nthNodeFromFront = findNthNodeFromFront(head, n);

    if (nthNodeFromFront != nullptr)
    {
        cout << "The nth node from front is " << nthNodeFromFront->data << endl;
    }
    else
    {
        cout << "The nth node from front is not found" << endl;
    }

    return 0;
}

