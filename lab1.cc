// Simple Hello World
 
#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string[] , int ); 
int main()
{

  cout << "Hello World!" << endl;
  cout << "New line I added." << endl;
  string array[5] = {"Music", "Maps", "Store", "Chrome", "Games"};
  bubbleSort(array, sizeof(array)/sizeof(array[0]));
  return 0;
}

void bubbleSort(string array[], int len) {
  
  for (int i = 0; i < len; i++){
      for (int j = 0; j < len-1; j++){
          if (array[j] > array[j+1]) {
              string temp = array[j];
              array[j] = array[j+1];
              array[j+1] = temp;
          } 
      }
  }
  
  for (int k = 0; k < len; k++){
      cout << array[k] << " ";
  }
  
} 