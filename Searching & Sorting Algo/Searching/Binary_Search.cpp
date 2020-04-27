#include<iostream>
#include<stdlib.h>
using namespace std;
//Binary Search
int main(){
  int high,low,mid,n,inp;

  cout<<"\n\nBinary Search\n"<<endl;
  cout<<"Capacity of array: "<<endl;
  cin>>n;
  int a[n];
// ...
  cout<<"-- NOTE: Enter numbers in ascending order --"<<endl;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  low = 0;
  high = n-1;
  mid = (low + high)/2;

// ...
  for(int i=0;i<n;i++){
    if(a[i]>a[i+1]){
      cout<<"-- Binary Search Not Advisable --";
      break;
    }
    else{
      cout<<"Enter number to be searched: "<<endl;
      cin>>inp;
      if(inp == a[mid]){
        cout<<"Number found at pos: "<<mid+1<<endl;
        break;
      }
      else if(inp !=a[mid]){
        cout<<"Not Found in array"<<endl;
        break;
      }
      else{
        if(inp<a[mid]){
          high = mid-1;
        }
        else{
          low = mid+1;
        }
      }
    }
  }
  return 0;
}
