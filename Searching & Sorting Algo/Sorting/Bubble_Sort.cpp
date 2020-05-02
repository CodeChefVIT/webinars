#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {

  // run loops two times: one for walking throught the array
  // and the other for comparison
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {

      // To sort in descending order, change > to < in this line.
      if (array[i] > array[i + 1]) {

        // swap if greater is at the rear position
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

int main() {
  int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++){
      cin>>arr[i];
  }
  bubbleSort(arr, size);
  
  cout << "Sorted array:"<<endl;
  for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
}
 return 0;
}