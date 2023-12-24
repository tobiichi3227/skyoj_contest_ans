def main():
    n=int(input())
    alllist=input().split()
    for i in range(len(alllist)):
        alllist[i]=list(alllist[i])
        sum = 0
        for j in range(1,len(alllist[i])):
            sum += int(alllist[i][j])
        if sum%n == 0:
            for j in range(len(alllist[i])):
                print(alllist[i][j],end="")
            print()
            exit()
    for j in range(len(alllist[0])):
        print(alllist[0][j],end="")
    print()

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

