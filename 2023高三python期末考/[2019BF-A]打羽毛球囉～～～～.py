tp = input()
a = "91195278778119"
b = ""
for i in range(len(tp)):
    if tp[i] == "T":
        a = a[0:-1]
    else:
        a += tp[i]
    # if tp[i] == "T":
    #     a = a[0:-1]
    # elif tp[i] == "1":
    #     a += "1"
    # elif tp[i] == "2":
    #     a += "2"
    # elif tp[i] == "3":
    #     a += "3"
    # elif tp[i] == "4":
    #     a += "4"
    # elif tp[i] == "5":
    #     a += "5"
    # elif tp[i] == "6":
    #     a += "6"
    # elif tp[i] == "7":
    #     a += "7"
    # elif tp[i] == "8":
    #     a += "8"
    # elif tp[i] == "9":
    #     a += "9"

for i in range(len(a)):
    b += a[-(i + 1)]
print(b)
