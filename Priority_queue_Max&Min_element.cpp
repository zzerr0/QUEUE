

//priority queue as maxheap or minheap


#include <iostream>
#include <queue>
using namespace std;
int main()
{
  int arr[6] = { 1, 2, 3, 4, 5, 6 };
  
  priority_queue <int> maxel;
  for( int i = 0; i<6; i++ ){
    maxel.push(arr[i]);
  }
  
  while( !maxel.empty()){
    cout<<maxel.top()<<" ";
    maxel.pop();
  }
  
  
  //Smallest element at front
  
  priority_queue < int, vector <int>, greater<int> > minel;
  
  cout<<endl;
  for( int i = 0; i<6; i++ ){
    minel.push(arr[i]);
  }
  
  while( !minel.empty()){
    cout<<minel.top()<<" ";
    minel.pop();
  }
}
