package main

import "fmt"
func main(){
    A := []int{572, -856, 483, -74, 901, -399, 207, 692, -52, -908, 317, 145, -501, 623, 0, -310, 25, -657, 448, 9}
    
    QuickSort(A, 0, len(A) - 1)

    fmt.Printf("%d",A)
}

func QuickSort(A []int, p1 int, p2 int){
    if p1 < p2 {
        q := Partition(A, p1, p2)
        QuickSort(A, p1, q - 1)
        QuickSort(A, q + 1, p2)
    }
}

func Partition(A []int, p1 int, p2 int) (int){
    pivot := A[p2]
    i := p1 - 1
    for j := p1; j <= p2 - 1; j++ {
        if A[j] <= pivot {
            i++
            A[i], A[j] = A[j], A[i]
        }
    }
    A[i + 1], A[p2] = A[p2], A[i + 1]
    return i+1
}
