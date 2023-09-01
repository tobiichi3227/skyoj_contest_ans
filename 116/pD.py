def main():
    a, b, = map(int, input().split())
    
    s = 0
    for i in range(2, 9):
        val = int(input())
        s += val * i
        
    if (a < 20 or a > 41) and (b < 0 or b > 2):
        print("Terrible Fake")
    elif a < 20 or a > 41:
        print("Fake city")
    elif b < 0 or b > 2:
        print("The fourth gender")
    else:
        t1 = (a % 10) * 2 + (a / 10) * 3
        t2 = b + s
        t4 = (t1 + t2) % 10
        t5 = 10 - t4
        
        if not t4:
            print("0")
        else:
            print(t5)
        
    

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
