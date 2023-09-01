def main():
    a, b = map(int, input().split())
    
    def get_output(b, c, flag):
        if flag:
            if b > c:
                return "Computer Wins!"
            else:
                return "Player Wins!"
        
        if b < c:
            return "Computer Wins!"
        else:
            return "Player Wins!"
            
    if a % 2:
        if b % 2:
            print("Tie!")
        else:
            print(get_output(b, 3, (a == 1)))
            
    else:
        if not b % 2:
            print("Tie!")
        else:
            print(get_output(b, 2, (a == 2)))
    

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
