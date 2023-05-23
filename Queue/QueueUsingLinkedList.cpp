#include<bits/stdc++.h>
using namespace std ;
class Node
{
   
   public :
   int data ;
   Node *next ;

   Node(int value)
   {
      this->data=value;
      this->next=NULL ;
   }
};


Node *head =NULL;

class Queue
{
   
  
   public :
   void enqueue(int value)
   {
      if(head==NULL)
      {
          Node *newNode = new Node(value);
          head=newNode;
      }
      else
      {
         Node *newNode = new Node(value);
         Node *ptr=head;
         while( ptr->next != NULL)
         {
              ptr=ptr->next;
         }
         ptr->next=newNode;
      }
      
   }

   int  dequeue()
   {
      int rtn = head->data ;
      head=head->next;
      return rtn ;
   }
   int front()
   {
       return head->data ;
   }

   void display()
   {
       Node *traverse = head;
       while(traverse != NULL)
       {
            cout<<traverse->data<<"-> ";
            traverse=traverse->next;
            
       }
       cout<<endl ;
   }

   int queueSize()
   {
       int cnt =0;
       Node *traverse = head;
       while(traverse != NULL)
       {
            cnt++;
            traverse=traverse->next;
            
       }
       return cnt ;
   }
};

int main()
{
    freopen("input.txt", "r" ,stdin);
    freopen("output.txt","w",stdout);
    Queue obj ;
    obj.enqueue(1);
    obj.enqueue(10);
    obj.enqueue(3);
    obj.enqueue(4);
    obj.enqueue(6);
    obj.enqueue(9);
    obj.display();
    cout<<"Current Size of Queue : "<<obj.queueSize()<<endl;
    cout<<"After calling dequeue functinon : "<<obj.dequeue()<<endl;
    cout<<"Current Size of Queue : "<<obj.queueSize()<<endl;
    obj.display();
    cout<<"Front value : "<<obj.front()<<endl ;
    cout<<"Current Size of Queue : "<<obj.queueSize()<<endl;

    return 0 ;
}