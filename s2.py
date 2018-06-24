def big(s1):
    z = len(s1)
    for i in range(z-1):
        for j in range(z-1-i):
            if s1[z-1-j] > s1[z-2-j]:
                s1[z-1-j], s1[z-2-j] = s1[z-2-j], s1[z-1-j]

def small(s2):
    z = len(s2)
    for i in range(z-1):
        for j in range(z-1-i):
            if s2[z-1-j] < s2[z-2-j]:
                s2[z-1-j], s2[z-2-j] = s2[z-2-j], s2[z-1-j]

def main():
    while (1):
        
        x = str( input( "Please input a number(function will stop, if you input '0'.):" ) )
        q = int(x) 
        times = 0
        if q == 0:
            break
        
        while (1):
 
            x1 = list(x)
            x2 = list(x)
            big(x1)
            small(x2)
            d = "".join(x1)
            c = "".join(x2)
            x = int(d) - int(c)
        
            y = str(x)
            y1 = list(y)
            y2 = list(y)
            big(y1)
            small(y2)
            f = "".join(y1)
            e = "".join(y2)
            y = int(f) - int(e)
    
            times += 1
            if x == y:
                break
            if times == 15:
                break
            
            x = str(x)
            print(x)
        print (x)

main()

