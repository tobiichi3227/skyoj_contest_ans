def main():
    arr = list(map(int, input().split()))
    
    arr.sort()
    if arr[2] >= arr[1] + arr[0]:
        print("Invalid")
        return
        
    if arr[0] == arr[1] == arr[2]:
        print("Equilateral")
    elif arr[0] == arr[1] or arr[1] == arr[2] or arr[0] == arr[2]:
        print("Isosceles")
    else:
        print("Scalene")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
