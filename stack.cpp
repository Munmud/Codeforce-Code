#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

class Stack
{
public:
    void create();
    void display();
    void push(int x);
    int pop();
    int peek(int index);
    int isEmpty();
    int isFull();
    int stackTop();
private:
    int Size;
    int top;
    int *s;
};
int Stack::stackTop()
{
    if(!isEmpty())
        return s[top];
    else return -1;
}
int Stack::isFull()
{
    return top==Size-1;
}
int Stack::isEmpty()
{
    if (top==-1)
        return true;
    else return false;
}
void Stack::create()
{

    cout<<"Enter Size: ";
    cin >>Size;
    top=-1;
    s=new int[Size];
}

void Stack::display()
{
    int i;
    for (i=top;i>=0;i--)
        cout<<s[i]<<" ";
    cout<<endl;
}

void Stack::push(int x)
{
    if (top==Size-1)
        cout<<"Stack overflow"<<endl;
    else
    {
        top++;
        s[top]=x;
    }
}
int Stack::pop()
{
    int x=-1;
    if (top==-1)
        cout<<"Stack Underflow"<<endl;
    else
    {
        x=s[top--];
    }
    return x;
}
int Stack::peek(int index)
{
    int x=-1;
    if (top-index+1<0)
        cout<<"Invalid index"<<endl;
    else{
        x=s[top-index+1];
    }
    return x;
}
int main ()
{
    Stack st;
    st.create();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.display();

    cout<<st.peek(2);
}
