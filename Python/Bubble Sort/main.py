  
# Arda Mavi - ardamavi.com

n = int(input("Kaç sayı girilecek ?"))

arr = []

for a in range(n):
    arr.append(int(input()))


for a in range(n):
    for b in range(n-1):
        if arr[a] < arr[b]:
            temp = arr[b]
                arr[b] = arr[a]
                    arr[a] = temp


print("Düzgün hsli: ")

for c in range(n):
    print(arr[c])


