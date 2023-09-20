a=int(input())
c=[]
d=0
e=1
for b in range(2,a):
    if a%b==0:
        c.append(b)
        d=d+1
print(1,end=" ")
while e<d:
    print(c[e],end=" ")
    e=e+2
print()
