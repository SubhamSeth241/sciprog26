To compile each file, use:



"**gcc -o filename filename.c -Wall**" use this to compile Mult\_Matrices.c



where "filename.c" is the name of the file where code is written, and "filename" is the output file's name after compiling.



**"Mult\_Matrices.c"** implements the procedure to calculate the multiplication of two matrices. Where C\[n]\[q] = A\[n]\[p]\*B\[p]\[q] and n = 5, p = 3, q = 4, and A, B, C denote arrays. C is initialized to 0, while A and B are set to i+j and i-j, where i, j, and k are the initial integers used to create the arrays. After compiling, it will show the three matrix arrays as results.





Other codes are used to generate the multiplication of two matrices by creating files. Where:



**"matmult.c"** represents the matrix multiplication function with i, j, and k as initial integers.

**"Mult\_Matrices\_main.c"** represents the main multiplication code by calling the above-mentioned matrix multiplication function from **"matmult.c"**. Where C\[n]\[q] = A\[n]\[p]\*B\[p]\[q] and n = 5, p = 3, q = 5, and A, B, C denote arrays. C is initialized to 0, while A and B are set to i+j and i-j, where i and j are the initial integers used to create the arrays.

**"Makefile"** contains the instructions to compile or execute the two files (matmult.c and Mult\_Matrices\_main.c) above, with **"mmc"** as the executable filename. Here, -lm is used to execute mathematical function. Then use the **"make**" **or "make all"** command to compile everything together.

