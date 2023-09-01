def main():
    n, k = map(int, input().split())
    cnt = 0
    
    while n:
        n -= 1
        cnt += 1
        if cnt % k:
            n += 1
    
    print(cnt)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
