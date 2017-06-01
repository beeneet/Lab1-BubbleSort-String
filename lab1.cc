// Simple Hello World and bubble sort
 
#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string[] , int ); 
int main()
{
  string usrInput = "";
  string name;
  int count = 0;
  cout << "Hello World!" << endl;
  cout << "New line I added." << endl;
  cout << "This program sorts the string" << endl;
  cout << "Please enter number of entries: ";
  cin >> count;
  string array[count];
  cout << "Please enter the names: " << endl;
  int i = 0;
  while (i<count){
      cin >> array[i];
      i++;
  }
  bubbleSort(array, count);
  return 0;
}

void bubbleSort(string array[], int len) {
  for (int i = 0; i < len; i++){
      for (int j = 0; j < len-i-1; j++){
          if (array[j] > array[j+1]) {
              string temp = array[j];
              array[j] = array[j+1];
              array[j+1] = temp;
          } 
      }
  }
  cout << "The sorted names are: ";
  for (int k = 0; k < len; k++){
      cout << array[k] << " ";
  }
  cout << endl;
} 