t = int(input())
for _ in range(t):
    n = int(input())
    s = input()

    ans = False
    for i in range( 1 , len(s)-1 ):
        if ( s.count( s[i] ) >= 2 ):
            ans = True
            break

    if ( ans == True ):
        print("YES")
    else :
        print("NO")         
