#include<bits/stdc++.h>

using namespace std;

#define QUEUE_MAX  5

typedef struct{
    int head;
    int tail;
    int data[QUEUE_MAX + 1];
} Queue;

void enqueue(Queue *q, int item){

    if((q->tail+1) % (QUEUE_MAX + 1) == q->head){
        cout << "Queue size is full." << endl;
    } else {
        q->data[q->tail] = item;
        q->tail = (q->tail+1) % (QUEUE_MAX + 1);

        cout << item << " is inserted in the stack." << endl;
        cout << q->head << " " << q->tail << endl;
    }
    
}

int  dequeue(Queue *q){
    int item;
    if(q->tail == q->head){
        cout << "Queue is empty" << endl;
        return -1;
    } else {
        item = q->data[q->head];
        q->head = (q->head +1) % (QUEUE_MAX + 1);

        cout << item << " is deleted from the stack." << endl;
        cout << q->head << " " << q->tail << endl;
    }
}

int main()
{
    Queue a;
    int temp;

    a.head = 0;
    a.tail = 0;

    while (true)
    {
        int n;
        cout << endl << "Enter a value:" << endl;
        cout << "1. Enqueue\t" ;
        cout << "2. Dequeue\t";
        cout << "3. View data\t";
        cout << "4. Exit" << endl;

        cin >> n;

        switch (n)
        {
        case 1:
            cout << "Enter a value: " ;
            cin >> temp;
            enqueue(&a, temp);
            break;

        case 2:
            dequeue(&a);
            break;
            
        case 3:
            
            for (int i = a.head; i != a.tail ; i = ((i + 1) % (QUEUE_MAX + 1)))
            {
                cout << a.data[i] << " ";
            }
            

            break;
            
            
        default:
            break;
        }

        if(n == 4){
            break;
        }
    }

}