# Use the file name mbox-short.txt as the file name
fname = input("Enter file name: ")
try:
    fh = open(fname)
except:
    print("Arquivo não existe", fname)
    quit()
x=0
y=0
count = 0
fh = open(fname)
for line in fh:
    if not line.startswith("X-DSPAM-Confidence:"):
        continue
    x = float(line[20:])
    y = y+x
    count = count+1
print('Average spam confidence:', y/count)