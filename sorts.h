/*
*  autor: Diego Hernández Rangel
*  fecha: Septiembre 2026
*  desc: Clase de sorts con Merge Sort
*  como algoritmo de ordenamiento
*/

#ifndef SORTS_H
#define SORTS_H

#include <vector>

using namespace std;

template <class T>
class Sorts {
private:
    void copyArray(vector<T> &A, vector<T> &B, int low, int high);
    void mergeArray(vector<T> &A, vector<T> &B, int low, int mid, int high);
    void mergeSplit(vector<T> &A, vector<T> &B, int low, int high);

public:
    void ordenaMerge(vector<T> &v);
};

template <class T>
void Sorts<T>::copyArray(vector<T> &A, vector<T> &B, int low, int high) {
    for (int i = low; i <= high; i++) {
        A[i] = B[i];
    }
}

template <class T>
void Sorts<T>::mergeArray(vector<T> &A, vector<T> &B, int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = low;
    while (i <= mid && j <= high) {
        if (A[i] < A[j]) {
            B[k] = A[i];
            i++;
        } else {
            B[k] = A[j];
            j++;
        }
        k++;
    }
    if (i > mid) {
        for (; j <= high; j++) {
            B[k++] = A[j];
        }
    } else {
        for (; i <= mid; i++) {
            B[k++] = A[i];
        }
    }
}

template <class T>
void Sorts<T>::mergeSplit(vector<T> &A, vector<T> &B, int low, int high) {
    int mid;
    if ((high - low) < 1) {
        return;
    }
    mid = (high + low) / 2;
    mergeSplit(A, B, low, mid);
    mergeSplit(A, B, mid + 1, high);
    mergeArray(A, B, low, mid, high);
    copyArray(A, B, low, high);
}

template <class T>
void Sorts<T>::ordenaMerge(vector<T> &v) {
    if (v.empty()) return;
    vector<T> tmp(v.size());
    mergeSplit(v, tmp, 0, v.size() - 1);
}

#endif
