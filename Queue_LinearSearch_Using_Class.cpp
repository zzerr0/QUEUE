#include<iostream>
#define N 10
using namespace std;

class q
{
  public :
    int qu[N];
    int rear;
    int front;
  q()
  {
    rear=-1;
    front=-1;
  }
  void insert(int);
  void display();  
  void search(int);
};

void q::insert(int d)
{
  if(rear==10-1)
  {
    cout<<"Queue is Full"<<endl;
  }
  else 
  front=0;
  rear++;
  qu[rear]=d;
}

void q::display()
{
  if(rear==front)
  {
    cout<<"Queue is Empty "<<endl;
  }
  else
  for(int i=front;i<=rear;i++)
  {
    cout<<qu[i]<<"-";
  }
  cout<<"END"<<endl;
}
void q::search(int value)
{
  for(int i=front;i<=rear;i++)
  {
   if(qu[i]==value)
   {
     cout<<value<<" found at index "<<i<<endl;
   } 
  }
}
int main()
{
  q obj;
 
  obj.insert(5);
  obj.insert(6);
  obj.insert(7);  
  obj.insert(8);
  obj.insert(9);
  cout<<"Front-";
  obj.display();
  cout<<endl;
  obj.search(9);
  cout<<endl;
  return 0;
}
