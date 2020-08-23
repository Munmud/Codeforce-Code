#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class Stack{
private:
    Node *top=NULL;
    int Size;
    int *s;
public:
    void push(int x);
    int pop();
    int peek(int index);
    void display();
};

void Stack::push(int x)
{
    Node *t;
    t=new Node;
    if (t==NULL)
        cout<<"stack is full"<<endl;
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

int Stack::pop()
{
    int x=-1;
    Node *t;
    t=top;
    if (top==NULL)
        cout<<"stack is empty"<<endl;
    else
    {
        x=t->data;
        top=top->next;
        delete t;
    }
    return x;
}

void Stack::display()
{
    Node *t;
    t=top;
    while(t!=NULL)
    {
        cout << t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}
int main()
{
    Stack st;
    st.pop();
    st.push(10);
    st.push(20);
    st.push(20);
    st.push(20);
    st.display();
    cout<<st.pop()<<endl;
    st.display();

}
