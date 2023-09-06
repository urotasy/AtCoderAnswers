n = int(input())
s = [input() for i in range(n)]

ans = 'Yes'

first_char_list = ['H', 'D', 'C', 'S']
second_char_list = ['A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K']
s_hash = {}

for i in range(n):
    si = s[i]
    if ( si[0] not in first_char_list or
         si[1] not in second_char_list or
         si in s_hash ):
         ans = 'No'
         break
    s_hash[si] = True

print(ans)