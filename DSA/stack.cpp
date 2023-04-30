#include<bits/stdc++.h>

using namespace std;

#define STACK_MAX  100

typedef struct{
    int top;
    int data[STACK_MAX];
} Stack;

void push(Stack *s, int item){
    if(s->top < STACK_MAX){
        s->data[s->top] = item;
        s->top++;
    } else {
        cout << "Stack is full." << endl;
    }
}

int  pop(Stack *s){
    int item;
    if(s->top == 0){
        cout << "Stack is empty" << endl;
        return -1;
    } else {
        s->top--;
        item = s->data[s->top];
        return item;
    }
}

int main()
{
    Stack a;
    int temp;

    a.top = 0;

    while (true)
    {
        int n;
        cout << endl << "Enter a value:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. View data" << endl;

        cin >> n;

        switch (n)
        {
        case 1:
            cout << "Enter a value: " ;
            cin >> temp;
            push(&a, temp);
            cout << temp << " is inserted in the stack." << endl;
            break;

        case 2:
            temp = pop(&a);
            if(temp > 0){
                cout << temp << " is deleted from the stack." << endl;
            }
            break;
        
        case 3:
            for (int i = 0; i < a.top; i++){
                cout << a.data[i] << " ";
            }
        default:
            break;
        }

        if(n == 4){
            break;
        }
    }

}