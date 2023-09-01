def main():
    n, m = map(int, input().split())
    
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            print("{}*{}={}".format(i, j, i * j), end=' ')
        
        print()

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
