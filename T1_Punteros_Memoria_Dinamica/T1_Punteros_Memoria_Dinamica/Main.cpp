#include <iostream>
#include <string>

using namespace std;

void exc3();
float average(float*);

int main() {
	exc3();
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

	cout << "\nEl promedio es " << avg;

	free(temp);
	free(avg);
}

float average(float* temp) {
	int suma = 0;
	for (int i = 0; i < 7; i++) {
		suma += *(temp + i);
	}

	cout << suma / 7 << endl;

	return suma / 7;
}