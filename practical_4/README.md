To compile each file, use:



gcc -o filename filename.c -Wall -lm



where "filename.c" is the name of the file where code is written, and "filename" is the output file's name after compiling, and "-lm" is used to link to the math library.



**"Area\_trap\_2\_array.c"** implements the procedure to calculate the values of a function f(x) in an array for estimating the area through the Trapezoidal rule. Here, f(x) = tan(x), and the minimum and maximum limits are 0 degrees and 60 degrees, which are converted to radians, as x is in radians in tan(x). It displays the array of tan(x) values in radians by using a function/subroutine with a loop counter to generate degree angles.



**"Area\_trap\_3\_witharray.c"** implements a procedure for generating an array using a function/subroutine that applies the Trapezoidal rule as a function/subroutine to evaluate the area under the curve of a function f(x). Here, f(x) = tan(x), and the minimum and maximum limits are 0 degrees and 60 degrees, which are converted to radians and stored in an array in the code, since x is in radians in tan(x). It displays the calculated area using a function/subroutine called "traprule", defined in the code, and the actual integrated area, which is log(2).



