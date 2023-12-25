import math

a = float(input())
b = float(input())
c = float(input())
print("{0:.2f}".format((-b + math.sqrt(b * b - 4 * a * c)) / 2 * a))
print("{0:.2f}".format((-b - math.sqrt(b * b - 4 * a * c)) / 2 * a))
