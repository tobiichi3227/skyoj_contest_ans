def main():
    n = int(input())
    arr = list(map(int, input().split()))
    
    s = sum(arr)
    c = sum(1 for i in arr if i >= 2000)
    
    if s >= 88000 and c >= 5:
        print("10888")
    elif s >= 88000:
        print("8888")
    elif sum < 88000 and cnt >= 5:
        print("2000")
    else:
        print("0")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
