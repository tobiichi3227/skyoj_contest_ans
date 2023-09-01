def main():
    n = int(input())
    
    for i in range(1, n + 1, 2):
        for j in range(n - i):
            print(" ", end='')
            
        for j in range((n + i - 1) * 2 + 1):
            if j % 2:
                print(i, end='')
            else:
                print(".", end='')
        print("")
        
        if i == n:
            break
        
        for j in range(n - i - 1):
            print(" ", end='')
        
        for j in range(2 * (n + i) + 1):
            print(".", end='')
        print("")
    
    if n % 2:
        nn = n - 2
    else:
        nn = n - 1
    
    for i in range(nn, 0, -2):
        if (not n % 2 and i != n - 1) or (n % 2):
            for j in range(n - i - 1):
                print(" ", end='')
            
            for j in range(2 * (n + i) + 1):
                print(".", end='')
                
            print("")
        
        for j in range(n - i):
            print(" ", end='')
        
        for j in range((n + i - 1) * 2 + 1):
            if j % 2:
                print(i, end='')
            else:
                print(".", end='')
        print("")
        

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
