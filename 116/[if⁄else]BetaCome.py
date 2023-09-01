def main():
    a, b = map(int, input().split())
    
    if not a in [0, 2, 5]:
        print("Player Win!")
    elif not b in [0, 2, 5]:
        print("BetaCome Win!")
    else:
        if (a == 5 and b == 0) or (a == 2 and b == 5) or (a == 0 and b == 2):
            print("BetaCome Win!")
        elif (a == 5 and b == 2) or (a == 2 and b == 0) or (a == 0 and b == 5):
            print("Player Win!")
        elif a == b:
            print("Tie!")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
