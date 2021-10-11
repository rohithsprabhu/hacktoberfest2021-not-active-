#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node *prev;
};
class Doubly_Linked_List{
private:
    Node* head;
public:
    Doubly_Linked_List(){
        head = nullptr;
    }
    void insert(int key, int pos);
    void Display();
    int Count();
};

void Doubly_Linked_List::insert(int key, int pos) {
    Node *p = new Node;
    p->data = key;
    p->next = nullptr;
    Node *q = head;
    Node *r;
    if(head == nullptr){
        p->prev = nullptr;
        head = p;
    }
    else if(pos == 0){
        p->prev = nullptr;
        p->next = head;
        head->prev = p;
        head = p;
    }
    else{
        for (int i = 0; i< pos-1; i++) {
            q = q->next;
        }
        r = q;
        if(r->next != nullptr){
            r =r->next;
            r->prev = p;
        }
        p->next = q->next;

        q->next = p;
        p->prev = q;
    }

}

void Doubly_Linked_List::Display() {
    Node *p = head;
    while (p!= nullptr){
        cout << p->data << endl;
        p = p->next;
    }
}

int Doubly_Linked_List::Count() {
    Node *p = head;
    int count {0};
    while (p!= nullptr){
        count++;
        p = p->next;
    }
    return count;
}

int main() {
    int number_list;
    cin >> number_list;
    Doubly_Linked_List d1;
    for (int i = 0; i < number_list; ++i) {
        int key;
        cin >> key;
        d1.insert(key, i);
    }

    d1.insert(5,3);
    d1.insert(0,0);
    d1.Display();
    return 0;
}
