def main():
    str2 = input()
    str1 = input()

    a_cnt = 0
    b_cnt = 0
    for i in range(4):
        if str1[i] == str2[i]:
            a_cnt += 1

        elif str1[i] in str2:
            b_cnt += 1

    print(f"{a_cnt}A{b_cnt}B")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

