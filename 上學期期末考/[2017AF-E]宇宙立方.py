def main():
    n = int(input())
    
    s = 0
    for i in range(n):
        s = 0
        for j in range(1, n - i + 1):
            s += j * j * j
        
        print("SON({})={}".format(n - i, s))

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
