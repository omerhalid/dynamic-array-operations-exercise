#include <iostream>
#include <string>
#include <vector>
#include<math.h>

using namespace std;

int* create_array(int* size) {

  int* arr = new int[*size];

  return arr;

}

int* initilalize_arr(int* value, int* size) {

  int* array = create_array(size);

  for (int i = 0; i < *size; ++i) {
    array[i] = *value;
  }

  return array;

}

void display(int* arr, int* size) {

  for (int i = 0; i < *size; i++) {
    cout << arr[i] << endl;
  }

}

int main() {

  int size{};
  int value{};

  cout << "What is the size? ";
  cin >> size;

  cout << "What value should be the array? ";
  cin >> value;

  int* array{ nullptr };

  array = initilalize_arr(&value, &size);
  display(array, &size);

  delete[] array;

  return 0;

}
