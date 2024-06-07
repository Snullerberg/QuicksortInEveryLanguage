using System;

class SortingQuick {
    public static int Partition(int[] A, int p1, int p2){
        int pivot = A[p2];
        int i = p1 - 1;
        for(int j = p1; j <= p2 - 1; j++){
            if(A[j] <= pivot){
                i++;
                (A[i], A[j]) = (A[j], A[i]);
            }
        }

        (A[i + 1], A[p2]) = (A[p2], A[i + 1]);
        return i + 1;
    }


    public static void QuickSort(int[] A, int p1, int p2){
        if(p1 < p2){
            int pivot = Partition(A, p1, p2);
            QuickSort(A, p1, pivot - 1);
            QuickSort(A, pivot + 1, p2);
        }
    }


    static void Main(){
        int[] A = {572, -856, 483, -74, 901, -399, 207, 692, -52, -908, 317, 145, -501, 623, 0, -310, 25, -657, 448, 9};
        int p1 = 0;
        int p2 = A.Length;
        
        QuickSort(A, p1, p2 - 1);
        
        
        foreach(int x in A)
        {
            Console.WriteLine(x);
        }
    }
}
