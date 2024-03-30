// Given two sorted arrays of strings, write a function to merge them into a single sorted array.
#include <stdio.h>

void mergeSortedArrays(char* arr1[], int len1, char* arr2[], int len2, char* result[]) {
    // Your code here
}

int main() {
    char* arr1[] = {"apple", "banana", "orange"};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    char* arr2[] = {"apricot", "blueberry", "peach"};
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    char* result[len1 + len2];
    // Your code here to call mergeSortedArrays and print the result
    return 0;
}