#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *parent;
    Node *left;
    Node *right;
    Node(int _a)
    {
        data = _a;
        parent = NULL;
        left = NULL;
        right = NULL;
    }
};
Node *root = NULL;

bool insert(int a)
{
    Node *cur = root;
    Node *temp = new Node(a);
    if (cur == NULL)
    {
        root = temp;
        return true;
    }
    Node *target;
    while (cur != NULL)
    {
        target = cur;
        if ((temp->data + 3) < cur->data)
        {
            cur = cur->left;
        }
        else if ((temp->data - 3) > cur->data)
        {
            cur = cur->right;
        }
        else
        {
            return false;
        }
    }
    temp->parent = target;
    if (temp->data < target->data)
    {
        target->left = temp;
    }
    else
    {
        target->right = temp;
    }

    return true;
}

void inOrder_print(Node *root)
{
    stack<Node *> stk;
    Node *cur = root;

    while (!stk.empty() || cur != NULL)
    {
        while (cur != NULL)
        {
            stk.push(cur);
            cur = cur->left;
        }
        cur = stk.top();
        stk.pop();
        cout << cur->data << " ";
        cur = cur->right;
    }
}

int main()
{
    int a;
    cin >> a;
    do
    {
        if (insert(a))
        {
            inOrder_print(root);
        }
        else
        {
            inOrder_print(root);
            cout << "(Reservation failed)";
        }
        cout << endl;
        cin >> a;
    } while (a != -1);

    return 0;
}
