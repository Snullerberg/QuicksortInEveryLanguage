import java.util.*; 

class SortingQuick{
	void Swap(int a, int b){
		int temp = a;
		a = b;
		b = temp;
	}

	int Partition(int[] A, int p1, int p2){
		int pivot = A[p2];
		int i = p1 - 1;
		for(int j = p1; j < p2; j++){
			if(A[j] <= pivot){
				i++;
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
		int temp = A[i + 1];
		A[i + 1] = A[p2];
		A[p2] = temp;
		return i + 1;
	}

	void QuickSort(int[] A, int p1, int p2){
		if(p1 < p2){
			int q = Partition(A, p1, p2);
			QuickSort(A, p1, q-1);
			QuickSort(A, q+1, p2);
		}
	}

	public static void main(String[] args){
		int[] A = {572, -856, 483, -74, 901, -399, 207, 692, -52, -908, 317, 145, -501, 623, 0, -310, 25, -657, 448, 9};
		
		SortingQuick qs = new SortingQuick();
		qs.QuickSort(A, 0, A.length - 1);

		System.out.println(Arrays.toString(A));
	}
}