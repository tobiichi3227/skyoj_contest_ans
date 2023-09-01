def main():
    b, h = map(int, input().split())
    
    for i in range(1, h + 1):
        for j in range(i - 1, 0, -1):
            print(" ", end='')
        
        for j in range(b):
            print("*", end='')
            
        print("")
    
    print("Height: {}".format(h))
    print("Base: {}".format(b))
    print("Area: {}*{}={}".format(h, b, h * b))

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
