def main() -> None:
    narcissistic_number_list = [i for i in range(1, 10)]
    narcissistic_number_list.extend([153, 370, 371, 407, 1634, 8208, 9474, 54748, 92727, 93084, 548834])
    n = int(input())

    if n == 2:
        print('GG')
        return

    flag = False
    for num in narcissistic_number_list:
        if str(num).__len__() == n:
            print(num)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
