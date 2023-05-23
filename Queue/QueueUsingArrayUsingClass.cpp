#include<iostream>
using namespace std ;
const int MAX_SIZE = 10;




class Queue
{
    
    private : 

    int queue[MAX_SIZE]; 
    int front,rear ;


    public :

    Queue()
    {
       front =-1;
       rear =-1;
    }

    bool isQueueFull()
{
    
    if((rear-front)+1==MAX_SIZE|| front>rear)return true ;
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

};


int main()
{
    freopen("input.txt", "r" ,stdin);
    freopen("output.txt","w",stdout);

    Queue obj ;

    for(int i=1 ;i<=10 ;i++)
    {
        int val ;cin>>val ;
        obj.enqueue(val);
    }
    obj.printQueue();
    cout<<"Current Size : "<<obj.queueSisze()<<endl;
    obj.enqueue(1);
    obj.printQueue();
    cout<<"Current Size : "<<obj.queueSisze()<<endl;
    cout<<"Delete Value : "<<obj.dequeue()<<endl ;
    cout<<"Current Size : "<<obj.queueSisze()<<endl;
    obj.enqueue(1);
    obj.printQueue();
    cout<<"Current Size : "<<obj.queueSisze()<<endl;
    return 0 ;
}