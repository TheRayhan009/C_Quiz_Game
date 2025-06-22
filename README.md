# 🎮 C Quiz Game

A console-based quiz game in C that reads questions from a text file (`q.txt`) and quizzes the user with random questions. Each question block is stored in 7 lines:

Question text...
Option1
Option2
Option3
Option4
CorrectAnswerNumber

---

## 📋 How It Works

1. Reads all lines from `q.txt`.
2. Picks a random question number `r`.
3. Scans through lines to find the block starting with the line `"r"`.
4. Collects the next 6 lines (question, 4 options, correct answer).
5. Parses and displays the block, prompts the user, and updates score.

---

