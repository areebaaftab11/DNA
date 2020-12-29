# DNA
Name: Areeba Aftab
Student ID: 2338751


#The Assignment
CPSC 350: Data Structures
Fall 2020
Programming Assignment 1: C++ Review Due: Sept. 21st, 2020. 11:59pm
 For this assignment, you will build a simple analysis program that will compute basic statistics for a list of DNA strings. Your program should work as follows:
-The program will accept as a command line argument the name of a text file that will contain an arbitrary list of DNA strings. (ie. ~/assign1/filename.txt) DNA strings consist of a sequence of nucleotides (A,C,T, or G). There will be 1 string per line of the file. No guarantees on capitalization.
-The program will then compute the sum, mean, variance, and standard deviation of the length of the DNA strings in the list. It will also compute the relative probability of each nucleotide (A,C,T, or G), as well as the probability of each nucleotide bigram (AA, AC, AT, AG, CA, CC, CT, CG, etc) across the entire collection.
-The program will output the labeled results to a file called yourname.out. At the top of the file, output your name, student id, etc.
-After printing the summary statistics to yourname.out, you will generate 1000 DNA strings whose lengths follow a Gaussian distribution with the same mean and variance as calculated above. The relative frequency of nucleotides will also follow the statistics calculated above. Append the 1000 strings to the end of yourname.out.
-The program will then ask the user if they want to process another list.
-If not, the program will exit. If so, the program will prompt for the name of the next file, process it, and append the results to the output file.

#Hints
To generate the length of a string from a Gaussian distribution with mean μ and variance σ2, you can use the rand() function (normalized – see RAND_MAX) to generate 2 random numbers, a and b, uniformly distributed in [0,1). Using the Box-Muller transform it is then possible to compute a random variable C, such that:
C = sqrt(-2 ln (a)) * cos(2πb)
Here C is a standard Gaussian with mean 0 and variance 1. You can then convert to a
normal random variable D with mean μ and variance σ2 as follows: D = σC + μ
Note that here we use the standard deviation, σ, which as you know from basic statistics is simply the square root of variance.

#The Rules
- You may NOT use any non-primitive data structures to do the math. (No arrays,
Vectors, Lists, etc) Just use individual primitive variables (int, double, etc) and std strings. Hopefully this will convince you that data structures make programs more efficient and easier to write.
