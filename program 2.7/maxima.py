x=[10,20,15,2,23,90,67]

def maxima(m):
    a=m[0]
    b=len(m)
    
    for i in range (0,b):
        if(i+2<=b):
            
            if(m[i+1]>m[i] and m[i+1]>m[i+2]):
                print('the index of maxia is' ,i+1)
                print ("maxima of given array is" ,m[i+1])
            else :  
                continue
















maxima(x)
