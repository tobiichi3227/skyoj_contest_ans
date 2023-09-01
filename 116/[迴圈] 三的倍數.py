def main():
    n = int(input())
    arr = list(map(int, input().split()))
    
    c = sum(1 for i in arr if not i % 3)
    print(c)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
