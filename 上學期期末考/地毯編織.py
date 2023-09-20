def main():
    x, y = map(int, input().split())

    def get_output(i, f):
        if f:
            if i % 2:
                return "="

            return "#"

        if i % 2:
            return "#"

        return "#"

    for i in range(1, x + 1):
        if i % 2:
            for j in range(1, y + 1):
                print(get_output(j, True), end='')
        else:
            for j in range(1, y + 1):
                print(get_output(j, False), end='')

        print("")



if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
