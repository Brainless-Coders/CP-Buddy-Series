# Solution to Mega Contest 1 Problem: Again Silly Mistake
# [Disclaimer] Not entirely correct, passed 15/20 testcases. Any future update/improvements for the same are welcome #

raw_string = input()
strings = raw_string.split()
end_strings = []
for string in strings:
    if (string == string.upper() or string[1:]==string[1:].upper()): string = string[0].upper() + string[1:].lower()
    end_strings.append(string)
print(" ".join(end_strings))