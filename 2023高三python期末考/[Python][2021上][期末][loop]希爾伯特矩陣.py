def gen_hilbert_matrix(n: int) -> list[list[str]]:
    matrix = [[""] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            matrix[i][j] = f"1/{i + j + 1}"

    return matrix


def main():
    n = int(input())
    hilbert_matrix = gen_hilbert_matrix(n)
    # for i in hilbert_matrix:
    #     for j in i:
    #         print(j, end=" ")
    #     print("")

    for i in hilbert_matrix:
        for idx, val in enumerate(i):
            l = len(i)
            if idx != l - 1:
                print(val, end=" ")

            else:
                print(val)

    # reverse mode
    # for i in hilbert_matrix[::-1]:
    #     for j in i:
    #         print(j, end=" ")
    #     print("")


if __name__ == "__main__":
    # miyuki is my wife

    main()
