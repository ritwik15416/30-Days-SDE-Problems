for _ in range(int(input())):
    ls = input().split(".")     # words are seperated by dots
    print((".").join(ls[::-1]))  
