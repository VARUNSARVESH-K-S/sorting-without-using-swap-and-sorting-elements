/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void count_sort(int arr[], int n) {
    int count[3] = {0};
    int output[n];
    for (int i = 0; i < n; i++) {
        count[arr[i]]++; 
    }
    for (int i = 1; i <= 2; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i]; 
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = output[i]; 
    }
}

int main() {
    int risk_levels[] = {1, 0, 2, 1, 2, 0, 0, 2, 1};
    int n = sizeof(risk_levels) / sizeof(risk_levels[0]);
    count_sort(risk_levels, n);
    printf("Sorted risk levels: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", risk_levels[i]);
    }
    return 0;
}