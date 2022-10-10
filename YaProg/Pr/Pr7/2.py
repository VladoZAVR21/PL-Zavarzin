s = "aaa bbb ccc ddd"
s2 = ""
sm = s.split(" ")
sm2 = sm[::-1]
s = ""
for item in sm2:
    s2 = s2+item+' '
print(s2)

for item in reversed(sm):
    s = s + item + ' '
print(s)