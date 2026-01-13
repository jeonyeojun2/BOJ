numbers = []
for _ in range(9):
    numbers.append(int(input()))
max_value = max(numbers)
index = numbers.index(max_value) + 1
print(max_value)
print(index)
