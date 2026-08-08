Loops

In this topic, I learned how to use loops to repeat a block of code without writing it multiple times.

Concepts Learned
- `for` loop
- Loop variable
- Initialization
- Condition
- Increment (`i++`)

 Projects

1. Number Counter
A program that prints numbers from 1 to 10 using a `for` loop.

 What I Learned
- How to write a `for` loop.
- How the loop starts, checks the condition, and repeats.
- How `i++` increases the value after each loop.
- How to print numbers from 1 to 10 using a loop.

2. Multiplication Table

A program that prints the multiplication table of any number entered by the user.

**Concepts used**
- `for` loop
- Variables
- `cin` and `cout`
- Multiplication operator (`*`)

**What I learned**
- How to use a `for` loop with user input.
- How to repeat the same calculation using a loop.
- How to display a multiplication table neatly.

### 3. PIN Login

A program that keeps asking the user to enter the correct PIN before giving access.

**Concepts used**
- `while` loop
- `if...else`
- Variables
- `cin` and `cout`
- Comparison operators (`==` and `!=`)

**What I learned**
- How to use a `while` loop to repeat a program until a condition is met.
- How to combine a `while` loop with an `if...else` statement.
- How to use `!=` to check if two values are not equal.


  overall this was a whole new experience combining the two concepts.
  
### Project Upgrade
- Added a limit of 3 PIN attempts.
- Displayed the remaining attempts after each wrong PIN.
- Locked the account after 3 wrong attempts.
- ensured that the user doesnt get a try again message after the attempts are over,it only prints "Account locked!"

# Number Guessing Game

This project is a simple number guessing game. The program has a secret number and the user keeps guessing until they get the correct number.

## What I learned

- How to use a `while` loop to keep repeating until a condition becomes false.
- How to use `if` and `else if` to check different conditions.
- How to use `||` which means OR.
- How to use `!=` to check if two values are not equal.
- How to check if a number is within a certain range.
- How to give a variable a starting value before using it in a condition.
- How to combine loops and conditions in one program.

## Challenges I encountered

- I first got stuck in an endless loop because I was not asking the user for another number inside the loop.
- I had trouble understanding where to place the `if` and `else if` conditions.
- I initially made the program show "Wrong guess" even when the correct number was entered.
- I learned that the `else` condition can run when a number is valid even if it is not the correct number, so I needed to separate the different conditions properly.
- I also learned why variables should be given a starting value before using them in a condition.

## What the program does

- Asks the user to guess a number between 1 and 100.
- Checks if the number is outside the allowed range.
- Tells the user when the guess is wrong.
- Keeps asking for another guess using a `while` loop.
- Stops when the correct number is entered.
- Displays a congratulations message when the user gets the correct number.
