#include <fstream>

using namespace std;


void basic_matrix_multiple(float** A, float** B, float **C, int m) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < m; k++) {
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
		}
	}
}

void read_matrix(int m, float** A, fstream &fin) {
	float temp;
	for (int i = 0; i < m; i++) {
		A[i] = new float[m];
		for (int j = 0; j < m; j++) {
			fin >> temp;
			A[i][j] = temp;
		}
	}
}


int main() {

	int m;

	fstream fin("test.in");

	fin >> m;

	float** A = new float*[m];
	float** B = new float*[m];
	float** C = new float*[m];

	read_matrix(m, A, fin);
	read_matrix(m, B, fin);

	fin.close();

	for (int i = 0; i < m; i++) {
		C[i] = new float[m];
	}
	


	basic_matrix_multiple(A, B, C, m);


	return 0;
}