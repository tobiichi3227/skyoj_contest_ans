def main():
    a, b, c, d = map(int, input().split())
    ans = 0
    
    n = a + c
    m = b + d
    if n > m:
        n, m = m, n
        
    for i in range(1, n + 1):
        if n % i == 0 and m % i == 0:
            ans = i
            
    print(ans)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
