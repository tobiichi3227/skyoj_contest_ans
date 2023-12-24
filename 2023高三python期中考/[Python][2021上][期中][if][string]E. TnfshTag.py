def main():
    a,b,c,d=input().split()
    a1=int(a[len(a)-1])
    b1=int(b[len(b)-1])
    c1=int(c[len(c)-1])
    d1=int(d[len(d)-1])
    a2=int(a[0])
    b2=int(b[0])
    c2=int(c[0])
    d2=int(d[0])
    a3=int(a[len(a)-2])
    b3=int(b[len(b)-2])
    c3=int(c[len(c)-2])
    d3=int(d[len(d)-2])
    x=max(a1,b1,c1,d1)
    y=min(a2,b2,c2,d2)
    z=max(a3,b3,c3,d3)-min(a3,b3,c3,d3)
    if z>5:
        z=z-5
    print(f'({y},{x})@{z}F')

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

