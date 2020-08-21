# Solution to Mega Contest 1 Problem: DJ WALE BABU

string = input()
while "WUBWUB" in string: string = string.replace("WUBWUB", "WUB")
string = string.replace("WUB", " ")
print(string.strip())