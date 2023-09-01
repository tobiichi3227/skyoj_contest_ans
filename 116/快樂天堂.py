def main():
    a, b, c = map(int, input().split())
    
    d = float(a) * 0.4 + float(b) * 0.1 + float(c) * 0.8
    if a >= 90:
        d += 5.0
        
    if c < 25:
        d -= 10.0
        
    if d >= 60:
        print("PASS")
    elif d < 40:
        print("TOTALLY FAIL")
    else:
        print("FAIL")

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
