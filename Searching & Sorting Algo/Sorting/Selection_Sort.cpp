// Selection Sort
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
  int n,i,imin;
  cout<<"Enter capacity: ";
  cin>>n;
  int a[n];
  cout<<"Enter numbers -"<<endl;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  //Sorting
  for(int i=0;i<n-1;i++){
    imin = i;
    for(int j=i+1;j<n;j++){
      if(a[j]<a[imin]){
        int test =a[imin];
        a[imin] = a[j];
        a[j] = test;
      }
    }
  }

  cout<<"\nSorted Array - "<<endl;
  for(i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
