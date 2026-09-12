#include <iostream>

using namespace std;


// BUBBLE SORT BASE
void bubbleSort(int A[], int n, int &comparaciones, int &intercambios) {

    comparaciones = 0;
    intercambios = 0;

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - 1; j++) {

            comparaciones++;

            if (A[j] > A[j + 1]) {

                int aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;

                intercambios++;
            }
        }
    }
}


// MAIN PARA PROBAR BUBBLE SORT
int main() {

    int arreglo[] = {5, 3, 8, 2};
    int n = 4;

    int comparaciones;
    int intercambios;

    bubbleSort(arreglo, n, comparaciones, intercambios);

    cout << "Arreglo ordenado: ";

    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }

    cout << endl;

    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;

    return 0;
}