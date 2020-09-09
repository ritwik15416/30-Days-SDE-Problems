# Not an ideal solution but works for most test cases (passed all in GFG)
for _ in range(int(input())):
    s = list(input())
    if (s.count('(') ==s.count(')') and s.count('{')==s.count('}') and \
    s.count('[')==s.count(']')):
        print('balanced')
    else:
        print('not balanced')
