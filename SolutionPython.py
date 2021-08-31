def palindrome(N):
    rev = 0
    temp = N
    while (N > 0):
        a = N % 10
        rev = (rev * 10) + a
        N = N // 10
    if (temp == rev):
        return True
    else:
        return False

print(palindrome(121))
print(palindrome(1221))
print(palindrome(1231))

