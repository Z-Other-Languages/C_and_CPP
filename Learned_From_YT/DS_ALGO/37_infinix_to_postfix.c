/*  Check If stack is empty or full 
    char *exp = "8*(9)"; Due to this
    This Program is not running properly in C++, but runs smoothly in C Language.

    This Below program is only for single parenthesis
    and the respective parenthesis is closed on respective time is Not Checked
    For this refer to Multi Parenthesis Match (Next Program)
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1){
        return 1; // means Yes, the stack is Empty.
    }
    else{
        return 0; // means Stack is not empty
    }
}

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int stackTop(struct stack *sp){
    return sp->arr[sp->top];
}

void push(struct stack *ptr, char val){
    if(isFull(ptr)){
        printf( "Stack Overflow. \nUnable to Push : %c",  val);
        // return true;
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
        // return false;
    }
}

char pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf( "Stack Underflow. \nCan't POP from the stack.");
        return 'a';
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int precedence(char ch){
    if(ch == '*' || ch == '/')
        return 3;

    else if(ch == '+' || ch == '-')
        return 2;

    else
        return 1;
}

int isOperator(char ch){
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    else
        return 0;
}

char * infix_to_postfix(char *infix){
    struct stack * sp = (struct stack *)malloc(sizeof(struct stack));  // create a stack pointer or structured Pointer
    sp->size = 100;
    sp->top = -1;
    sp->arr =  (char *)malloc(sp->size * sizeof(char));
    char * postfix = (char *)malloc((strlen(infix)+1) * sizeof(char));
    int i =0;   // track infix traversal
    int j = 0;  // track postfix traversal

    while(infix[i] != '\0') {

        if(!isOperator(infix[i])){
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if( precedence(infix[i]) > precedence(stackTop(sp)) )
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }

    } // All the traversal of infix is done till end

    // if some element are still left in the Stack then follow below code
    while(!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }

    postfix[j] = '\0';  // add end of the element NULL to the POSTFIX
    
    return postfix;
}

int main(){
    
    char *infix = "a-b+t/6 + 7*3 / 6";

    printf("Postfix : %s", infix_to_postfix(infix));

    return 0;
}