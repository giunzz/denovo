#include <bits/stdc++.h>	
#include <cstdio>
#include<thread>
using namespace std;

#define numTest 10
#define Name "graph"

int cnt[10005];

int main(){

	cout << "building file cpp...\n";
    system("g++ " Name ".cpp -o " Name); 
	int total = 0;
	for(int i = 0; i < numTest; ++i){

		std::clock_t c_start = std::clock();
		auto t_start = std::chrono::high_resolution_clock::now();
		char command[125];
		sprintf(command,Name ".exe < ./tests/input.%03d > answer.%03d", i, i);
		
		puts(command);
		system(command);

		sprintf(command, "fc /C answer.%03d ./tests/output.%03d", i, i);
		puts(command);
		int result = system(command);
		total += 1 - result;
		if(1-result) cnt[i / 50]++;

		std::clock_t c_end = std::clock();
		auto t_end = std::chrono::high_resolution_clock::now();
		std::cout << std::fixed << std::setprecision(2) << "CPU time used: "
				<< 1000.0 * (c_end - c_start) / CLOCKS_PER_SEC << " ms\n"
				<< "Wall clock time passed: "
				<< std::chrono::duration<double, std::milli>(t_end-t_start).count()
				<< " ms\n";
	}
	for(int i = 0; i < numTest / 50; ++i){
		cout << "Test " << i * 50 << " -> " << (i + 1) * 50 << ": " << cnt[i] << "/" << 50 << endl;
	}
	cout << "AC: " << total << "/" << numTest;



    // for(int i = 0; i < numTest; ++i){
	// 	char command[125];
    // 	sprintf(command,Name ".exe < ./tests/input.%03d > answer.%03d", i, i);
	// 	puts(command);
    //     system(command);

	// 	sprintf(command, "fc answer.%03d ./tests/output.%03d", i, i);
	// 	puts(command);
	// 	system(command);

	// 	std::cout << "It took me " << clock << " microseconds." << std::endl;

	// }
}