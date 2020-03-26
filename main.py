seed = 1
triangle = [[0, 0, seed, 0, 0]]
print(seed)
for n in range(1, 11):
	triangle.append([0] * (n*2+5))
	for k in range(0, n*2+1):
		triangle[n][k+2] = triangle[n-1][k] + triangle[n-1][k+1] + triangle[n-1][k+2]
		print(triangle[n][k+2], end=' ')
	print()
		
