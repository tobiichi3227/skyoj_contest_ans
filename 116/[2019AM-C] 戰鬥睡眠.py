def main():
    a, b, c, d = map(int, input().split())
    
    tmp = (c - a) * 60 + d - b
    if c < a:
        res = (24 - a + c) * 60 + d - b
    elif tmp < 0:
        res = 1440 + tmp
    else:
        res = tmp
        
    print(res)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
