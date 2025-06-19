t = int(input())
for _ in range(t):
    n, s = map(int, input().split())
    a = list( map( int, input().split()) )

    if ( s >= a[n-1] ):
        print( s - a[0])
    elif ( s <= a[0] ): 
        print( a[n-1] - s)
    else:
        print( min( s-a[0] , a[n-1] - s) + a[n-1] - a[0] )       
