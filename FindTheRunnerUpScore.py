n = int(input())
arr = input().split()

arr.sort()
arr.reverse()

max = arr[0]
for i in range(arr.count(max)):
    arr.remove(max)
print(arr[0])
