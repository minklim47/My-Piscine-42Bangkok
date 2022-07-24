total_permu=[[1,2,3,4],[1,2,4,3],[1,3,2,4],[1,3,4,2],[1,4,2,3],[1,4,3,2],[2,1,3,4],[2,1,4,3],[2,3,1,4],[2,3,4,1],[2,4,1,3],[2,4,3,1],[3,1,2,4],[3,1,4,2],[3,2,1,4],[3,2,4,1],[3,4,1,2],[3,4,2,1],[4,1,2,3],[4,1,3,2],[4,2,1,3],[4,2,3,1],[4,3,1,2],[4,3,2,1]]

#for i in range(24) :
#    for j in range(i+1,24) :
#        if(total_permu[i]==total_permu[j]) :
#            print("error")
            
board=[]
for i in range(4) :
    x=[0]*4
    board.append(x)
#print(board)

check=input().split()
result=[]









def count_view(x) : #x is list ex.[1,2,3,4]
    count=0
    maximum=0
    for i in x :
        if i>maximum :
            maximum=i
            count+=1
    return count

#print(count_view([1,2,4,3]))


#print(board)



total_board_case=[]
for i in range(24) :
    for j in range(24) :
        for k in range(24) :
            for l in range(24) :
                board[0]=total_permu[i]
                board[1]=total_permu[j]
                board[2]=total_permu[k]
                board[3]=total_permu[l]
                #print(board)                 #board มีได้ 24*24*24*24 แบบ

            
                status=True
                
                if((count_view(board[0]) != int(check[8])) or (count_view(board[1]) != int(check[9])) or (count_view(board[2]) != int(check[10])) or (count_view(board[3]) != int(check[11]))) :
                    status = False
                             
                if((count_view(board[0][::-1]) != int(check[12])) or (count_view(board[1][::-1]) != int(check[13])) or (count_view(board[2][::-1]) != int(check[14])) or (count_view(board[3][::-1]) != int(check[15]))) :
                    status = False
                    
                    
                    
                v_board=[]
                for h in range(4) :
                    x=[0]*4
                    v_board.append(x)    
                    
                v_board[0]=[board[0][0],board[1][0],board[2][0],board[3][0]]
                v_board[1]=[board[0][1],board[1][1],board[2][1],board[3][1]]
                v_board[2]=[board[0][2],board[1][2],board[2][2],board[3][2]]
                v_board[3]=[board[0][3],board[1][3],board[2][3],board[3][3]]
                
                if((count_view(v_board[0]) != int(check[0])) or (count_view(v_board[1]) != int(check[1])) or (count_view(v_board[2]) != int(check[2])) or (count_view(v_board[3]) != int(check[3]))) :
                    status = False
                             
                if((count_view(v_board[0][::-1]) != int(check[4])) or (count_view(v_board[1][::-1]) != int(check[5])) or (count_view(v_board[2][::-1]) != int(check[6])) or (count_view(v_board[3][::-1]) != int(check[7]))) :
                    status = False
                
                
                    
                    
                if((status == True) and (board not in total_board_case)) :
                    add=[]
                    for z in range(4) :
                        add.append(board[z])
                    total_board_case.append(add)
                    
print(total_board_case)

for b in total_board_case :
    for i in range(4) :
        for j in range(4) :
            for i2 in range(4) :
                for j2 in range(4) :
            
                    if((b[i][j] == b[i2][j2]) and ((j==j2 and i!=i2) or (i==i2 and j!=j2))):
                        if(b in total_board_case) :
                            total_board_case.remove(b)
        
print(total_board_case)