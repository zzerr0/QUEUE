#include<iostream>
using namespace std;
class node
{public:
  int data;
  node *next;
};

class q
{
 node *front;
 node *rear;
public: 
 q() 
 {
  front=NULL;
  rear=NULL;
 }
 
 void insert(int);
 void display();
};

void q::insert(int d)
{
  node *newnode=new node();
  newnode->data=d;
  if(front==NULL)
  {
    front=newnode;
    rear=newnode;
    rear->next=NULL;
  }
  else
  {
    rear->next=newnode;
    rear=newnode;
    newnode->next=NULL;
  }
}

void q::display()
{
  node *iter= new node();
  iter=front;
  cout<<"Front-";
  while(iter!=NULL)
  {
    cout<<iter->data<<"-";
    iter=iter->next;
  }
  cout<<"Rear"<<endl;
}

int main()
{
  q obj;
  obj.insert(1);
  obj.insert(2);
  obj.insert(3);
  obj.insert(4);
  obj.insert(5);
  obj.display();
  return 0;
}
