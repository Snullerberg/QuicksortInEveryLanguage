A = [
    572,
    -856,
    483,
    -74,
    901,
    -399,
    207,
    692,
    -52,
    -908,
    317,
    145,
    -501,
    623,
    0,
    -310,
    25,
    -657,
    448,
    9,
]


def Partition(A, p1, p2):
    pivot = A[p2]
    i = p1 - 1
    for j in range(p1, p2):
        if A[j] <= pivot:
            i = i + 1
            A[i], A[j] = A[j], A[i]
    A[i + 1], A[p2] = A[p2], A[i + 1]
    return i + 1


def QuickSort(A, p1, p2):
    if p1 < p2:
        q = Partition(A, p1, p2)
        QuickSort(A, p1, q - 1)
        QuickSort(A, q + 1, p2)


def main():
    QuickSort(A, 0, len(A) - 1)
    print(A)


if __name__ == "__main__":
    main()
