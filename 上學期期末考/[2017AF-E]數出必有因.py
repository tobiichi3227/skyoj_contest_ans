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
    
    n = int(input())
    
    s = 0
    flag = False
    for j in range(1, n + 1):
        if not prime_check(j):
            for i in range(2, j):
                if not j % i:
                    s += i
            
            if s:
                print("SOF({})={}".format(j, s))
                s = 0

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
