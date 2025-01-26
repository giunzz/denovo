def partition(A, p, r):
    x = A[r]  # Pivot
    i = p - 1  # Index of smaller element
    for j in range(p, r):
        if A[j] <= x:
            i += 1
            A[i], A[j] = A[j], A[i]  # Swap
    A[i + 1], A[r] = A[r], A[i + 1]  # Place the pivot in its correct position
    return i + 1  # Return the pivot index