def main():
    a1, b1, a2, b2 = map(int, input().split())
    """
    a1 = int(input())
    b1 = int(input())
    a2 = int(input())
    b2 = int(input())
    """
    
    s = a1 + b1
    if a2 < a1 and b2 < b1:
        print("Both players are idiots!")
        return
        
    if a2 < a1:
        print("Player A is an idiot!")
        return
    
    if b2 < b1:
        print("Player B is an idiot!")
        return    
    
    if a2 == s and b2 == s:
        print("Even.")
    elif a2 == s:
        print("Player A wins!")
    elif b2 == s:
        print("Player B wins!")
    else:
        print("Even.")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
