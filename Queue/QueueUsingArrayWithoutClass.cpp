#include<iostream>
using namespace std ;
#define SIZE 10
//FIFO
//      (front)1 2 5 245(back)
//      (back)1 2 5 234 (front)
int queue[SIZE]; //global array index value defaultly assign  with 0
int front=-1,rear=-1 ;



bool isQueueFull()
{
    
    if((rear-front)+1==SIZE|| front>rear)return true ;
    return false ;
}
bool isQueueEmpty()
{
    if(rear<front)return true ;
    else return false;
}

void enqueue(int value)
{
    if(isQueueFull())
    {
        cout<<"Cant push value , Queue is full "<<endl;
    }
    else if(front==-1 && rear==-1)
    {
        front=0 ;
        rear=0 ;
        queue[rear]=value;

    }
    else
    {
        rear++ ;
        queue[rear]=value ;
        //queue[++rear]=value ;
    }

}

int dequeue()
{
    //delete and return the front value of the queue
    if(isQueueEmpty())return -1 ;
    int str = queue[front];
    front++ ;
    return str;
}


int frontValue()
{
    //only return the front value
    return queue[front];
}

int queueSisze()
{
    return (rear-front)+1;
}

void printQueue()
{
    for(int i=front ;i<=rear ;i++)
    {
        cout<<queue[i]<<" ";
    }
    cout<<endl ;
}

int main()
{
    freopen("input.txt", "r" ,stdin);
    freopen("output.txt","w",stdout);
    for(int i=1 ;i<=10 ;i++)
    {
        int val ;cin>>val ;
        enqueue(val);
    }
    printQueue();
    cout<<"Current Size : "<<queueSisze()<<endl;
    enqueue(1);
    printQueue();
    cout<<"Current Size : "<<queueSisze()<<endl;
    cout<<"Delete Value : "<<dequeue()<<endl ;
    cout<<"Current Size : "<<queueSisze()<<endl;
    enqueue(1);
    printQueue();
    cout<<"Current Size : "<<queueSisze()<<endl;
    return 0 ;
}