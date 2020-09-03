for _ in range(int(input())):  # number of test cases
    n = int(input())  # length of array
    arr = list(map(int,input().split())) # array of 0,1,2
    low = 0
    mid = 0
    high = n - 1
    while (mid<=high): 
        if arr[mid] == 0:
            arr[low], arr[mid] = arr[mid], arr[low]
            low += 1
            mid += 1
        elif arr[mid] == 1:
            mid += 1
        else:
            arr[mid], arr[high] = arr[high], arr[mid]
            high -= 1
    new = list(map(str,arr))  # converting final array into an array of strings
    print((" ").join(new))
    
    
