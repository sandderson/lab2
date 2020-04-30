#include "input.h"
#include "data.h"
#include"func.h"

#include <getopt.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void input_rnd();
void input_keyboard();
void input_handler(int argc, char** argv) {
	int long_index = 0, c = 0;
	struct option long_options[] = {
		{"size",      required_argument, 0,  's' },
		{"debug",      no_argument, 0,  'd' },
		{"input",      no_argument, 0,  'i' },
		{0, 0, 0, 0}
	};
	matrix.size = 7; 
	printf("dlfkg");
	func = func_release;
	void(*input) (void);
	input = input_rnd;
	while ((c = getopt_long(argc, argv, "sdi", long_options, &long_index)) != -1)
	{
		printf("%c", c);
		switch (c) {
		case 's':
			matrix.size = atoi(optarg);
			printf("dlfkg");
			break;
		case 'd':
			func = func_debug;
			break;
		case 'i':
			input = input_keyboard;
			break;
		}

	}
	printf("%i", matrix.size);
	matrix.A = (int**)calloc(matrix.size, sizeof(int*));
	for (int i = 0; i < matrix.size; i++)
	{
		matrix.A[i] = (int*)calloc(matrix.size, sizeof(int));
	}
	//input();
	
}
void input_rnd() {
	srand(time(0));

	for (int i = 0; i < matrix.size; i++)
	{
		for (int j = 0; j < matrix.size; j++)
		{
			matrix.A[i][j] = (-10 + rand() % 20);
		}
	}

}
void input_keyboard()
{
	printf("A[%d][%d]\n", matrix.size, matrix.size);
	for (int i = 0; i < matrix.size; i++)
	{
		for (int j = 0; j < matrix.size; j++)
		{
			printf("Enter row %d", i + 1);
			scanf("%d", &matrix.A[i][j]);
		}
	}
}