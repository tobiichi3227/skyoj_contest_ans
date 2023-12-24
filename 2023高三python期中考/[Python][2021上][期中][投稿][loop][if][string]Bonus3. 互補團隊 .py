def main():
    m, n = map(int, input().split())
    h = []
    mm = 0
    for i in range(n):
        h.append(set(input()))
    try:
        for i in range(n):
            for j in range(i+1, n):
                if len(h[i] | h[j]) == m and h[i] & h[j] == set():
                    mm = mm + 1
    except:
        pass
    if mm == 0:
        print('Can not finish the work!')
    else:
        print(mm)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

