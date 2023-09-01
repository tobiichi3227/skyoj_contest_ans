def main():
    a, b = map(int, input().split())
    
    if a < b:
        a, b = b, a
        
    if a == b:
        print("all dead")
    else:
        print(a - b)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
