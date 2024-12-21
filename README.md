# **Tic Tac Toe with AI Opponent (Minimax Algorithm)**

**Description**  
This is a simple command-line Tic Tac Toe game where you can play against an AI opponent. The AI uses the Minimax algorithm to make optimal moves. The game is played on a 3x3 grid where players alternate placing “X” and “O” on the grid. The game declares a winner when one player aligns three of their marks horizontally, vertically, or diagonally, or ends in a tie if the grid is full without a winner.

---

## **Table of Contents**

1. [Features](#features)  
2. [How to Play](#how-to-play)  
3. [Installation](#installation)  
4. [Explanation](#explanation)  
5. [Technologies Used](#technologies-used)  
6. [License](#license)  

---

## **Features**

- **AI Opponent**: The AI uses the Minimax algorithm to make strategic moves.  
- **Interactive Board**: A 3x3 grid where players place their marks.  
- **Game Outcomes**: The game ends with either a win, loss, or tie.  
- **Clear Display**: Clears the console after every move for a seamless experience.

---

## **How to Play**

1. The board is displayed with numbers (1-9) indicating available positions.  
2. The player plays first as “X”.  
3. Input the number corresponding to the position where you want to place your mark.  
4. The AI plays as “O” and makes its move automatically after yours.  
5. The game continues until there is a winner or the game ends in a tie.  

---

## **Installation**

Follow these steps to run the game locally:

1. Clone the repository:
   ```bash
   git clone <repo-url>
   cd TicTacToe
   ```

2. Compile the program:
   ```bash
   g++ -o tictactoe tictactoe.cpp
   ```

3. Run the program:
   ```bash
   ./tictactoe
   ```

---

## **Explanation**

- **Display Board**: Displays the current state of the Tic Tac Toe board with a clean grid format.  
- **Win Check**: Determines if a player has won by checking all rows, columns, and diagonals.  
- **Tie Check**: Checks if the board is full without a winner.  
- **Minimax Algorithm**:  
  - A recursive function that evaluates all possible game states and assigns scores:  
    1. Positive score for an AI win.  
    2. Negative score for a player win.  
    3. Zero for a tie.  
  - The AI moves to maximize its chances of winning while minimizing the player's chances.  
- **AI Move**: Uses the minimax function to determine and execute the best possible move.  
- **Game Flow**: Alternates turns between the player and the AI, updates the board, and checks for the game outcome after each move.  
- **Clear Screen**: Clears the console screen after every move for a better user experience.  

---

## **Technologies Used**

- **Language**: C++  

---

## **License**

This project is licensed under the MIT License.  

---
