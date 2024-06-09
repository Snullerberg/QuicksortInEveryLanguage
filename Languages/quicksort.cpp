#include <iostream>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int A[], int p1, int p2){
    int pivot = A[p2];
    int i = p1 - 1;
    for(int j = p1; j <= p2 - 1; j++){
        if(A[j] <= pivot){
            i++;
            Swap(&A[i], &A[j]);
        }
    }
    Swap(&A[i+1], &A[p2]);
    return i + 1;
}

void QuickSort(int A[], int p1, int p2){
    if(p1 < p2){
        int q = Partition(A, p1, p2);
        QuickSort(A, p1, q - 1);
        QuickSort(A, q + 1, p2);
    }
}


int main(){
    int A[] {572, -856, 483, -74, 901, -399, 207, 692, -52, -908, 317, 145, -501, 623, 0, -310, 25, -657, 448, 9};
    int p1 = 0;
    int p2 = sizeof(A)/sizeof(A[0]) - 1;

    QuickSort(A, p1, p2);
    
    for(int i = 0; i <= p2; i++){
        std::cout << " " << A[i];
    }
    return 0;
}
