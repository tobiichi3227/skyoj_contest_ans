def main():
    grid = []
    for i in range(3):
        l = list(map(int, input().split()))
        grid.append(l)
    
    a_win, b_win = False, False
    
    for i in range(3):
        sum1, sum2 = 0, 0
        for j in range(3):
            sum1 += grid[i][j]
            sum2 += grid[j][i]
        
        if sum1 == 0 or sum2 == 0:
            a_win = True
        
        if sum1 == 3 or sum2 == 3:
            b_win = True
    
    sum1 = grid[0][0] + grid[1][1] + grid[2][2]
    sum2 = grid[0][2] + grid[1][1] + grid[2][0]
    if sum1 == 0 or sum2 == 0:
            a_win = True
        
        if sum1 == 3 or sum2 == 3:
            b_win = True
    
    if a_win and b_win:
        print("Both win")
    elif a_win:
        print("A win")
    else:
        print("B win")
    

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()
