# **Tic Tac Toe with AI opponent (Minimax Algorithm)**

**Description**  
This is a simple command-line Tic Tac Toe game where you can play against an AI opponent. The AI uses the Minimax algorithm to make the best possible moves. The game is played on a 3x3 grid where players alternate placing “X” and “O” on the grid. The game will declare a winner when one player aligns three of their marks horizontally, vertically, or diagonally, or declare a tie if the grid is full and no player has won.

---

## Table of Contents

1. [Features](#features)
2. [How to Play](#how-to-play)
3. [Installation](#installation)
4. [Explanation](#explanation) 
5. [Technologies Used](#technologies-used)   

---

## **Features**

- **AI Opponent:** The AI uses the Minimax algorithm to decide its moves.
- **Tic Tac Toe Board:** A 3x3 grid where players place their marks.
- **Game Outcome:** The game ends when either the player or AI wins, or when the game results in a tie.
- **Clear Screen:** The screen is cleared after each move for a better user experience.
  
---

## **How to Play**
	1.	When the game starts, the board will be displayed with numbers from 1 to 9.
	2.	The player plays first, and they are “X”.
	3.	To make a move, input the number corresponding to the position you want to place your “X”.
	4.	The AI plays as “O” and will make its move automatically after your turn.
	5.	The game will continue until there is a winner or a tie.
 
---

## Installation

Follow these steps to set up the project locally:

1. Clone the repository:
   ```bash
   git clone <repo-url>
   cd TicTacToe
   ```

2. Build The Program:
   ```bash
   g++ -o tictactoe tictactoe.cpp
   ```

3. Run the Program:
   ```bash
   ./tictactoe
   ```
   
---

## **Explanation**
- **1. Display Board** : The displayBoard function prints the current state of the Tic Tac Toe board. It shows the grid in a readable format with a border around it.
- **2. Win Check** : The checkWin function checks if a player has won the game. It checks all rows, columns, and diagonals for a winning condition.
- **3. Tie Check** : The checkTie function checks if the game has ended in a tie. This happens when all spots on the board are filled, but no player has won.
- **4. Minimax Algorithm** : The minimax function is a recursive function that evaluates the best possible move for the AI. It simulates all possible game states and assigns a score to each state based on the potential outcome:
  - 1. A positive score for a win by the AI.
	- 2. A negative score for a win by the player.
	- 3. A score of 0 for a tie.
	- 4. The algorithm always aims to maximize the AI’s chances of winning and minimize the player’s chances.
- **5. AI Move** : The findBestMove function uses the minimax function to determine the best possible move for the AI. It evaluates all empty positions on the board and returns the one with the highest score.
- **6. Game Flow** : The playGame function controls the main game loop. It handles the alternating turns between the player and the AI, checks for a winner or tie, and displays the board after each move.
- **7. Clear Screen** : The clearScreen function clears the terminal screen for a cleaner user experience. It works on both Windows and Unix-based systems (Linux/MacOS).

---

## Technologies Used

- **Language** : C++

---

## License

This project is licensed under the MIT License.

---
