def main():
    x = list(map(int,input().split()))
    x.sort(reverse=True)

    len_x = len(x)
    for i in range(len_x):
        pr = (100 / len_x) * (len_x - i - 1) + (100 / len_x) / 2
        print(f"{x[i]}: {pr:.0f}")


if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

