n, m = map(int, input().split())

connection = [[] for i in range(n+1)]
for i in range(m):
    a, b = map(int, input().split())
    connection[a].append(b)
    connection[b].append(a)

for i in range(1, n+1):
    connection[i].sort()
    print(len(connection[i]), *connection[i])
