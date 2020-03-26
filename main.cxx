#include <iostream>
#include <vector>

int main(){
	const int seed = 1;
	std::vector<std::vector<unsigned long long>> triangle = {{0, 0, seed, 0, 0}};
	std::cout << seed << '\n';
	for(int n = 1;n < 11;n++){
		triangle.push_back(std::vector<unsigned long long>(n * 2 + 5, 0));
		for(int k = 0;k < n*2+1;k++){
			triangle[n][k+2] = triangle[n-1][k] + triangle[n-1][k+1] + triangle[n-1][k+2];
			std::cout << triangle[n][k+2] << ' ';
		}
		std::cout << '\n';
	}
	return 0;
}
