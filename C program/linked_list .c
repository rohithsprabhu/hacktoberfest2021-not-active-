#include<stdio.h>
#include<stdlib.h>
 
struct Node{
    int value;
    struct Node * next;
};
 
struct Node * reverseList(struct Node * Head){
    struct Node * prev, * curr, * nextN;
    prev = NULL;
    curr = Head;
    nextN = curr->next;
    while(curr!=NULL){
        curr->next = prev;
        prev = curr;
        curr = nextN;
        nextN = curr?curr->next:NULL;
    }
    Head = prev;
    return Head;
}
 
int main(){
    int n;
    scanf("%d", &n);
    struct Node * ar = (struct Node *)malloc(n*sizeof(struct Node));
    for(int i=0;i<n;i++){
        int x;
        scanf("%d", &x);
        ar[i].value = x;
        ar[i].next = NULL;
    }
    struct Node * Head;
    int x;
    scanf("%d", &x);
    Head = &ar[x];
    for(int i=0;i<n-1;i++){
        int x1, x2;
        scanf("%d%d", &x1, &x2);
        ar[x1].next = &ar[x2];
    }
    struct Node * temp = Head;
    //printf("%d", Head->value);
    int i = 0;
    while (temp != NULL){
        printf("%d", temp->value);
        temp = temp->next;
        if(i < n-1) printf(" ");
        i++;
    }
    printf("\n");
    temp = reverseList(Head);
    i = 0;
    while (temp != NULL){
        printf("%d", temp->value);
        temp = temp->next;
        if(i < n-1) printf(" ");
        i++;
    }
}
