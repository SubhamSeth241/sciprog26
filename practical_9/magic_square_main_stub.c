#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square_stub.h"

int getlines(char filename[MAX_FILE_NAME]);
int main()
{
//define our file variable
	FILE *f;
	char filename[MAX_FILE_NAME];
	printf("Enter file name: ");
	scanf("%s", filename);

// n function which gets the number of lines
	int n = getlines(filename);
	printf("Number of lines %d\n", n);

// Open the file
	f = fopen(filename, "r");

	int i;

// Allocating a matrix for storing the magic square
// as an array of pointers, where each pointer is a row

	int **mat = (int **) malloc(n*sizeof(int*));
	for (i = 0; i < n; i++)
	{
		mat[i] = (int*) malloc(n*sizeof(int));
	}

// inputting integer data into the matrix;

	int j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			fscanf(f, "%d", &mat[i][j]);
		}
	}

	for (i = 0; i < n; i++)
        {
		printf("\n");
                for (j = 0; j < n; j++)
                {
                        printf(" %d ", mat[i][j]);
                }
        }
	printf("\n");

// Freeing each row separately before freeing the array of pointers

	int magic = isMagicSquare(mat,n);

	printf("The square returns value: %d\n", magic);

// Close the file
	fclose(f);
	return 0;
}
//##!
int getlines(char filename[MAX_FILE_NAME])
{
	FILE *fp;
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Can't open file!\n");
		exit(1);
	}

	int ch_read;
	int count = 0;
	while( (ch_read = fgetc(fp)) != EOF)
	{
		if (ch_read == '\n')
		{
			count++;
		}
	}
	printf("No. lines, %d\n", count);
	fclose(fp);
	return count;
}
