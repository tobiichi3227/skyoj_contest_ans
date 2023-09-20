def main():
    p, q = map(int, input().split())

    def gcd(a, b):
        if b == 0:
            return a
        else:
            return gcd(b, a%b)

    gcd_res = gcd(p, q)
    gcd_res = int(gcd_res)

    print(str(round(p / gcd_res)) + " / " + str(round(q / gcd_res)))

if __name__ == '__main__':
    # miyuki is my wife and sister 深雪わ私の妻です
    main()
