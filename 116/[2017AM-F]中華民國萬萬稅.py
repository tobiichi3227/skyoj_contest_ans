def main():
    a = int(input())
    if 0 <= a <= 370000:
        res = a * 0.07
        print("Level A\n{}".format(int(res)))
    elif 370001 <= a <= 990000:
        res = a * 0.15 - 25900
        print("Level B\n{}".format(int(res)))
    elif 990001 <= a <= 1980000:
        res = a * 0.25 - 105100
        print("Level C\n{}".format(int(res)))
    elif 1980001 <= a <= 3720000:
        res = a * 0.35 - 283300
        print("Level D\n{}".format(int(res)))
    else:
        res = a * 0.45 - 655300 
        print("Level E\n".format(int(res)))
        

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
