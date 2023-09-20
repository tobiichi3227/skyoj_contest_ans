n=int(input())
k=0
a=[]
a=list(input().split())
for i in range(len(a)):
    c=0
    for j in range(10):
        c+=int(a[i][j])
    if c%n==0:
        print(a[i])
        k=1
        break
if k==0:
    print("vacancy")
