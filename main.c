#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "output.h"
int main(int argc, char** argv) {
	input_handler(argc, argv);
	pretty_print();
	return 0;
	
}