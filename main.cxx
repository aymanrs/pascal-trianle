#include <iostream>
#include <vector>

unsigned long long comb(int k, int n){
	unsigned long long s = 1;
	for(int i = (n-k+1);i <= n;i++) s *= i;
	for(int i = 2;i <= k;i++) s /= i;
	return s;
}

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
