#include <stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int Partition(int in[], int p1, int p2){
  int x = in[p2];
  int i = p1 - 1;

  for(int j = p1; j <= p2 - 1; j++ ){
    if(in[j] < x){
      i++;
      swap(&in[i], &in[j]);
    }
  }
  swap(&in[i+1], &in[p2]);
  return(i+1);
}

void QuickSort(int in[], int p1, int p2){
  if(p1 < p2){
    int x = Partition(in, p1, p2);
    QuickSort(in, p1, x - 1);
    QuickSort(in, x + 1, p2);
  }
}

int main(){
  int unsorted[] = {572, -856, 483, -74, 901, -399, 207, 692, -52, -908, 317, 145, -501, 623, 0, -310, 25, -657, 448, 9};
  int n = sizeof(unsorted)/sizeof(unsorted[0]) - 1;
  
  QuickSort(unsorted, 0, n);
  
  for(int i = 0; i <= n; i++){
    printf("%d ", unsorted[i]);
  }
  
  return 0;
}
