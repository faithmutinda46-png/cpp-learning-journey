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

# Sum of Numbers

This project asks the user to enter a number and then calculates the sum of all numbers from 1 up to that number.

## What I learned

- How to use a `for` loop to repeat a task.
- How to use `sum = 0` to give a variable a starting value.
- How to use `sum += i` to keep adding numbers to the total.
- How to use `i <= number` to control when the loop stops.
- How to put the calculation inside the loop and display the final answer after the loop.

## Challenges I encountered

- I initially set the `for` loop condition incorrectly, which would have made the loop continue forever.
- I didn't know that `sum` needed to start at `0`.
- I first tried to write `cout << sum += i`, which gave me an error.
- I learned that it is better to do the calculation first using `sum += i` and then use `cout` to display the final answer after the loop.

## What the program does

- Asks the user to enter a number.
- Uses a `for` loop to count from 1 up to that number.
- Adds each number to `sum`.
- Displays the final total.

# Factorial Calculator

This project asks the user to enter a number and calculates its factorial using a for loop.

## What I learned

- How to use a `for` loop to repeat multiplication.
- How to use `result = 1` as the starting value.
- How to use `result *= i` to keep multiplying the result.
- How the value of `i` changes each time the loop runs.
- How to use `if` and `else` to control the output.

## Challenges I encountered

- I first set `result` to `0`, which made the answer stay at 0.
- I initially used `number` instead of `i` when multiplying.
- I had to understand what `result *= i` means logically.
- I also worked on making the output clear by showing the numbers being multiplied and the final answer.

## What the program does

- Asks the user to enter a number.
- Uses a `for` loop to multiply the numbers from 1 up to the number entered.
- Stores the result in the `result` variable.
- Displays the factorial calculation and the final answer.

# Even & Odd Number Checker

This project asks the user to enter a number and checks whether the number is even or odd.

## What I learned

- How to use the modulus `%` operator to find the remainder after division.
- How to use `if` and `else` to handle two different outcomes.
- How to use `==` to compare values.
- How to check whether a number is divisible by 2.
- When a loop is not necessary for a problem.

## Challenges I encountered

- I initially thought I needed a `while` loop for this project.
- I created `even` and `odd` variables that were not actually needed.
- I had to understand how the `%` operator works.
- I learned that if a number divided by 2 has a remainder of 0, it is even; otherwise, it is odd.

## What the program does

- Asks the user to enter a number.
- Checks the remainder when the number is divided by 2.
- Displays whether the number is even or odd.
