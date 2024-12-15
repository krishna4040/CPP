#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;
using namespace std::chrono;

//* Three concet
// Duration
// clock
// timepoint

long fibonacci(unsigned n){
	if (n < 2) return n;
	return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
	// Using time point and system_clock
	time_point<system_clock> start, end;

	start = system_clock::now();
	cout << "f(42) = " << fibonacci(42) << '\n';
	end = system_clock::now();

	duration<double> elapsed_seconds = end - start;
	time_t end_time = system_clock::to_time_t(end);

	cout << "finished computation at " << ctime(&end_time) << "elapsed time: " << elapsed_seconds.count() << "s\n";
}
