def main():
    a, b = map(int, input().split())
    
    if a < b or a < 0 or b < 0 or a > 100 or b > 100:
        print("impossible")
        return
    
    if ((not a % 2) and b % 2) or ((not b % 2) and a % 2):
        print("impossible")
        return
        
    c = (a + b) / 2
    d = a - c
    if c < 0 or d < 0 or c > 100 or d > 100:
        print("impossible")
        return
    
    if c < d:
        c, d = d, c
    
    print(c, d)
    

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
