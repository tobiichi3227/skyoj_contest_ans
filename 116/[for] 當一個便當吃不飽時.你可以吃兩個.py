def main():
    n = int(input())
    s = float()
    a = float(6000)
    
    for _ in range(n):
        val = float(input())
        s += val
        q = s / float(n)
        if val >= 91:
            a = 5000
        
        if q >= 90:
            a -= (q - 90) * 600
        
    print(a)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
