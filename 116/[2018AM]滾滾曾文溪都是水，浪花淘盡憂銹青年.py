def main():
    a, b = map(int, input().split())
    """
    a = int(input())
    b = int(input())
    """

    arr = [196.35, 357, 963.9, 1909.95]
    def cal(a, b):
        a = float(a)
        b = float(b)
        
        return a * 7.35 + b + 0.05 * a * 7.35
        
    f_s = "{:.2f}"
    if b < 1 or b > 4:
        print("Error!")
        return
        
    print(f_s.format(cal(a, arr[b - 1])))
    
if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
