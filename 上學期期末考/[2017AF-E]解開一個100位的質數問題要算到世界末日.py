def main():
    def sieve(n):
        vis = [False] * n
        prime = []
        for i in range(2, n):
            if not vis[i]:
                prime.append(i)
            
            for p in prime:
                if i * p >= n:
                    break
                
                vis[i * p] = True
                if not i % p:
                    break
                    
        return prime
        
    prime = sieve(10000)
    
    n = int(input())
    c = 1
    
    for p in prime:
        if p >= n:
            break
        
        print("NOP({})={}".format(c, p))
        c += 1

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
