import sys
T = int(sys.stdin.readline())
for _ in range(T):
    R, S = sys.stdin.readline().split()
    R = int(R)
    result = ""
    for ch in S:
        result += ch * R
    print(result)