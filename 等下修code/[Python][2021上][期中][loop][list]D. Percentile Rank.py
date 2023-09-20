x = list(map(int,input().split()))
x = sorted(x,reverse=True)
for i in range(len(x)):
    pr = (100/len(x))*(len(x)-i-1)+(100/len(x))*0.5
    print('{0}: {1:.0f}'.format(x[i], pr))
