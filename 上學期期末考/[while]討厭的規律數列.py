def main():
    arr = [0] * int(1e5)
    
    arr[0], arr[1], arr[2], n = map(int, input().split())
    t = arr[1] / arr[0]
    
    i = 0
    while arr[i] < n:
        arr[i + 1] = arr[i] * t
        i++
        
    print(i)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
