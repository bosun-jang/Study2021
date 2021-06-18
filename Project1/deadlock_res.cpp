#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

using namespace std;

void worker(int& counter, mutex& m) {
	for (int i = 0; i < 10000; i++) {
		std::lock_guard<std::mutex> lock(m);
		counter += 1;
	}
}
int main() {
	int counter = 0;
	mutex m;
	std::vector<thread> workers;
	for (int i = 0; i < 4; i++) {
		workers.push_back(thread(worker, ref(counter), ref(m)));
	}
	for (int i = 0; i < 4; i++) {
		workers[i].join();
	}
	std::cout << "Counter ÃÖÁ¾ °ª :" << counter << std::endl;
}