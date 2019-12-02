x=int(input("enter the number to get the binary value"))
y=int(input("enter the number 2 to get binary value"))



def swap(x):
    b1=x%10000
    b2=x/10000
    b1=b1*10000+b2
    print("after swapping digits",b1)
    



    
def countSetBits( n ): 
    count = 0
    while n: 
        count += n & 1
        n >>= 1
    return count 
      
def FlippedCount(a , b): 
  
    return countSetBits(a^b) 
  
def bin(x,y):
    print( FlippedCount(x, y),"no.of digit should have to flipped to get",x,"from" ,y) 
    b1=0
    b2=0
    p=1
    q=1
    
    for i in range (0,8):
       m=x%2
       
 
       b1=b1+m*p
       
       p*=10
       x=x/2
       m=y%2
       b2+=m*q
       q*=10
       y=y/2

    swap(b1)
    swap(b2)   
    print(b1,b2)
    
   
    
bin(x,y)
        
