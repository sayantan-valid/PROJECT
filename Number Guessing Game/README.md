# Number Guessing Game in C

## 📌 Project Description

The **Number Guessing Game** is an interactive, console-based game developed using the C programming language. The computer generates a random number between 1 and 100, and the player tries to guess it within a maximum of 10 valid attempts.

After each incorrect guess, the program provides a hint indicating whether the target number is higher or lower. It also keeps track of previously entered guesses so that repeating a guess does not use another attempt.

## 🎯 Features

- **Random Number Generation:** Generates a random target number between 1 and 100 for each game.
- **Limited Attempts:** Allows up to 10 valid guesses per game.
- **Higher/Lower Hints:** Indicates whether the target number is higher or lower than the player's guess.
- **Duplicate Guess Detection:** Detects previously entered guesses so they do not increase the attempt count again.
- **Range Validation:** Rejects guesses outside the range of 1–100.
- **Guess Range Tracking:** Updates the lower and upper boundaries based on the hints.
- **Play Again Option:** Lets the player start another round without restarting the program.
- **Console Interface:** Provides a simple text-based gaming experience.

## 🛠️ Technologies Used

- **Programming Language:** C
- **Libraries:**
  - `stdio.h` – Handles standard input and output.
  - `stdlib.h` – Provides random number generation and utility functions.
  - `conio.h` – Provides `getch()` for reading a key press.
  - `ctype.h` – Provides character conversion through `tolower()`.
  - `time.h` – Supplies the time value used to seed the random number generator.

## 🎮 How to Play

1. Compile and run the program.
2. The computer generates a random number between 1 and 100.
3. Enter a number when prompted.
4. Follow the hint displayed:
   - **Higher:** The target number is greater than your guess.
   - **Lower:** The target number is smaller than your guess.
5. Continue guessing until you find the number or the game ends.
6. When prompted, press:
   - `Y` – Play again.
   - `N` – Exit the game.

## ⚙️ Game Rules

- The target number is between 1 and 100.
- Each round allows a maximum of 10 valid, non-repeated guesses.
- A number outside the range 1–100 does not consume an attempt.
- A repeated guess does not consume an additional attempt.
- The round ends when the player guesses the target, reaches the attempt limit, or the tracked range becomes too narrow to continue.

## 💻 How to Compile and Run

The source file in this repository is named `Number Guessing Game.c`.

### Compile with GCC on Windows

```bash
gcc "Number Guessing Game.c" -o guessing_game.exe
```

### Run

```powershell
.\guessing_game.exe
```

**Note:** The program uses `conio.h` and `getch()`, which are non-standard C extensions. The code therefore requires a compiler environment that supports them. They are not available in every GCC installation or on every operating system.

## 📂 Project Structure

```text
Number-Guessing-Game/
│
├── Number Guessing Game.c
└── README.md
```

## 🚀 Future Improvements

- Add difficulty levels such as Easy, Medium, and Hard.
- Display a score based on the number of guesses used.
- Save game statistics and winning records.
- Add a graphical user interface.
- Improve input validation to handle non-numeric input safely.

## 👨‍💻 Author

**Sayantan Jana**

## 📜 License

This project is available for educational and learning purposes.
