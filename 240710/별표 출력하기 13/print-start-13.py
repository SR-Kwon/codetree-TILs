n = int(input())


arr = [0] * n
arr[0] = n
cnt = 1
for i in range(1, n):
    if cnt == n:
        break
    arr[cnt] = i
    cnt += 1
    if cnt == n:
        break
    arr[cnt] = n - i
    cnt += 1

for m in arr:
    print('* ' * m)

arr.reverse()
for m in arr:
    print('* ' * m)