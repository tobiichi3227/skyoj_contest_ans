a=input().split()
b=int(a[0])
c=int(a[1])
d=int(a[2])

if b>c and b>d:
    if b<(c+d):
        if c>d:
            print("B")
        else:
            print("C")
    else:
        print("A")
if c>b and c>d:
    if c<(b+d):
        if b>d:
            print("A")
        else:
            print("C")
    else:
        print("B")
if d>c and d>b:
    if d<(c+b):
        if c>b:
            print("B")
        else:
            print("A")
    else:
        print("C")
