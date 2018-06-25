#韓信點兵
def count(x, y, z):
   for i in range(1, 106):
      if i % 3 == x:
         for j in range(1, 106):
            if j % 5 == y:
               for k in range(1, 106):
                  if k % 7 == z:
                     if i == j == k:
                        print("number of the sodiers is:", i, "+105n (n=1,2,3...)")

def main():
   a = int(input ( "The first number:" ))
   b = int(input ( "The second number:" ))
   c = int(input ( "The third number:" ))
   count(a, b, c)

main()
      

