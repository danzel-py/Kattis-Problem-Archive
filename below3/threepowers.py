
while(1):
    x = int(input())
    if(x == 0):
        break
    elif(x == 1):
        print("{ }")
        continue
    elif(x == 2):
        print("{ 1 }")
        continue
    x-=1
    binarynum = format(x,'b')
    print("{", end = ' ')
    printed = False
    length = len(binarynum)
    for i in range(length):
        if(binarynum[length-i-1] == "1"):
            if(not printed):
                printed = True
                print(3**(i),end = '')
                continue
            print(", ",end='')
            print(3**(i),end='')
    print(" }")
        
        

