x=int(input("enter a number:"))
print("the divisers are:")
for i in range(1,x+1,1):
    if(x%i==0):
       print(i)
