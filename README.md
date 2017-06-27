# CS 10 - Lab 6: More Loops

## Overview
Write a program that will read in from user input the scores of an exam (possible scores: 0 to 100). We do not know in advance the number of students, so the user will have to type in a sentinel value when they have finished entering scores ‐ i.e a value that could not be mistaken for an actual score. In this case, it’s pretty clear that a negative number would be a good choice for our sentinel.
**We will utilize ‐1 as our sentinel value.**

Instead of outputting anything within the loop, you will keep track of how many A's, B's, C's, D's and F's there are. Output the letter grades and the count for each only after you exit the loop (i.e. after the user has entered the sentinel).

Use the scale: 90 ‐ 100 => A, 80 ‐ 89 => B, 70 ‐ 79 => C, 60 ‐ 69 => D and 0 ‐ 59 => F.

## Hints
1. You will need a separate int variable to keep track of the number receiving each letter grade
2. increment that variable within a branch of an if / else if / else structure
3. make sure the SENTINEL isn't accidentally entered as a grade
4. Since we do not know how many iterations the loop will execute, the while or do‐while loop is the best choice for this exercise.

## Known Bugs
No currently known bugs!
