def main():
    la = ["Z", "z", "Y", "y", "X", "x"]
    a = input()
    for i in a:
        if i == "9":
            la.pop()
        else:
            la.append(i)

    for o in reversed(la):
        print(o, end="")
    print("")


if __name__ == "__main__":
    main()
