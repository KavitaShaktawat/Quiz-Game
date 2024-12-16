//quiz game-kahoot
//mcq
//correct - instant result/final result
//at least 5 question to be display
//question bank should have atleast 10 question
//correct questions
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

struct Question {
    string questionText;
    string options[4];
    char correctOption; // Store the correct answer as 'A', 'B', 'C', or 'D'
};

struct Player {
    string name;
    string uniqueID;
};

vector<Question> questionBank = {
    {"What is the capital of France?", {"Paris", "London", "Rome", "Berlin"}, 'A'},
    {"What does HTTP stand for?", {"Hypertext Transfer Protocol", "Hypertext Markup Language", "Hypertext Transfer Manager", "Hypertext Markup"}, 'A'},
    {"Who is the current Prime Minister of Canada?", {"John Trudeau", "Michael Bloomberg", "Justin Trudeau", "Michael Boudreaux"}, 'C'},
    {"Which planet is closest to the Sun?", {"Mercury", "Venus", "Earth", "Mars"}, 'A'},
    {"What is the name of the largest ocean in the world?", {"Pacific Ocean", "Atlantic Ocean", "Indian Ocean", "Arctic Ocean"}, 'A'},
    {"Who is the first woman to climb Mount Everest?", {"Junko Tabei", "Mary Elizabeth Thompson", "Charles Darwin", "Hans Christian Andersen"}, 'A'},
    {"What is the tallest mountain in the world?", {"Mount Everest", "K2", "Kilimanjaro", "Makalu"}, 'A'},
    {"Which of the following is not a prime number?", {"2", "3", "5", "4"}, 'D'},
    {"Which programming language is primarily used for Android app development?", {"Java", "C++", "Python", "Swift"}, 'A'},
    {"Which country is known as the Land of the Rising Sun?", {"China", "Japan", "South Korea", "India"}, 'B'}
};

int score = 0;
vector<int> selectedQuestions;
Player currentPlayer;

void registerPlayer() {
    cout << "Enter your name: ";
    getline(cin, currentPlayer.name);
    cout << "Enter your unique ID (e.g., email or username): ";
    getline(cin, currentPlayer.uniqueID);
    cout << "Welcome, " << currentPlayer.name << "!\n\n";
}

void displayQuestion(const Question& q, int questionNumber) {
    cout << "Question " << questionNumber << ": " << q.questionText << endl;
    for (int i = 0; i < 4; i++) {
        cout << static_cast<char>('A' + i) << ") " << q.options[i] << endl;
    }
    cout << "Enter your answer (A/B/C/D): ";
}

void startQuiz() {
    srand(time(0)); // Seed for randomness
    while (selectedQuestions.size() < 5) {
        int randomIndex = rand() % questionBank.size();
        if (find(selectedQuestions.begin(), selectedQuestions.end(), randomIndex) == selectedQuestions.end()) {
            selectedQuestions.push_back(randomIndex);
        }
    }

    for (size_t i = 0; i < selectedQuestions.size(); i++) {
        int questionIndex = selectedQuestions[i];
        char userAnswer;

        displayQuestion(questionBank[questionIndex], i + 1);
        cin >> userAnswer;
        userAnswer = toupper(userAnswer); // Convert to uppercase to handle lowercase input

        if (userAnswer == questionBank[questionIndex].correctOption) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong! The correct answer was " << questionBank[questionIndex].correctOption << ".\n";
        }
        cout << endl;
    }

    cout << "Quiz Completed!\n";
    cout << "Your final score is: " << score << " out of 5\n";
}

int main() {
    cout << "Welcome to the Quiz Game!\n";
    registerPlayer();
    startQuiz();
    cout << "Thank you for playing, " << currentPlayer.name << "!\n";
    return 0;
}
