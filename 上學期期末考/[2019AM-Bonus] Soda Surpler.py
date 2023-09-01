def main():
    e, f, c = map(int, input().split())
    
    e += f
    s = 0
    while e >= c:
        e -= c
        s += 1
        e += 1
        
    print(s)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
