n, k = list(map(int, input().split()))
arr = list(map(int, input().split()))
queries = list(map(int, input().split()))

def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = left + (right - left) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] > target:
            right = mid - 1
        else:
            left = mid + 1
    return -1

for q in queries:
    if binary_search(arr, q) != -1:
        print("YES")
    else:
        print("NO")
