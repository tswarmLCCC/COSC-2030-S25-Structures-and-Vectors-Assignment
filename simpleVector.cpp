#include <iostream>
#include <vector> // include the vector header file
using namespace std;

int main() {
  vector<int> num;  // declare an empty vector of integers
  num.push_back(1); // add the integer 1 to the vector
  num.push_back(2); // add the integer 2 to the vector
  num.push_back(3); // add the integer 3 to the vector

  // display the contents of the vector using a ranged loop
  cout << "The contents of the vector are: ";
  for (const int &i : num) {
    cout << i << " ";
  }

  return 0;
}