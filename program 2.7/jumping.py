x=int(input("enter the number  upto which you want to get jumping number"))

def jump(n):
    
    if n>10:
        for i in range (0,10):
            print (i)
        r=0
        for k in range (10,n+1):
           
           i=k*1
           flag=0
           while(i>0): 
               r=i%10
               
               i=i/10
               s=i%10
               
                   
               if(s-r==1):
                    flag=1
                       
               elif(r-s==1):
                    flag=1
                   
               else:
                    flag=0
                    break
               if(i<10):
                   break
               
           if flag==1:
               print(k)
        
    else:
        for i in range (0,n+1):
            print(i)


jump(x)

