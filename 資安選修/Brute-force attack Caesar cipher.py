s2=input()
mp2=input()
s=""
mp=""
for i in range(0,len(s2),1):
  if ord(s2[i])>=97 and ord(s2[i])<=122:
    s+=chr(ord(s2[i])-32)
  else:
    s+=s2[i]
for i in range(0,len(mp2),1):
  if ord(mp2[i])>=97 and ord(mp2[i])<=122:
    mp+=chr(ord(mp2[i])-32)
  else:
    mp+=mp2[i]
flag=0
for i in range(0,len(mp)-1,1):
  for j in range(0,len(s),1):
    flag=0
    for k in range(0,len(mp),1):
      if s[j]==mp[k]:
        print(mp[(k+i+1)%len(mp)],end="")
        flag=1
    if flag==0:
      print(s[j],end="")
  print("")
