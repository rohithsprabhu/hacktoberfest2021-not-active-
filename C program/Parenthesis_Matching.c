#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char * arr;
};
int isFull(struct stack * ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack * ptr , char val){
    if(isFull(ptr)){
        printf("Stack Overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

void pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("%d" , val);
    }
}

int main()
{
    int n;
    scanf("%d" , &n);
    struct stack * s = (struct stack*)malloc(sizeof(struct stack));
    s->size=n;
    s->top=-1;
    s->arr=(char*)malloc(s->size*sizeof(char));
    for(int i=0 ; i<n ; i++){
        scanf("%c" , &s->arr[i]);
    }
    for(int i=0 ; i<n ; i++){
       if(s->arr[i]=='('){
           push(s , '(');
       }
       else if(s->arr[i]==')'){
           if(isEmpty(s)){
               printf("not matching");
           }
           else{
             pop(s);
           }
       }
    }
    if(isEmpty(s)){
        printf("Parenthesis Matching");
    }
    else{
        printf("Parenthesis not Matching");
    }
    return 0;
}
