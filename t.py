inf = -1000000001

def merge(n1, L, n2, R, a):
    L.append(inf)
    R.append(inf)
    i = j = k = 0
    print(n1, len(L))
    print(n2, len(R))
    while i < n1 or j < n2:
        if L[i] > R[j]:
            a[k] = L[i]
            i += 1
        else:
            a[k] = R[j]
            j += 1
        k += 1

def mergeSort(n, a):
    if n > 1:
        n1 = n // 2
        n2 = n - n1
        L = a[:n1]
        R = a[n1:]

        mergeSort(n1, L)
        mergeSort(n2, R)
        merge(n1, L, n2, R, a)

n = int(input())
a = list(map(int, input().split()))
mergeSort(n, a)
for ele in a:
    print(ele, end = ' ')
