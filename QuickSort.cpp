#include "QuickSort.h"
#include <algorithm>

int pickFirst(int *arr) {
    return arr[0];
}

int pickCentral(int *arr, int beg, int end) {
    return arr[(beg + end) / 2];
}

int pickMedia(int *arr, int beg, int end) {
    int meio = (beg + end) / 2;
    return std::max(std::min(arr[beg], arr[meio]), std::min(std::max(arr[beg], arr[meio]), arr[end]));
}

int pickRandom(int *arr, int beg, int end) {
    int indice = beg + rand() % (end - beg + 1);
    return arr[indice];
}

int pickMediana(int *arr, int beg, int end) {
    int meio = (beg + end) / 2;
    int a = arr[beg];
    int b = arr[meio];
    int c = arr[end];

    if ((a <= b && b <= c) || (c <= b && b <= a))
        return b;
    else if ((b <= a && a <= c) || (c <= a && a <= b))
        return a;
    else
        return c;
}

int partition(int *nums, int beg, int end) {
    // Escolher o metodo do pivot
    int pivot = pickFirst(nums);

    int i = (beg - 1);

    for (int j = beg; j <= end; j++) {
        if (nums[j] < pivot) {
            i++;
            std::swap(nums[i], nums[j]);
        }
    }
    std::swap(nums[i + 1], nums[end]);
    return (i + 1);
}

void quickSort(int *nums, int beg, int end) {
    if (beg < end) {
        int pi = partition(nums, beg, end);
        quickSort(nums, beg, pi - 1);
        quickSort(nums, pi + 1, end);
    }
}
