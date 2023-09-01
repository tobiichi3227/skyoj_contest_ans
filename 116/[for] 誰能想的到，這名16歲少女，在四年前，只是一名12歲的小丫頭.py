def main():
    n = int(input())
    s, n = 0, 2000
    flag = False
    
    for _ in range(n):
        val = int(input())
        s += val
        if val > 200:
            flag = True
            
    if flag:
        n *= 0.95
    
    if s > n:
        n -= s - 2000
        
    print(n)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
