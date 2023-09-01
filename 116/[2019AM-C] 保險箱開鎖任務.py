def main():
    def get_sum(a, b):
        if b > a:
            return (a + 40 - b) * 9
        
        return (a - b) * 9
        
    a, b, c, d = map(int, input().split())
    s = 1080
    s += get_sum(a, b)
    s += get_sum(c, b)
    s += get_sum(d, c)
    
    print(s)

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
