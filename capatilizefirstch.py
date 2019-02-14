s=input()
l=s.split(" ")

for i in range(len(l)):
        if((l[i].isnumeric())!=True):
           
                s=''
                s1=''
                s=l[i]
  
                s1=l[i]
                s=s[0]
  
                s=chr(ord(s)-32)
                s=s+s1[1:]
                l[i]=s
k=''
k=" ".join(l)
print(k)
	
	
