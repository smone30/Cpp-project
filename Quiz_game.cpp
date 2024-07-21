#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Question {
 string question;
 string answer;
};

int main() 
{
      vector<Question> questions = {
  {"What is the capital of France?", "Paris"},
  {"What is 30*30?", "900"},
  {"Who is the Winner of ICC Men T20 World Cup 2024?", "India"},
 };

 int score = 0;

 for (const auto& question : questions) {
  cout << question.question << endl;
  string userAnswer;
  cin >> userAnswer;

  if (userAnswer == question.answer) {
   cout << "Correct!" << endl;
   score++;
  } else {
   cout << "Incorrect. The correct answer is " << question.answer << endl;
  }
 }

 cout << "Your final score is " << score << "/" << questions.size() << endl;

return 0;
}