#include<iostream>
#include<queue>
using namespace std;

void show(queue<int> q)
{
  //Working On Copy Of Original Queue For Further
  //Operations 
  queue<int> qu = q;
  cout<<"Front-";
  while(!qu.empty())
  { 
    cout<<qu.front()<<"-";
    qu.pop();  
  }
  cout<<"-End"<<endl;
}
//For Searching
void search(queue<int> q, int d)
{
 queue<int> qu=q;
 int count =0;
 //Performing Linear Search On Copy Of Original Queue
 while(!qu.empty())
 {
   count++;
   if(qu.front()==d)
   {
     cout<<qu.front()<<" is found at location "<<count;
   }
   qu.pop();
 }
}

int main()
{ 
  queue<int> q;
  //Pushing Data Into The Queue
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
 //shows the element of queue
  show(q);
 //performs linear search
  search(q, 4);
  
  return 0;
}
