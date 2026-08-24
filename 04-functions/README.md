1. Say Hello

This project is my first introduction to functions in C++. It uses a simple function to display a greeting.

## What I learned

- How to create a function.
- How to give a function a name.
- How to call a function from `main()`.
- How the code inside a function runs when the function is called.
- The difference between defining a function and calling a function.

## Challenges I encountered

- Understanding that creating a function does not automatically run it.
- Learning that the function needs to be called from `main()` for its code to execute.
- Understanding the basic structure of a function.

## What the program does

- Defines a function called `sayHello`.
- The function displays a greeting.
- Calls the function from `main()`.

2. Introduce Person

This project builds on the basics of functions by creating a function that accepts a person's name and age and uses them to display a greeting.

## What I learned

- How to pass information into a function using parameters.
- The difference between parameters and arguments.
- How to use multiple parameters in one function.
- How to use different data types as parameters.
- How arguments are passed to parameters when calling a function.
- How to make one function reusable with different values.

## Challenges I encountered

- Understanding the difference between a parameter and an argument.
- Understanding where the information should be placed when calling a function.
- Learning how to use more than one parameter in a function.
- Understanding that the order of the arguments must match the order of the parameters.

## What the program does

- Defines a function called `introduce`.
- Accepts a person's name and age as parameters.
- Displays a personalized greeting using the information provided.
- Calls the function with the name "Faith" and age 25.


3.Addition Function

This project introduces return values by creating a function that accepts two integers, adds them together, and returns the result.

## What I learned

- How to create a function that returns a value.
- The difference between `void` and a function with a return type such as `int`.
- How to use the `return` statement.
- How to pass arguments to a function.
- How to call the same function multiple times with different values.
- How the returned value can be displayed using `cout`.

## Challenges I encountered

- Understanding why `int` appears before the function name and also before the parameters.
- Understanding the difference between a function that displays a result using `cout` and one that returns a result.
- Understanding how `return` sends a value back to the part of the program that called the function.
- Learning how to call the same function with different arguments.

## What the program does

- Defines an `add` function that accepts two integers.
- Adds the two numbers together.
- Returns the sum.
- Calls the function with different numbers.
- Displays the returned results.


4. Addition with User Input

This project builds on the previous addition function by allowing the user to enter two numbers and passing those numbers to a function to calculate their sum.

## What I learned

- How to combine user input with functions.
- How to pass variables as arguments to a function.
- How parameters receive the values passed to them.
- How a function can return a calculated value.
- How to use the returned value directly inside `cout`.

## Challenges I encountered

- I initially placed the `cout` and `cin` statements outside `main()`.
- I initially tried to output the function itself instead of calling it.
- I had to understand how to pass the user-entered variables into the function.
- I learned how the returned value from the function can be displayed directly.

## What the program does

- Asks the user to enter two numbers.
- Stores the numbers in variables.
- Passes the numbers to the `add` function.
- Calculates and returns their sum.
- Displays the sum to the user.


5.subtraction function
This project builds on the addition function by using the same structure to subtract two numbers. It also uses user input and a function that returns the calculated result.

## What I learned

- How to create a function that performs subtraction.
- How to pass user input as arguments to a function.
- How to return the result from a function.
- How to reuse logic from a previous project and adapt it to a new problem.
- How recognizing patterns can make similar programming problems easier.

## Challenges I encountered

- This project was a bit easy because I built it on the same logic I had already learned from the addition function.
- I mainly needed to change the operation from addition to subtraction.
- I practiced applying what I had already learned without starting from scratch.

## What the program does

- Asks the user to enter two numbers.
- Passes the numbers to the `subtract` function.
- Subtracts the second number from the first number.
- Returns the result.
- Displays the result to the user.

6. Calculator Functions

This project combines the function concepts I have learned so far to create a simple calculator that performs addition, subtraction, multiplication, and division.

## What I learned

- How to create and use multiple functions in one program.
- How to pass user input as arguments to functions.
- How to use return values from different functions.
- How to use conditional statements to determine which function should be called.
- How to use logical operators such as `&&`.
- How to use a `while` loop to validate user input.
- How to handle division by zero.

## Challenges I encountered

- I initially tried to compare the user's choice directly with the function names instead of the numbers assigned to the menu options.
- I had to understand how to use `if` and `else if` to call the correct function based on the user's choice.
- I learned how to use a `while` loop to keep asking for input until the user enters a valid menu option.
- I had to separate a valid division from division by zero so the program could give the user the correct message.
- I also discovered that using `int` for division does not display decimal results.

## What the program does

- Asks the user to enter two numbers.
- Displays a menu with four operations.
- Allows the user to choose an operation.
- Repeats the menu choice if an invalid option is entered.
- Calls the appropriate function based on the user's choice.
- Prevents division by zero.
- Displays the calculated result.

7. Find Maximum

This project builds on the function concepts I have learned so far by creating a function that compares three numbers and returns the largest one.

## What I learned

- How to create a function with three parameters.
- How to compare multiple values using conditional statements.
- How to use the `&&` logical operator to check multiple conditions at the same time.
- How to return different values from a function depending on the result of a condition.
- How to pass three user-input values to a function.
- How to use the value returned by a function in `main()`.

## Challenges I encountered

- I initially tried to compare the numbers directly inside `main()` instead of putting the comparison logic inside the function.
- I initially misunderstood how to use `&&` when comparing one number against the other two.
- I learned that each side of `&&` needs to be a complete condition.
- I had to think about how `if`, `else if`, and `else` work when comparing three different numbers.

## What the program does

- Asks the user to enter three numbers.
- Passes the three numbers to the `findMaximum` function.
- Compares the three numbers.
- Returns the largest number.
- Displays the largest number to the user.

8. Even or Odd Function

This project builds on the previous even or odd program by moving the even and odd checking logic into a function that returns a Boolean value.

## What I learned

- How to create a function that returns a `bool` value.
- How Boolean values can be either `true` or `false`.
- How to use the modulus operator `%` to determine whether a number is even or odd.
- How to use a function call as the condition of an `if` statement.
- How to separate the responsibility of a function from the responsibility of `main()`.
- How a function can determine a result while `main()` handles displaying the appropriate message.

## Challenges I encountered

- I initially created the function but continued checking whether the number was even or odd directly inside `main()`.
- I had to understand that the function should be responsible for determining whether the number is even or odd.
- I initially thought I could simply use `cout << result(number)`, but learned that this would only display `1` or `0` instead of the appropriate message.
- I learned how to use the Boolean value returned by the function inside an `if` statement.

## What the program does

- Asks the user to enter a number.
- Passes the number to the `result` function.
- Checks whether the number is divisible by 2.
- Returns `true` if the number is even and `false` if it is odd.
- Uses the returned Boolean value to display whether the number is even or odd.

