n=int(input())
s=""
lst=list((" ",0))
lst.clear()
lst2=[[],[],[]]
lst2.clear()
for i in range(0,n,1):
  s=input()
  mp=s.split()
  lst.append(str(mp[0]))
  ac=0
  time=0
  for j in range(1,len(mp),1):
    if mp[j].find('(--)')==-1:
      ac+=1
      mp2=mp[j].split('(')
      time+=(int(mp2[0])-1)*20
      mp3=mp2[1].split(')')
      time+=(int(mp3[0]))
  lst.append((ac,time))
  lst2.append(list(lst))
  lst.clear()

import functools as fc
def cmp(a,b):
  if a[1][0] > b[1][0]:
    return -1
  elif a[1][0] == b[1][0]:
    if a[1][1] > b[1][1]:
      return 1
    return -1
  return 1
lst2=sorted(lst2,key=fc.cmp_to_key(cmp))

print(" rank\t  name\t ac\t time")
print("=====\t======\t===\t=====")
for i in range(0,n,1):
  for j in range(0,5-len(str(i+1))):
    print(" ",end="")
  print(i+1,end="\t")
  for j in range(0,6-len(lst2[i][0]),1):
    print(" ",end="")
  print(lst2[i][0],end="\t")
  for j in range(0,3-len(str(lst2[i][1][0])),1):
    print(" ",end="")
  print(lst2[i][1][0],end="\t")
  for j in range(0,5-len(str(lst2[i][1][1])),1):
    print(" ",end="")
  print(lst2[i][1][1])
