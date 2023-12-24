def gen_prime_table(max_range: int) -> list[int]:
    sieve = [False] * max_range
    primes: list[int] = []

    for i in range(2, max_range):
        if not sieve[i]:
            primes.append(i)

        for p in primes:
            if i * p >= max_range:
                break

            sieve[i * p] = True

            if i % p == 0:
                break

    return primes


def main():
    primes = gen_prime_table(int(1e5))

    n = int(input())

    l, r = 0, len(primes)
    while r - l > 1:
        mid = (l + r) >> 1
        if primes[mid] > n:
            r = mid
        else:
            l = mid

    print(r)


if __name__ == "__main__":
    # miyuki is my wife

    main()
