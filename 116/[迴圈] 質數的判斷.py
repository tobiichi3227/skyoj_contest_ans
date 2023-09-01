from math import sqrt, floor

def main():
    a = int(input())
    
    def prime_check(n):
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
            
    if prime_check(a):
        print("prime")
    else:
        print("composite")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
