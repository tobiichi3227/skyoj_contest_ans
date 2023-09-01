def main():
    format_str = "{:.2f}"
    n = float(input())
    
    res = float()
    if 0 <= n <= 9:
        res = 87 * n
    elif 10 <= n <= 19:
        res = 81 * n
    elif 20 <= n < 39:
        res = 78 * n * 0.95
    elif n == 78:
        res = 10.00 * 300.00
    elif n == 87:
        res = 66.00 * 100.00
    elif n >= 100:
        print("VIP")
        quit()
    else:
        res = 60 * n
    
    print(format_str.format(res))

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
