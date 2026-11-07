To compile each file, use:



"**gcc -o filename filename.c -Wall**" use this to compile mm.c and mm\_1.c

"**gcc -o filename filename.c -Wall -lm**" use this to compile Taylor\_series\_e.c



where "filename.c" is the name of the file where code is written, and "filename" is the output file's name after compiling, and "-lm" is used to link to the math library, and in the code, "stdlib.h" is used as allocatearray() is used in the code.



**"mm.c"** and **"mm\_1.c"** implement the procedure to allocatearray(), fillwithones() and printarray(). The former one represents only the allocatearray(), i.e., how to take an integer as an argument and return a pointer to an allocated memory block of that many integers with **"malloc", "calloc",** and **"realloc"**. And the other one represents the procedure of allocating arrays of many integers in a memory block as a pointer, taking the pointer to an array of integers, and filling every cell with one and printing the elements. These codes are just examples of array allocation. This allocation of the array is used mainly in the code below.



**"Taylor\_series\_e.c"** implements a procedure for calculating the estimated value of e by setting x = 1 in the Taylor series mentioned in the question. Here, the order of the polynomial is the user's input. Here, the dynamic allocation (using **"malloc"**) of an array is used to store the term for each power of x separately. The result gives: f(1) = 2.00000, f(2) = 2.50000, f(3) = 2.66666, f(5) = 2.71666, f(10) = 2.71828, f(33) = 2.71828. Whereas f(34) and so on show "inf," i.e., higher-order polynomials yield worse estimates because the integers allocated in memory are way out of range, depending on the defined function of fractorial and polynomial.

