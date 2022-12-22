def toBinary(s):
    nums = ''.join(format(i, '08b') for i in bytearray(s, encoding ='utf-8'))
    return nums[:]
    
print(toBinary("code"))
