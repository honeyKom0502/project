#include <stdio.h>

// Function to merge two sorted arrays
void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Merge the arrays by comparing elements from both
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements from arr1
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2
    while (j < n2) {
        merged[k++] = arr2[j++];
    }
}

// Function to display an array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2;

    // Input for the first sorted array
    printf("Enter the number of elements in the first sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements of the first sorted array: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input for the second sorted array
    printf("Enter the number of elements in the second sorted array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements of the second sorted array: ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Array to hold the merged result
    int merged[n1 + n2];

    // Merge the two sorted arrays
    mergeSortedArrays(arr1, n1, arr2, n2, merged);

    // Display the merged sorted array
    printf("Merged sorted array: ");
    displayArray(merged, n1 + n2);

    return 0;
}