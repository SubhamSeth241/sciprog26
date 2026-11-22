To compile each file, use:



gcc -o filename filename.c -Wall -lm



where "filename.c" is the name of the file where code is written, and "filename" is the output file's name after compiling, "-Wall" is used to remove any warnings and "-lm" links to the math library.



**"magic\_square\_stub.h"** represents the code to implement the function "isMagicSquare" to check whether a square matrix is a magic square or not. This function takes a matrix and checks whether every row, column, and main diagonal sums to the same value M, i.e., n(n^2 + 1)/2, where the matrix is n-sided. This is used as a header code in the main code below. This code takes the input as an "n-square" matrix and gives outputs 0 if n is negative or the square is not a magic square, i.e. the sums are not equal to M; otherwise, it gives outputs a non-zero value.



The square matrices are saved as **"magic\_square.txt"** and **"not\_magic\_square.txt"** files.



**"magic\_suare\_main\_stub.c"** contains the main code to check whether a square matrix is a magic square. It first defines the process for reading the above ".txt" files by entering the user-provided filename. Then check and get the integer lines in the matrix and print the number of lines by making a function "getlines". This function helps in reading the file. If the file is empty or has an issue, it will show "can't open file". If it is opened, it will read the stored math-integers as characters in the file to the end of the file, return them as integers, and then always close the file. In the main function, it will allocate the matrix and store the square matrix as an array of pointers, where each pointer points to a row. Then input the integers into the matrix to print the matrix from the file as output. Next, do the above-mentioned function "isMagicSquare" using the header file command. If it is a magic square, it will show 1; otherwise, 0.



