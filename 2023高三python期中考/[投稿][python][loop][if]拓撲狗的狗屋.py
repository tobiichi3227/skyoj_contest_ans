x=int(input())
arr=[]
for i in range(x):
    arr.append([float(x) for x in input().split()])
arr.append(arr[0])
sum1=0
sum2=0
for i in range(x):
    sum1+=(arr[i][0]*arr[i+1][1])
    sum2+=(arr[i+1][0]*arr[i][1])
ans=abs((sum1-sum2)/2)
if ans==0: print('Woof!')
else: print('{0:.4f}'.format(ans))
