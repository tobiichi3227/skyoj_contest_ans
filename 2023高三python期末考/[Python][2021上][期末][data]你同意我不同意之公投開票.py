VOTE_RESULT_INDEX = {
    "1": 0,
    "0": 1,
    "?": 2,
}


def main():
    table = [[0] * 3 for _ in range(4)]

    n = int(input())
    for _ in range(n):
        vote_result = input()
        for i in range(4):
            table[i][VOTE_RESULT_INDEX[vote_result[i]]] += 1

    # output
    for i in range(4):
        print(f"#{i + 1}, Yes:{table[i][0]}, No:{table[i][1]}, NA:{table[i][2]}")


if __name__ == "__main__":
    # miyuki is my wife

    main()
