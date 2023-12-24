def main():
    n = int(input())

    def get_sum(x):
        return int(((x + 1) * x) // 2)

    s = get_sum(int(n / 21)) * 21
    print(s)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

