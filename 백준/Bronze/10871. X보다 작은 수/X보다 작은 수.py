N, X = map(int, input().split())
nums = list(map(int, input().split()))
result = []
for i in nums:
    if i < X:
        result.append(i)
print(*result)