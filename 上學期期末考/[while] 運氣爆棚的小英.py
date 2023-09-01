def main():
    a, b, c = map(int, input().split())
    
    s = 0
    cnt = 0
    while s < c:
        d = a + a * b
        s = 0
        s += d
        a = d
        cnt += 1
    
    print(cnt)
         

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
