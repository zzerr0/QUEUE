// Program For Implementing Queue Using Array Data Structure
#include<iostream>
using namespace std;
#define N 10 // to define the size of the queue

class Queue
{
  public :
  int queue[N]; //declaring a queue with size 10
  int rear, front ; 


  Queue() //constructor to define the rear and front
  {
    rear = front = -1;
  }
  
  void enq(int);
  void peek();
  void deq();
  
};

void Queue :: enq (int userData)
{
  if(rear == N-1)
  {
    cout<<"Queue is Full entry cannot be done "<<endl; 
  }
  else
  {
  if(front == -1)
   front = 0;
  
  rear++;
  queue[rear] = userData;
  }
  
}

void Queue :: peek()
{
  if(rear == -1)
  {
   cout<<"Queue is Empty "<<endl;
  }
  else
  {
  cout<<"Front->";
  for(int i= front; i<=rear; i++)
  cout<<queue[i]<<"->";
  cout<<"END";
  }
}

void Queue :: deq()
{
   if(rear == -1)
  {
   cout<<"Queue is Empty "<<endl;
  }
  else
  {
    cout<<"\nThe popped element is "<<queue[rear]<<endl;
    rear--;
  }
}

int main()
{
  Queue queueobj;  
  cout<<"Queue Program "<<endl;
  cout<<"How many elements do you want to enter "<<endl;
  int n;
  cin>>n;
  int userData ;
    
  
  for(int i=0;i<n;i++)
  {
   cin>>userData;
   queueobj.enq(userData);
  }
  cout<<"Queue before Dequeue "<<endl;
  queueobj.peek();
  queueobj.deq();
  cout<<"Queue after Dequeue "<<endl;
  queueobj.peek();
}
