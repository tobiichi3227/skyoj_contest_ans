def main():
    a, b = map(int, input().split())

    for _ in range(a):
        h = set(input().split())
        s = set(input().split())
        print(len(h & s))
