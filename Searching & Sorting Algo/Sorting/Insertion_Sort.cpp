//Insertion Sort
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
  int n,i,j,key;
  cout<<"Enter capacity: ";
  cin>>n;
  int a[n];
  cout<<"Enter numbers -"<<endl;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  // Sorting
  for(j=1;j<n;j++){
    key = a[j];
    i=j-1;

    while(i>=0 && a[i]>key){
      a[i+1] = a[i];
      j = i - 1;
      a[j+1] = key;
    }
  }
  cout<<"\nSorted array:"<<endl;
  for(i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
