# Quiz-Game
Quiz Game - Kahoot-Style MCQ Application
This is a simple C++ console-based quiz game inspired by Kahoot. It features multiple-choice questions (MCQs) with instant feedback and a final score display. The quiz dynamically selects questions from a pre-defined question bank.

Features
Player Registration: Players register with a name and unique ID.
Dynamic Question Selection: 5 random questions are displayed from a pool of 10.
Multiple-Choice Questions: Each question has four options, and the player selects the correct answer.
Instant Feedback: Immediate feedback for correct/incorrect answers.
Final Score: Displays the player's total score out of 5 at the end of the game.
How It Works
The player is prompted to register by entering their name and unique ID.
The game selects 5 random questions from a bank of 10 questions.
The player answers each question by entering the corresponding option (A, B, C, or D).
After each question:
If the answer is correct, the player is informed and awarded a point.
If the answer is incorrect, the correct answer is displayed.
At the end of the game, the final score is shown.
Question Bank
The question bank contains 10 predefined questions on various topics, such as:

General Knowledge
Science
Geography
Programming
The questions and answers are stored in the code, and 5 questions are randomly selected for each game.

Requirements
C++ Compiler: Ensure you have a working C++ compiler (e.g., GCC or MSVC).
Console Input/Output: The game is run in a console or terminal window.
How to Run
Clone the repository or download the source code.
Compile the program:
bash
Copy code
g++ -o QuizGame QuizGame.cpp
Run the executable:
bash
Copy code
./QuizGame
Follow the instructions in the console to register and play the quiz.
Example
Console Output:
mathematica
Copy code
Welcome to the Quiz Game!
Enter your name: John Doe
Enter your unique ID (e.g., email or username): john123
Welcome, John Doe!

Question 1: What is the capital of France?
A) Paris
B) London
C) Rome
D) Berlin
Enter your answer (A/B/C/D): A
Correct!

Question 2: What does HTTP stand for?
A) Hypertext Transfer Protocol
B) Hypertext Markup Language
C) Hypertext Transfer Manager
D) Hypertext Markup
Enter your answer (A/B/C/D): B
Wrong! The correct answer was A.

...
Quiz Completed!
Your final score is: 4 out of 5
Thank you for playing, John Doe!
Future Enhancements
Add support for multiple players in a single game session.
Implement a leaderboard to track top scores.
Allow players to add their own questions to the question bank.
Enhance the user interface with better formatting.
License
This project is open-source and free to use for learning and development.

