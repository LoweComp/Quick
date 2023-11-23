#include <iostream>
#include "QuickSort.h"
#include "QuickSort.cpp"

using namespace std;

void exibirLista(int *arr, int tam) {
    cout << "Lista de " << tam << " Numeros: " << endl;
    for (int i = 0; i < tam; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void troca(int *arr, int tam, double porcentagem) {
    // Inicializa a semente
    srand(static_cast<unsigned int>(time(nullptr)));

    // Calcula o número total de trocas com base na porcentagem fornecida
    int totalTrocas = static_cast<int>(porcentagem * tam / 100);

    // Realiza as trocas
    for (int i = 0; i < totalTrocas; ++i) {
        int ind1 = rand() % tam;
        int ind2 = rand() % tam;

        swap(arr[ind1], arr[ind2]);
    }
}

int main() {
    int N;
    cout << "Digite o tamanho da lista (N): ";
    cin >> N;

    int *nums = new int[N];

    for (int i = 0; i < N; ++i) {
        nums[i] = i + 1;
    }

    exibirLista(nums, N);

    double porcentagemTrocas;
    cout << "Digite a porcentagem de trocas desejada: ";
    cin >> porcentagemTrocas;

    troca(nums, N, porcentagemTrocas);

    exibirLista(nums, N);

    delete[] nums;

    return 0;
}




