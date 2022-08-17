#include <iostream>
#include <string>

using namespace std;

void exc3();
void exc4();
float average(float*);
void addMatrixes(int, int*, int*, int*);

int main() {
	exc4();
}

void exc3() {
	float* temp, * avg;

	temp = (float*)malloc(sizeof(float) * 7);
	avg = (float*)malloc(sizeof(float));

	cout << "\nIngrese las temperaturas de la semana\n\n";

	for (int i = 0; i < 7; i++) {
		cout << "Dia " << i + 1 << ": ";
		cin >> temp[i];
	}

	*avg = average(temp);

	cout << "\nEl promedio es " << *avg;

	free(temp);
	free(avg);
}

void exc4() {
	int i, j, size, totalSize, *matA, *matB, * matC;

	cout << "Ingrese el numero del tamaño de las matrices: ";
	cin >> size;

	totalSize = size * size;

	matA = (int*)malloc(sizeof(int) * totalSize);
	matB = (int*)malloc(sizeof(int) * totalSize);
	matC = (int*)malloc(sizeof(int) * totalSize);

	cout << "\nIngrese los elementos de la matriz 1\n";
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			cout << "pos[" << i << "][" << j << "]: ";
			cin >> matA[i*size + j];
		}
	}

	cout << "\nIngrese los elementos de la matriz 2\n";
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			cout << "pos[" << i << "][" << j << "]: ";
			cin >> matB[i*size + j];
		}
	}

	addMatrixes(size, matA, matB, matC);

	free(matA);
	free(matB);
	free(matC);
}

float average(float* temp) {
	int suma = 0;
	for (int i = 0; i < 7; i++) {
		suma += *(temp + i);
	}

	cout << suma / 7 << endl;

	return suma / 7;
}

void addMatrixes(int size, int* a, int* b, int* c) {
	int i, j;

	for (i = 0; i < size * size; i++) {
		c[i] = a[i] + b[i];
	}
	
	cout << "\nLa suma de matrices es:\n";

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			cout << "\t" << a[i* size + j];
		}
		cout << endl;
	}

	cout << "\nLa suma de matrices es:\n";

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			cout << "\t" << b[i * size + j];
		}
		cout << endl;
	}

	cout << "\nLa suma de matrices es:\n";

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			cout << "\t" << c[i * size + j];
		}
		cout << endl;
	}
}