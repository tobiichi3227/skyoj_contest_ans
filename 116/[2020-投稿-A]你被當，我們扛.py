def main():
    w, n = map(int, input().split())
    gg = int(w / n)
    dead = False
    
    for _ in range(n):
        val = int(input())
        if val < gg:
            dead = True
            
    if dead:
        print("{}\nFAIL...".format(gg))
    else:
        print("{}\nNICEPLAY".format(gg))

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
