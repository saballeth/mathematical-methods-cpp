#include <iostream>
#define LIMITE 200
using namespace std;

void leerMatrizNumerica(double matriz[LIMITE][LIMITE], string nombre, int cantFilas, int cantColumnas) {
    cout << "Digite los elementos de la " << nombre << " (de " << cantFilas << " filas por " << cantColumnas << " columnas):" << endl;
    for (int f = 0; f < cantFilas; f++) {
        for (int c = 0; c < cantColumnas; c++) {
            cout << nombre << "(" << f << ", " << c << ") = ";
            cin >> matriz[f][c];
        }
    }
}

void escribirMatrizNumerica(double matriz[LIMITE][LIMITE], string nombre, int cantFilas, int cantColumnas) {
    cout << nombre << " = {" << endl;
    for (int f = 0; f < cantFilas; f++) {
        cout << "\t{" << matriz[f][0];
        for (int c = 1; c < cantColumnas; c++) {
            cout << ", " << matriz[f][c];
        }
        cout << "}" << endl;
    }
    cout << "}" << endl;
}

void multiplicarMatrices(double factor1[LIMITE][LIMITE], double factor2[LIMITE][LIMITE], double producto[LIMITE][LIMITE], int n, int m, int r) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < r; j++) {
            producto[i][j] = 0; 
            for (int k = 0; k < m; k++) {
                producto[i][j] += factor1[i][k] * factor2[k][j]; 
            }
        }
    }
}

int main() {
    int n, m, r;
    double factor1[LIMITE][LIMITE], factor2[LIMITE][LIMITE], producto[LIMITE][LIMITE];

    cout << "Multiplicación de matrices" << endl;

    cout << "Digite la cantidad de filas de la primera matriz a multiplicar " << endl;
    cin >> n;
    cout << "Ahora digite la cantidad de columnas de dicha matriz " << endl;
    cin >> m;

    leerMatrizNumerica(factor1, "primera matriz", n, m);
    
    cout << "La segunda matriz a multiplicar con la primera debe tener " << m << " filas" << endl;
    cout << "Digite la cantidad de columnas de esta segunda matriz: " << endl;
    cin >> r;

    leerMatrizNumerica(factor2, "segunda matriz", m, r);
    
    multiplicarMatrices(factor1, factor2, producto, n, m, r);
    
    escribirMatrizNumerica(factor1, "primera matriz", n, m);
    escribirMatrizNumerica(factor2, "segunda matriz", m, r);
    escribirMatrizNumerica(producto, "producto", n, r);
    
    return 0;
}
