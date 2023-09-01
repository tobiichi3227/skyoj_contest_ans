def main():
    m, n, k = map(int, input().split())
    arr = []
    for _ in range(n):
        val = int(input())
        arr.append(val)
        
    ok = True
    all_devide = (arr[-1] % k == 0)
    
    for i in range(n - 1):
        if arr[i] % k:
            all_devide = False
        
        if m == 1:
            if not arr[i] < arr[i + 1]:
                ok = False
        elif m == 2:
            if not arr[i] == arr[i + 1]:
                ok = False
        elif m == 3:
            if not arr[i] > arr[i + 1]:
                ok = False
                
    if ok:
        print("1")
    else:
        print("0")
    
    if all_devide:
        print("Oh, win10 I love you.")
    else:
        print("Please, I want to meet win10.")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
