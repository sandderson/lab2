#ifndef DATA_H
#define DATA_H
void(*func) (void);
void(*input) (void);
static struct Matrix {
	int size;
	int** A;
}matrix;
#endif // DATA_H