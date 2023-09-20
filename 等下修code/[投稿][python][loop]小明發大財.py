n,a=input().split()
a=int(a)
g=input().split()
for i in range(len(g)):
    g[i]=int(g[i])
    g[i]-=a
p=[]
if g[0]>=0:
    p.append(g[0])
else:
    p.append(0)
for i in range(1,len(g)):
    if g[i]+p[i-1]>g[i]:
        p.append(g[i]+p[i-1])
    else:
        p.append(g[i])
print(max(p))
