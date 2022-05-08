def miyuki_is_my_wife():

    w, n = map(int, input().split())
    dead = False
    val = 0
    gg = int(w / n)
    for _ in range(n):
        val = int(input())
        if val < gg:
            dead = True
            break

    if dead:
        print(gg, '\nFAIL...\n')
        exit()
    print(gg, '\nNICEPLAY\n')

if __name__ == "__main__":
    miyuki_is_my_wife()
