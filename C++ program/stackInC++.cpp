#include <iostream>
using namespace std;
class Node{
public:
    Node* next;
    int data;
};
class Stack{
private:
    Node* top;
public:
    Stack(){
        top = nullptr;
    }

    void push(int x);

    int pop();

    void Display();
};
void Stack::push(int x){
    Node *t = new Node;
    if(t == nullptr){
        cout << "Stack Overflow" << endl;
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}
int Stack::pop(){
    if(top!= nullptr){
        Node *t = top;
        int x = top->data;
        top = top->next;
        delete t;
        return x;
    }
    else{
        cout << "Stack Underflow" << endl;
        return -1;
    }
}
void Stack::Display(){
    Node *t = top;
    while (t!= nullptr){
        cout << t->data << "\t";
        t = t->next;
    }
    cout << endl;
}
int main() {
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(4);
    s1.Display();
    s1.pop();
    s1.Display();
    return 0;
}
