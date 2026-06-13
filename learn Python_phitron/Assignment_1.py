# https://codeforces.com/group/MWSDmqGsZm/contest/219856
s=input()
lst=[]
l=0
r=0
suru=0
for idx,ch in enumerate(s):
    if(ch=='L'):
        l+=1
    else:
        r+=1
    if l==r:
        l=0
        r=0
        lst.append(s[suru:idx+1])
        suru=idx+1
print(len(lst))
for i in lst:
    print(i)
      
      
        
# https://atcoder.jp/contests/arc087/tasks/arc087_a      
from collections import Counter  
n=int(input())
lst=list(map(int,input().split()))
counts=Counter(lst)
ans=0
for i in counts:
    if i<counts[i]:
        ans=ans+counts[i]-i
    elif i>counts[i]:
        ans=ans+counts[i]
print(ans)



# Write the difference between List and Dictionary of Python.
# Write about *args and **kwargs of Python with proper examples.

def args_function(a,b,*args):
    print(a,b,args)
args_function(2,3,4,5,6,7)

def kargs_function(name,roll,**kargs):
    print(name,roll,kargs)
kargs_function("Naziba", 48, address="Kushtia", Univarsity="IU")



# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P   
n=int(input())
lst=list(map(int,input().split()))
flag=0
for i in lst:
    if i%2==1:
        flag=1
        break
if flag==1:
    print(0)
else:
    lstt=[]
    cnt=0
    for i in lst:
        while True:
            if i==0 or i%2==1:
                break
            i/=2
            cnt+=1
        lstt.append(cnt)
        cnt=0
    mn=min(lstt)
    print(mn)



# Take a number from the user and draw a pyramid using PyAutoGUI
import pyautogui
import time
n= int(input())
time.sleep(3)
for i in range(1,n+1):
    for j in range(i):
        pyautogui.write("*", interval=0)
    pyautogui.press("Enter")

