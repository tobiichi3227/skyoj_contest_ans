import math

def miyuki_is_my_wife():
    n = int(input())
    is_prime = True
    for i in range(2, math.sqrt(n)):
        if n % i == 0:
            is_prime = False
            break
    
    if is_prime:
        print('prime\n')
        exit()
    print('composite\n')

if __name__ == '__main__':
    miyuki_is_my_wife()
