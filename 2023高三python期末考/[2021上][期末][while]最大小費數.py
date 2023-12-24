def main1():
    x = int(input())

    dp1, dp2, dp3 = 1, 1, 0
    for _ in range(2, 5000000):
        dp3 = dp2 + dp1
        tmp = dp2
        dp2 = dp3
        dp1 = tmp

        if dp2 >= x:
            print(dp1)
            return


# binary search
def main2():
    x = int(input())

    dp = [0] * 100000
    dp[0], dp[1] = 1, 1

    for i in range(2, 50000):
        dp[i] = dp[i - 1] + dp[i - 2]

    def check(mid):
        if dp[mid] >= x:
            return True

        return False

    l, r = 0, 100000
    while r - l > 1:
        mid = (l + r) >> 1

        if check(mid):
            r = mid
        else:
            l = mid

    print(dp[l])


if __name__ == "__main__":
    # miyuki is my wife

    # main1()
    # main2()
    pass
