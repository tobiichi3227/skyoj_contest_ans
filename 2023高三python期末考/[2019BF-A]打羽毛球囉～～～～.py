def main():
    b = [9, 1, 1, 9, 5, 2, 7, 8, 7, 7, 8, 1, 1, 9]
    oup = ""
    inp = input()
    for i in range(len(inp)):
        if inp[i] == "T":
            b.pop(-1)
        else:
            b.append(inp[i])
    b.reverse()
    for j in b:
        oup += str(j)
    print(oup)


if __name__ == "__main__":
    main()
