#include <iostream>
#define LIMITE 100

using namespace std;

void mostrarmatriz(int f, double A[LIMITE][LIMITE], int c) {
    for (int i = 0; i < f; i++) {
        for (int j = 0; j <= c; j++) {
            cout << " " << A[i][j] << "    ";
        }
        cout << endl;
    }
}

void reduccionGaussJordan(int filas, double matriz[LIMITE][LIMITE]) {
    for (int i = 0; i < filas; i++) {
        double factor1 = matriz[i][i];
        if (factor1 != 1) {
            for (int j = 0; j < filas; j++) {
                matriz[i][j] = matriz[i][j] / factor1;
            }
        }
        for (int d = 0; d <= filas; d++) {
            if (d != i) {
                double factor2 = -1 * matriz[d][i];
                for (int k = 0; k < filas; k++) {
                    matriz[d][k] += matriz[i][k] * factor2;
                }
            }
        }
    }
}

int main() {
    int filas = 3;
    double matriz[LIMITE][LIMITE] = {{6, 2, 4, 3}, {1, 3, 4, 2}, {5, 4, 5, 5}};

    mostrarmatriz(filas, matriz, filas);
	reduccionGaussJordan(filas, matriz);
	cout << endl;
    mostrarmatriz(filas, matriz, filas);

    return 0;
}

