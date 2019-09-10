A = [7,8,9,10,11,1,4,3,2,5,6,13,14,12,15]
n = len(A)
k = n
t = 0
for i in range(n):
    if(A[n-1-i]==n-i):
        k = k-1
    else:
        break
#print(k)
while k>0:
    m = 0
    if A[m]==k:
        t = t+k-1
        k = k-1
        A.pop(0)
        z = k
        for i in range(z):
            if(A[z-1-i]==z-i):
                k = k-1
            else:
                break
    else:
        for i in range(k):
            if A[i]>A[m]:
                m=i
        print(m)
        
        t =t + (m*(m+1)/2)
        x=A.pop(m)
        A.insert(m,A[0])
        A[0]=x
        #if k==3:
        #    break

#print(A)        
m = pow(10,9)+7
print(t%m)

