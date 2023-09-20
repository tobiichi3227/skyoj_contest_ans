DATE_CNT = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

def main() -> None:
    year, month, day = map(int, input().split())
    cnt = day

    # for i in range(month - 1):
    #     cnt += DATE_CNT[i]
    cnt += sum(DATE_CNT[:(month - 1)])

    flag = False
    if year % 4 == 0:
        flag = True

    if year % 100 == 0:
        flag = False

    if year % 400 == 0:
        flag = True

    if flag == True and month > 2:
        cnt += 1

    print('{}/{}/{} is the {}-th day.'.format(year, month, day, cnt))

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
