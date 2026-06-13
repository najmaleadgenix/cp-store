# x,y=map(int,input().split())
# s=input()
# cnt=0
# for i in s:
#     if i=='1' or i=='2' or i=='3' or i=='4' or i=='5' or i=='6' or i=='7' or i=='8' or i=='9' or i=='0':
#         cnt+=1

# if len(s)==x+y+1 and cnt==len(s)-1 and s[x]=='-':
#     print("Yes")
# else:
#     print("No")

# n=int(input())
# lst=list(map(int,input().split()))
# ans=lst[::-1]
# if ans==lst:
#     print("YES")
# else:
#     print("NO")

# n=int(input())
# s=input()
# ans=0
# for c in s:
#     ans+=int(c)
# print(ans)

# n,q=map(int,input().split())
# arr=list(map(int,input().split()))
# arr2=[]
# arr2.append(arr[0])
# for i in range(1,n):
#     arr2.append(arr2[i-1]+arr[i])

# for i in range(q):
#     l,r=map(int,input().split())
#     l-=1
#     r-=1
#     if l>0:
#         ans=arr2[r]-arr2[l-1]
#     else:
#         ans=arr2[r]
#     print(ans)

# s=list(map(str,input().split()))

# for idx in range(len(s)):
#     s[idx]=s[idx][::-1]
# print(*s)

# lst=input().split()

# s=input()
# s=s.replace("EGYPT", " ")
# print(s)

    