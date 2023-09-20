def main() -> None:
    ciphertxt = input()

    cipher = {chr((i * 4 + 15) % 27 + 97) : chr(i + 97) for i in range(26)}
    cipher['l'] = '_'
    cipher['_'] = 'x'
    for ch in ciphertxt:
        print(cipher[ch], end='')
    print("")


if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
