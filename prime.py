a=int(input("enter number="))

if(a<2):
    print("none")
elif(a==2):
    print("prime")
else:
    for val in range(2,a):
        if a%val==0:
            print("composite")
            break
    else:
        print("prime")        
  
              
      
      
    