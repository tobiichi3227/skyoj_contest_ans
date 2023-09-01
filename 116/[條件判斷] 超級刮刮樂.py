def main():
    a, b = map(int, input().split())
    
    s = 0
    c = int(a / 10)
    d = int(b / 10)
    e = a % 10
    f = b % 10
    
    if c == d or e == f or e == d:
        s += 50
    
    if a % 2:
        s += 100
        
    if f in [2, 5, 8]:
        s += 100
        
    if a == b:
        s += 200
    
    if not s:
        s += 250
    
    s -= 500
    print(s)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
