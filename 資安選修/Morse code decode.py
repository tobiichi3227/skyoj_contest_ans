def main():
    MORSE_CODE_DICT = {
        "A": ".-",
        "B": "-...",
        "C": "-.-.",
        "D": "-..",
        "E": ".",
        "F": "..-.",
        "G": "--.",
        "H": "....",
        "I": "..",
        "J": ".---",
        "K": "-.-",
        "L": ".-..",
        "M": "--",
        "N": "-.",
        "O": "---",
        "P": ".--.",
        "Q": "--.-",
        "R": ".-.",
        "S": "...",
        "T": "-",
        "U": "..-",
        "V": "...-",
        "W": ".--",
        "X": "-..-",
        "Y": "-.--",
        "Z": "--..",
        "1": ".----",
        "2": "..---",
        "3": "...--",
        "4": "....-",
        "5": ".....",
        "6": "-....",
        "7": "--...",
        "8": "---..",
        "9": "----.",
        "0": "-----",
        " ": "/",
    }
    MORSE_CODE_DICT = {val: key for key, val in MORSE_CODE_DICT.items()}

    text = input().split()
    text_len = len(text)

    for idx, word in enumerate(text):
        if idx != text_len - 1:
            print(MORSE_CODE_DICT[word], end=" ")
        else:
            print(MORSE_CODE_DICT[word], end="\n")


if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
