Q,E=list(input()),list(input())
ac=0
bc=0
for i in range(4):
    if int(E[i])==int(Q[i]):
        ac+=1
    elif E[i] in Q:
        bc+=1
print(str(ac)+"A"+str(bc)+"B")
