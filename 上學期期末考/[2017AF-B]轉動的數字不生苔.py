def main():
    n = int(input())
    
    for a in range(1, n + 1):
        for i in range(1, n - a + 1):
            print(" ", end='')
        
        for j in range(1, 2 * n + 1):
            print(a, end='')
        
        for k in range(1, 2 * a):
            print(".", end='')
        
        print()
    
    for a in range(1, n):
        for i in range(1, a + 1):
            print(" ", end='')
        
        for j in range(1, 2 * n + 1):
            print(a, end='')
        
        for k in range(1, (n - a) * 2):
            print(".", end='')
        
        print()

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
