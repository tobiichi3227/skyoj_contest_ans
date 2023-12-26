# 假設有n, m
import math


def get_irreducible_fraction(p: int, q: int) -> tuple[int, int]:
    hcf = math.gcd(p, q)
    return (p // hcf, q // hcf)


def main():
    n = map(int, input().split())
    assert n % 2 == 0, "N must a even number"
    # assert m % 2 == 0, "M must a even number"

    matrix = [list(map(int, input().split())) for _ in range(n)]
    pooled_matrix = [[""] * (m // 2) for _ in range((n // 2))]

    for i in range(0, n, 2):
        for j in range(0, m, 2):
            s = (
                matrix[i][j]
                + matrix[i + 1][j]
                + matrix[i][j + 1]
                + matrix[i + 1][j + 1]
            )

            p, q = get_irreducible_fraction(s, 4)
            if q == 1:
                pooled_matrix[i // 2][j // 2] = str(p)

            else:
                pooled_matrix[i // 2][j // 2] = f"{p}/{q}"

    # for i in pooled_matrix:
    #     for j in i:
    #         print(j, end=" ")
    #     print("")

    for i in pooled_matrix:
        l = len(i)
        for idx, val in enumerate(i):
            if idx != l - 1:
                print(val, end=" ")
            else:
                print(val)


if __name__ == "__main__":
    # miyuki is my wife

    main()
