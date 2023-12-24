MONTH_DAYS=[0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
def main():
    y, m, d = map(int, input().replace("/", " ").split())
    ans=d
    for i in range (1, len(MONTH_DAYS)):
        if m > i:
            ans += MONTH_DAYS[i]

    if y % 4 == 0 and y % 100 != 0 or y % 400 == 0:
        if m > 2:
            ans += 1

    print(f"The {ans}th day.")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

