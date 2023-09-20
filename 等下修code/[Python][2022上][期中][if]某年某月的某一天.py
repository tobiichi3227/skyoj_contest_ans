n=input()
n=n.replace("/","  ")
y,m,d=n.split()
y=int(y)
m=int(m)
d=int(d)
print("The ",end="")
ans=d
cal=[0,31,28,31,30,31,30,31,31,30,31,30,31]
for i in range (1,len(cal)):
    if m>i:
        ans+=cal[i]
if y%4==0 and y%100!=0 or y%400==0 :
    if m>2:
        ans+=1
print(ans,end="th day.\n")
