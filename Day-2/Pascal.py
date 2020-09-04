# Printing a Pascal triangle upto n rows

from math import factorial as fa
n = int(input())
for i in range(n):
    for j in range(i+1):
        ans = (fa(i) / (fa(j)*fa(i-j)))
        print(int(ans),end=" ")

    print("\n")
