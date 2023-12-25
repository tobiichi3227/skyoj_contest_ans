def main():
    a, b, c, d, e = input().split()
    G = max(a[0], b[0], c[0])
    F = min(c[-1], d[-1], e[-1])
    k1 = int(min(a[1], b[1], c[1]))
    k2 = int(max(c[-2], d[-2], e[-2]))
    K = k1*k2
    print(f"({G},{F},{K})")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

