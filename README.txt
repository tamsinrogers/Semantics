CS333 - Project #4 - README
Tamsin Rogers
10/14/2021

Directory Layout:
project4
├── task1.c
├── task1c
├── task2.c
├── task2c
├── task1.cpp
├── task1cpp
├── task2.cpp
├── task2cpp

Run and build configuration for C:
macOS Big Sur 11.5.2 - Apple LLVM version 12.0.5 (clang-1205.0.22.11)

Description for each subsection:

C:

This is the C programming task. 

task1.c sorts a given array of random integers such that the even numbers are first and the odd numbers come after them.  This program will sort the even numbers in descending order and the odd numbers in descending order.
 			   
  Compile:
	gcc -o task1c task1.c
  Run:
	./task1c

  Output: 
  The sorted array is: 12 10 8 6 4 2 0 1 3 5 7 9 11 13 


task2.c contains a function that takes in an integer argument and returns the value of its factorial (as an integer).

  Compile:
	gcc -o task2c task2.c
  Run:
	./task2c

  Output (with the integer argument 5): 
  factorial: 120

Printing the return value of calling a function pointer demonstrates that pointer types can be converted other types that are more typically used in functions (int, float, etc).  

Going from 12! to 13! to 14! to 15! gives the following result:
	12!: factorial: 479001600
	13!: factorial: 1932053504
	14!: factorial: 1278945280
	15!: factorial: 2004310016
The factorial for 12 is correct, but the program runs out of memory for storing the huge values resulting from 13!, 14!, and 15!, so the calculated/printed values here are incorrect. 
	
C++:

This is the C++ programming task.
  
task1.cpp uses all of the control flow statements in C++: if-else, loops (while, do-while, iteration, range-based), and jump statements (break, continue, goto).  

  Compile:
	g++ -o task1cpp task1.cpp
  Run:
	./task1cpp

	Output:
	if and else statements: 
	x is 100
	x is not 100 or 50

	Different type of Loops: 
	 5 4 3 2 1 
	0 1 2 3 4 5 
	6 5 4 3 2 1 0 
	[H][e][l][l][o]

	Jump statements: 
	10, 9, 8, 7, 6, 5, 4, countdown aborted
	5, 4, 2, 1, liftoff 
	5, 4, 3, 2, 1, liftoff 

	Switch statement: 
	the value of x is unknown

 task2.cpp shows how functions are treated in C++.
 
  Compile:
	g++ -o task2cpp task2.cpp
  Run:
	./task2cpp

	Output:
	Calling function with pointer only 
	x is 5 

	Calling function as an argument from another function 
	x is 0 
	x is 1 
	x is 2 
	x is 3 
	x is 4 
	
task3.cpp implements bubble sort in C++.
 
  Compile:
	g++ -o task3cpp task3.cpp
  Run:
	./task3cpp

	Output:
	The unsorted array is:
	14 18 92 15 21 20 1 100 
	The Sorted array is: 
	1 14 15 18 20 21 92 100