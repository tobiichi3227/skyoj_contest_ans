def main():
    a, b = map(int, input().split())
    
    i = 1; k = a;
    while i <= b:
        i += 1
        k += 2
        
        for j in range(b - i + 1):
            print(" ", end='')
        
        for j in range(k):
            print("*", end='')
        
        print("")
    
    print("Top: {}".format(a))
    print("Base: {}".format(a+2*(b-1)))
    print("Height: {}".format(b))
    print("Area: ({}+{})*{}/2={}".format(a, (a+2*(b-1)), b, (a+(a+2*(b-1)))*b/2))

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
