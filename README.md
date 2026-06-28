# ❌🅾️ Classic Tic-Tac-Toe 

Welcome to the **Classic Tic-Tac-Toe**, a lightweight, fast, and pure C implementation of the timeless 3x3 grid game. It is fully interactive, runs straight in your terminal, and utilizes structured programming paradigms to deliver a smooth 2-player gaming experience.

---

## ✨ Features

* **🎮 Local 2-Player Match:** Play head-to-head with a friend locally on the same terminal.
* **🗺️ Clean ASCII Grid:** Dynamic real-time rendering of the 3x3 game board after every single move.
* **🛡️ Input Validation:** Built-in protection against invalid coordinates or attempts to overwrite an already occupied cell.
* **🔄 Play Again System:** Seamless loop allowing you to instantly start a new match without restarting the executable.

---

## 🚀 Getting Started

### Prerequisites
You only need a standard C compiler installed (such as `gcc`).
---

## 🕹️ Game Rules & How To Play

The game follows the traditional Tic-Tac-Toe rules using a standard matrix coordinate system. 

### 1. Matrix Coordinate System
To make a move, enter the **Row** and **Column** numbers (from `0` to `2`) separated by a space. For example, entering `1 1` places your mark exactly in the center.

| Row / Column | Column 0 | Column 1 | Column 2 |
| :---: | :---: | :---: | :---: |
| **Row 0** | `0 0` | `0 1` | `0 2` |
| **Row 1** | `1 0` | `1 1` | `1 2` |
| **Row 2** | `2 0` | `2 1` | `2 2` |

### 2. Gameplay Loop
* **Turn Rotation:** Player `X` always takes the first turn, and the game automatically switches to Player `O` after a valid move.
* **Input Validation:** If you select an occupied cell or enter numbers outside the `0-2` range, an error message will pop up, and you will safely retry your turn.

> 🏆 **Winning Condition:** The game instantly scans all rows, columns, and diagonals after every turn. The first player to align 3 identical symbols wins the match!

> 🤝 **Draw Condition:** If all 9 cells are completely filled and no player has achieved a sequence of 3, the game declares a draw.

---

## 🛠️ Code Architecture Overview

Here is a clean breakdown of how the game's logic and data structures are organized under the hood:

### 📦 Data Structures
* `struct board` — Houses the 3x3 character matrix that tracks the real-time state of the grid.
* `struct player` — Stores individual player configurations (assigning the `x` or `o` symbols).
* `struct game` — The master controller that binds the board, players, and current active turn together.

### ⚙️ Core Functions
* `initboard()` — Resets the grid by filling all 9 matrix cells with clean empty spaces.
* `print_board()` — Handles the visual rendering of the grid with custom ASCII layout dividers (`|` and `---`).
* `check_win()` — Runs swift conditional checks across rows, columns, and diagonals to detect a winner.
* `check_draw()` — Monitors empty spaces and triggers a tie-state when no valid moves remain.

---

## 🤝 Contributing & Support

Want to add new features or level up the project? Contributions are highly appreciated!

* 🐛 Open an **Issue** if you spot a bug or a validation crash.
* 💡 Fork the repository and submit a **Pull Request** to add features like an AI Bot (Minimax Algorithm) or score tracking!

---

### *Have a nice time and enjoy the game!* 🎮
