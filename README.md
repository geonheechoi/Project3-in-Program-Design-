# Project3-in-Program-Design-
Project 3, Program Design Problem 1 – Postal services in the Line State (50 points) The Line State is a state with N cities arranged in a horizontal line, which are named by a number from 1 to N in increasing order from left to right. The postal services agency of this state is equipped with drones to speed up the delivery of items to different cities. To increase the battery life of its drones, the agency determined that they can only fly a certain distance, which is defined according to their model. Thus, the i-th drone must travel exactly Di cities away from its current location in every flight. Also, these drones can never leave the state. For instance, if N=10 and there is a drone in city #4 with D=3, this drone can reach cities #1, #4, #7 and #10 (it can reach city #10 by flying from city #4 to city #7, and then from city #7 to city #10), but it will never reach the cities #2, #3, #5, #6, #8, and #9. Given the list of existing drones and their current locations, can you find out which cities are reached by at least one drone? 1. The program takes the number of cities (N), the number of drones (M) and a list of M drones, each described by its current city C and travel distance D. It computes the number of computers that can be assembled with the existing parts. 2. Input validation: the program validates the number of cities (1 ≤ N ≤ 100), the number of drones (1 ≤ M ≤ 100), and the location and travel distance of each drone (1 ≤ C ≤ N, 1 ≤ D ≤ N). If any of the input values are invalid, the program prints a message and exits

Problem 2 – Factorial (50 points)
Write a C program that calculates and displays the factorial of each element in an integer
array.
1. In the main function, the program will ask the user to enter the length of array
and the elements of the array.
2. The program should include a recursive factorial function (provided in the
lecture slides).
int fact(int n);
3. As part of the solution, create a function calculate_fact() with the following
prototype. n is the size of the arrays. array a represents the input array, and
array b represents the output array. The function calls the fact function to
calculate the factorial of an element.
void calculate_fact(int a[], int n, int b[]);
4. The main function calls the calcuate_fact() function and displays the output.
