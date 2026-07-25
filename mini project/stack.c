#include <stdio.h>
#include <stdlib.h>
#define max 5

typedef struct Stack{
    int items[max];
    int top;
} Stack;

void initstack(Stack *s) {
    s->top = -1;

}
int isfull(Stack *s) {
    return s->top == max - 1;
}
int isempty(Stack *s) {
    return s->top == -1;
}
void push(Stack *s, int newitem) {
    if (isfull(s)) {
    }

    s->top++;
    s->items[s->top] = newitem;
    printf("%d pushed to stack\n", newitem);
       
   

}