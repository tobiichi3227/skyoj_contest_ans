def main():
    n = int(input())
    
    b1, b2 = 0, 0
    for _ in range(n):
        val = int(input())
        if val > b1:
            b2, b1 = b1, val
        elif val > b2:
            b2 = val
    
    print(b2)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
