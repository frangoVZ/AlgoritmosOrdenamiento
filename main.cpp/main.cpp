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


// BUBBLE SORT - MEJORA 2
// Reduce las comparaciones
void bubbleSortMejora2(int A[], int n, int &comparaciones, int &intercambios) {

    comparaciones = 0;
    intercambios = 0;

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

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


// SELECTION SORT
void selectionSort(int A[], int n, int &comparaciones, int &intercambios) {

    comparaciones = 0;
    intercambios = 0;

    for (int i = 0; i < n - 1; i++) {

        int menor = i;

        for (int j = i + 1; j < n; j++) {

            comparaciones++;

            if (A[j] < A[menor]) {
                menor = j;
            }
        }

        if (menor != i) {

            int aux = A[i];
            A[i] = A[menor];
            A[menor] = aux;

            intercambios++;
        }
    }
}


// MOSTRAR ARREGLO
void mostrarArreglo(int A[], int n) {

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    cout << endl;
}


// COPIAR ARREGLO
void copiarArreglo(int original[], int copia[], int n) {

    for (int i = 0; i < n; i++) {
        copia[i] = original[i];
    }
}


int main() {

    // ARREGLOS DE PRUEBA
    int arreglo1[] = {5, 3, 8, 2};
    int arreglo2[] = {1, 2, 3, 4, 5};
    int arreglo3[] = {5, 4, 3, 2, 1};

    int n1 = 4;
    int n2 = 5;
    int n3 = 5;

    int comparaciones;
    int intercambios;

    int copia[5];


    // PRUEBA 1: [5, 3, 8, 2]

    cout << "===== ARREGLO [5, 3, 8, 2] =====" << endl;

    // Bubble Sort base
    copiarArreglo(arreglo1, copia, n1);
    bubbleSort(copia, n1, comparaciones, intercambios);

    cout << "Bubble Sort base:" << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;
    cout << "Resultado: ";
    mostrarArreglo(copia, n1);


    // Bubble Sort mejora 1
    copiarArreglo(arreglo1, copia, n1);
    bubbleSortMejora1(copia, n1, comparaciones, intercambios);

    cout << "\nBubble Sort Mejora 1:" << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;
    cout << "Resultado: ";
    mostrarArreglo(copia, n1);


    // Bubble Sort mejora 2
    copiarArreglo(arreglo1, copia, n1);
    bubbleSortMejora2(copia, n1, comparaciones, intercambios);

    cout << "\nBubble Sort Mejora 2:" << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;
    cout << "Resultado: ";
    mostrarArreglo(copia, n1);


    // Selection Sort
    copiarArreglo(arreglo1, copia, n1);
    selectionSort(copia, n1, comparaciones, intercambios);

    cout << "\nSelection Sort:" << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;
    cout << "Resultado: ";
    mostrarArreglo(copia, n1);


    // PRUEBA 2: [1, 2, 3, 4, 5]

    cout << "\n===== ARREGLO [1, 2, 3, 4, 5] =====" << endl;

    // Bubble Sort base
    copiarArreglo(arreglo2, copia, n2);
    bubbleSort(copia, n2, comparaciones, intercambios);

    cout << "Bubble Sort base:" << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;


    // Bubble Sort mejora 1
    copiarArreglo(arreglo2, copia, n2);
    bubbleSortMejora1(copia, n2, comparaciones, intercambios);

    cout << "\nBubble Sort Mejora 1:" << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;


    // Bubble Sort mejora 2
    copiarArreglo(arreglo2, copia, n2);
    bubbleSortMejora2(copia, n2, comparaciones, intercambios);

    cout << "\nBubble Sort Mejora 2:" << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;


    // Selection Sort
    copiarArreglo(arreglo2, copia, n2);
    selectionSort(copia, n2, comparaciones, intercambios);

    cout << "\nSelection Sort:" << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;


    // PRUEBA 3: [5, 4, 3, 2, 1]
    

    cout << "\n===== ARREGLO [5, 4, 3, 2, 1] =====" << endl;

    // Bubble Sort base
    copiarArreglo(arreglo3, copia, n3);
    bubbleSort(copia, n3, comparaciones, intercambios);

    cout << "Bubble Sort base:" << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;


    // Bubble Sort mejora 1
    copiarArreglo(arreglo3, copia, n3);
    bubbleSortMejora1(copia, n3, comparaciones, intercambios);

    cout << "\nBubble Sort Mejora 1:" << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;


    // Bubble Sort mejora 2
    copiarArreglo(arreglo3, copia, n3);
    bubbleSortMejora2(copia, n3, comparaciones, intercambios);

    cout << "\nBubble Sort Mejora 2:" << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;


    // Selection Sort
    copiarArreglo(arreglo3, copia, n3);
    selectionSort(copia, n3, comparaciones, intercambios);

    cout << "\nSelection Sort:" << endl;
    cout << "Comparaciones: " << comparaciones << endl;
    cout << "Intercambios: " << intercambios << endl;


    return 0;
}