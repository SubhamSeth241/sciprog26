To compile each file, use:



gcc -o filename filename.c -Wall -lm



where "filename.c" is the name of the file where code is written, and "filename" is the output file's name after compiling, and "-lm" is used to link to the math library.



**"printing1.c"** demonstrates the printing procedure for displaying the results, numbers, or anything you want to show while compiling.



**"Area\_trap.c"** represents 1st procedure following the Trapezoidal rule to calculate the area under the curve of a function f(x). Here f(x) = tan(x) and the minimum and maximum limits are 0 and pi/3. Also, it displays the difference between the estimated area and the actual integrated area, which is log(2).



**"Area\_trap1.c"** represents 2nd procedure following the Trapezoidal rule to evaluate the area under the curve of a function f(x). Here, f(x) = tan(x), and the minimum and maximum limits are 0 degrees and 60 degrees, which are converted to radians in the code. Also, it displays the difference between the calculated area and the actual integrated area, which is log(2).



