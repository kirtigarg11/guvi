a,b=input().split()
co=0
f=0
for i in range(len(a)):
	if(co>1):
	    f=1
	    break
	if(a[i]!=b[i]):
	    co=co+1
            if(co>1):
                f=1
                break
  
    
if(f==1):
	print("no")
else:
	print("yes")
