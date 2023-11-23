#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>

int pickFirst(int *arr);
int pickCentral(int *arr, int beg, int end);
int pickMedia(int *arr, int beg, int end);
int pickRandom(int *arr, int beg, int end);
int pickMediana(int *arr, int beg, int end);

int partition(int *nums, int beg, int end);
void quickSort(int *nums, int beg, int end);

#endif
