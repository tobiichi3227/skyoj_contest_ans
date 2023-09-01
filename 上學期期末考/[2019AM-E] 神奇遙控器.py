def main():
    a, b = map(int, input().split())
    
    cnt = 0
    while a != b:
        if not a % 2:
            a /= 2
        else:
            a--
            
        cnt += 1
    print(cnt)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
