def main():
    n = int(input())
    a = list(input().split())

    flag = False
    for i in range(len(a)):
        c = 0
        for j in range(10):
            c += int(a[i][j])
        if c % n == 0:
            print(a[i])
            flag = True
            break

    if not flag:
        print("vacancy")



if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

