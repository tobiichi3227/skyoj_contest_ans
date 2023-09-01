def main():
    def prime_check(n):
        from math import sqrt, floor
        if n == 2 or n == 3:
            return True
            
        elif n > 4:
            m = n % 6
            
            if m != 1 and m != 5:
                return False
                
            nSqrt = int(floor(sqrt(n)))
            for i in range(5, nSqrt + 1, 6):
                if n % i == 0 or n % (i + 2) == 0:
                    return False
                    
            return True
            
        else:
            return False
    
    x = int(input())
    
    if not prime_check(x):
        print("Those whom the gods wish to destroy they first make mad.")
        return
        
    for i in range(x - 1, 0, -1):
        for j in range(1, x):
            print(" ", end='')
        
        print(i)
    
    for i in range(1, x + 1):
        for j in range(1, i):
            print(" ", end='')
        
        for j in range(2 * x - 1 - 2 * (i - 1), 0, -1):
            print("*", end='')
        
        print()

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
