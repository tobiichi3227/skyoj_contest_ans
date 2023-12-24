def solve():
    s = input().split()
    ans = ""

    if len(s[0]) == 1:
        # I mode
        offset = -(ord(s[0]) - ord('I'))
    else:
        # You mode
        offset = -(ord(s[0][0]) - ord('Y'))

    for idx, word in enumerate(s):
        for ch in word:
            if ch.isalpha():
                if ch.islower():
                    ch = chr(((ord(ch) - ord('a') + offset) % 26) + ord('a'))
                else:
                    ch = chr(((ord(ch) - ord('A') + offset) % 26) + ord('A'))

            ans += ch

        if idx != len(s) - 1:
            ans += " "

    return ans

def main():
    t = int(input())
    for _ in range(t):
        print(solve())

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
