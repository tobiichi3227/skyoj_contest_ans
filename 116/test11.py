def cmp(x):
    return x > 200

def miyuki_is_my_wife():
    n = int(input())
    next = 2000
    arr = list(map(int, input().split()))
    arr_sum = sum(arr)
    cnt = sum(cmp(x) for x in arr)
    
    if cnt > 0:
        next = next * 0.95
    if arr_sum > next:
        next = next - (sum - 2000)
    
    print(next, '\n')

if __name__ == "__main__":
    miyuki_is_my_wife()
