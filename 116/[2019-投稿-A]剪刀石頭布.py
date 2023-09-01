def main():
    a, b = map(int, input().split())
    
    flag = 0
    flag += (a == 5 and b == 0)
    flag += (a == 0 and b == 2)
    flag += (a == 2 and b == 5)
    
    if flag:
        print("A wins!!")
    else:
        if a == b:
            print("Both win!!")
        elif a not in [0, 2, 5] or b not in [0, 2, 5]:
            print("Are youo kidding me?")
        else:
            print("B wins!!")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
