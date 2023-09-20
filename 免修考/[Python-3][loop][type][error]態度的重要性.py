def main():
    while True:
        string = input()

        if string == "0":
            return

        string = string.lower()
        cnt = 0
        for ch in string:
            if 'a' <= ch <= 'z':
                cnt += ord(ch) - 96

            else:
                print("Fail")
                return

        print(cnt)

main()
