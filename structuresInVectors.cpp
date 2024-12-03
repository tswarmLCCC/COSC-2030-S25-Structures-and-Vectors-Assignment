/*
This program defines a structure HighScore with two data members: name and
score. It also declares an empty vector scores of type HighScore.

In the main() function, the program creates two HighScore objects s1 and s2 and
assigns values to their data members. It then uses the push_back() function to
add the high scores to the scores vector.

Finally, the program uses a ranged loop to display the contents of the vector on
the console.

Inline comments are used to provide additional information about the code. In
this program, the comments explain what each line of code does. For example, the
comment // declare an empty vector of high scores explains that the scores
vector is empty and contains no elements.
*/

#include <iostream>
#include <vector> // include the vector header file
using namespace std;

struct HighScore {
  string name;
  int score;
};

int main() {
  vector<HighScore> scores;      // declare an empty vector of high scores
  HighScore s1 = {"John", 1000}; // create a high score structure
  HighScore s3;
  scores.push_back(s1); // add the high score to the vector

  HighScore s2 = {"Jane", 1500}; // create another high score structure
  scores.push_back(s2);          // add the high score to the vector

  s3.name = "Trevor";
  s3.score = 0;
  scores.push_back(s3);
  // display the contents of the vector using a ranged loop
  cout << "The high scores are:\n";
  for (const HighScore &s : scores) {
    cout << s.name << ": " << s.score << "\n";
  }

  return 0;
}