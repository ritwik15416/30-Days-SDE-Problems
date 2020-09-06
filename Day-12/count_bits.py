for _ in range(int(input())):
    ans = 0
    x = int(input())
    for i in range(1,x+1):
        n = bin(i)[2:]
        ans += n.count('1')
    print(ans)    
    
    
# This question can also be done by Brian Kernighan's Algorithm, but it is not time-optimized. 
