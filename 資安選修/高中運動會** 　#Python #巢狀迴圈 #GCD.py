def main() -> None:
    n = int(input())
    people_list = []

    gcd = lambda a, b: (gcd(b, a % b) if a % b else b)

    for _ in range(n):
        tmp = int(input())
        people_list.append(tmp)

    if n == 1:
        print(n)
        return

    elif n == 2:
        gcd_tmp = gcd(people_list[0], people_list[1])
        print(gcd_tmp)
        return

    else:
        gcd_tmp = gcd(people_list[0], people_list[1])
        for i in range(2, n):
            gcd_tmp = gcd(gcd_tmp, people_list[i])

        print(gcd_tmp)
        return


if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

