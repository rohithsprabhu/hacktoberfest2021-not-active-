#include <iostream>
using namespace std;
class Node{
//private:

    public:
    int data;
    Node *next_address;
};

Node *first = nullptr;
Node *Second = nullptr;
Node *third = nullptr;

void Link_list(const int arr[], int size_arr){
    Node *last, *temp;
    first = new Node;
    first->data = arr[0];
    first->next_address = nullptr;
    last = first;

    for(int i =1; i< size_arr; i++){
        temp = new Node;
        temp->data = arr[i];
        temp->next_address = nullptr;
        last->next_address = temp;
        last = temp;
    }
}
void Link_list1(const int arr[], int size_arr){
    Node *last, *temp;
    Second = new Node;
    Second->data = arr[0];
    Second->next_address = nullptr;
    last = Second;
    //last = NULL;
    for(int i =1; i< size_arr; i++){
        temp = new Node;
        temp->data = arr[i];
        temp->next_address = nullptr;
        last->next_address = temp;
        last = temp;
    }
}

void Display_linked_list(Node *p){
    if(p!=nullptr){
        cout << p->data ;
        cout << endl;
        //p=p->next_address;
        Display_linked_list(p->next_address);
    }

}

int Count_nodes(Node *p){
    //p = new Node;
    int count = 0;
    while(p!=nullptr){
        count++;
        p=p->next_address;
    }
    return count;
}

int Sum(Node *p){
    int sum = 0;
    while (p!=nullptr){
        sum += p->data;
        p = p->next_address;
    }
    return sum;
}

int min(Node *p){
    int min = p->data;
    while (p!=nullptr) {
        if (p->data < min) {
            min = p->data;
        }
        p=p->next_address;
    }
    return min;
}

Node* Search(Node *p, int data){
    if(data == p->data ){
        return p;
    }
    else if (p->next_address!= nullptr)
        return Search(p->next_address, data);
    return nullptr;
}

Node* Improved_Search(Node *p, int key){
    Node *q = nullptr;
    while (p!= nullptr){
        if (key == p->data){
            q->next_address = p->next_address;
            p->next_address = first;
            first = p;
            return p;
        }
        q=p;
        p=p->next_address;
    }
    return p;

}

int max(Node *p){
    int max = p->data;

    while(p!= nullptr){

        if(p->data > max)
        {
            max = p->data;
        }
        p=p->next_address;

    }
    return (max);
}

void add_before(int data){
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next_address = first;
    first = new_node;

}

void add_after(int data, int pos){
    Node *new_node = new Node;
    new_node->data = data;
    Node *position;
    position = first;
    for(int i =1; i<pos;i++){
        position = position->next_address;
    }

    new_node->next_address = position->next_address;
    position->next_address = new_node;
}

void Insert(int pos, int data){
    Node *new_node, *position;
    new_node = new Node;
    //position = new Node;
    if(pos == 0){
        new_node->data = data;
        new_node->next_address = first->next_address;
        first = new_node;
    }
    else if(pos>0){
        position = first;
        for (int i =1; i<pos && position; i++){
            position = position->next_address;
        }
        if(position) {
            new_node->data = data;
            new_node->next_address = position->next_address;
            position->next_address = new_node;
        }
    }

}

int Delete_Node(int pos){
    Node *position, *position_1;
    int x = 0;
    if(pos == 1){
    x=first->data;
    position = first;
    first = first->next_address;
    delete position;
    }
    else if(pos > 0){
        position = first;
        position_1 = nullptr;
        for (int i = 1; i < pos; ++i) {
            position_1 = position;
            position=position->next_address;
        }
        position_1->next_address = position->next_address;
        x = position->data;
        delete position;
    }
    return x;
}

void reverse_linked_list(int size_arr){

    int arr[size_arr];
    Node *p = first;
    int i =0;
    while (p!= nullptr){
        arr[i] = p->data;
        i++;
        p=p->next_address;
    }
    p = first;
    i--;
    while (p!= nullptr){
        p->data = arr[i];
        i--;
        p=p->next_address;
    }
}

void reverse_linked_using_without_copying(){
    Node *p = first, *q, *r;
    while (p!= nullptr){
        r=q;
        q=p;
        p=p->next_address;
        q->next_address = r;
    }
    first = q;
}

void Merge(Node *p, Node *q){
    third = p;
    /*p = first;
    q = Second;*/
    while (p->next_address!= nullptr){
        p=p->next_address;
    }
    p->next_address = q;
}

int main() {
    int arr[] = {10,11,3453,13,36,768,34};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    Link_list(arr, size_arr);
    Display_linked_list(first);
    /*cout << "No of Nodes is: "<<  Count_nodes(first) << endl;
    cout << "Sum of Data is : "<<  Sum(first) << endl;
    cout << "Max element is : " << max(first) << endl;
    cout << "Min element is : " << min(first) << endl;
    if(Search(first, 34) == nullptr)
    cout << "ELEMENT NOT FOUND";
    else
        cout << "ELEMENT AT LOCATION: " << Search(first, 34) << endl;
    if(Improved_Search(first, 34) == nullptr)
        cout << "ELEMENT NOT FOUND";
    else
        cout << "ELEMENT AT LOCATION: " << Search(first, 34) << endl;
    Display_linked_list(first);
    add_before(15);
    Display_linked_list(first);
    add_after(43,4);
    Display_linked_list(first);
    Insert(6,65);
    cout << endl << endl << endl;
    Display_linked_list(first);
    cout << endl;
    cout << Delete_Node(1);
    cout << endl << endl << endl;
    Display_linked_list(first);
    cout << endl;
    cout << Delete_Node(3);
    cout << endl << endl << endl;
    Display_linked_list(first);
    //reverse_linked_list(size_arr);
    cout << endl << endl << endl;
    Display_linked_list(first);
    reverse_linked_using_without_copying();
    cout << endl << endl << endl;
    //Display_linked_list(first);*/

    cout << endl << endl;
    int arr1[] = {10,15,20,25};
    Link_list1(arr1,4);
    Display_linked_list(Second);
    cout << endl << endl;
    Merge(first, Second);

    Display_linked_list(first);
    return 0;

}
