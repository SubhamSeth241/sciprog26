To compile each file, use:



"**gcc -o filename filename.c -Wall**" use this to compile Fibonacci.c

"**gcc -o filename filename.c -Wall -lm**" use this to compile arctanh.c



where "filename.c" is the name of the file where code is written, and "filename" is the output file's name after compiling, and "-lm" is used to link to the math library.



**"Fibonacci.c"** implements the procedure to calculate the Fibonacci series using a function with two arguments. Here, n is the value the user inputs (must be greater than or equal to 2), and f0 = 0, f1 = 1. By using a "for" loop, the whole series is printed as a result.



**"arctanh.c"** implements a procedure for calculating the inverse hyperbolic tangent function. Here, 2 methods are used to compute the function: one is the Maclaurin series (a type of Taylor series) \[arctanh1(x)], and the other is the natural logarithm series \[arctanh2(x)]. Delta is the value the user inputs, and x ranges from -0.9 to 0.9 with a step size of 0.01. This code shows the accuracy of the stored array results for two different methods, compared to 10 significant figures. 



