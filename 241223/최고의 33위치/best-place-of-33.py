n = int(input())

arr = []

for i in range(n):
    arr.append(list(map(int, input().split())))

def get_1(r, c):
    num_1 = 0

    for j in range(r, r+3):
        for k in range(c, c+3):
            num_1 += arr[j][k]
    return num_1
        
max_1 = 0

for j in range(n):
    for k in range(n):
        if j + 2 >= n or k + 2 >= n:
            continue
        num_1 = get_1(j, k)
        max_1 = max(max_1, num_1)

print(max_1)