def main():
    num = int(input())
    factors = []
    for i in range(2, num):
        if num % i == 0:
            factors.append(i)

    print(1, end=" ")
    for i in range(1, len(factors), 2):
        print(factors[i], end=" ")
    print("")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

