def main():
    x = int(input())
    
    if x % 2:
        for i in range(1, x):
            for j in range(0, x - 1):
                print(" ", end='')
            print("*")
        
        for i in range(1, x + 1):
            for j in range(1, i):
                print(" ", end='')
            
            for j in range(1, (x - i + 1) * 2):
                print(i, end='')
            print()
    else:
        print("What the fuck do you think you're doing?")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
