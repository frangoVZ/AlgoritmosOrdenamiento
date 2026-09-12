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

// BUBBLE SORT - MEJORA 1
// Detecta si el arreglo ya está ordenado
void bubbleSortMejora1(int A[], int n, int &comparaciones, int &intercambios) {

    comparaciones = 0;
    intercambios = 0;

    for (int i = 0; i < n - 1; i++) {

        bool swapped = false;

        for (int j = 0; j < n - 1; j++) {

            comparaciones++;

            if (A[j] > A[j + 1]) {

                int aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;

                intercambios++;

                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

// MAIN PARA PROBAR BUBBLE SORT
int main() {

    int n = 4;

    int arregloBase[] = {5, 3, 8, 2};
    int arregloMejora[] = {5, 3, 8, 2};

    int comparaciones, intercambios;


    bubbleSort(arregloBase, n, comparaciones, intercambios);

    cout << "=== BUBBLE SORT BASE ===" << endl;
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arregloBase[i] << " ";
    }
    cout << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl << endl;



    bubbleSortMejora1(arregloMejora, n, comparaciones, intercambios);

    cout << "=== BUBBLE SORT MEJORA 1 ===" << endl;
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arregloMejora[i] << " ";
    }
    cout << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;

    return 0;
}