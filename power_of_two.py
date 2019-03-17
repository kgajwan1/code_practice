T = int(input())

for _ in range(T):
    N = int(input())
    if(N==0): 
        print('NO')
    elif(N>0):
        m = N-1;
        # and of number with pervious number, (in binary, power of 2 marks switch between 2^n and 2^n-1)
        res = N & m;
        if (res==0):
            print('YES')
        else: 
            print('NO')
