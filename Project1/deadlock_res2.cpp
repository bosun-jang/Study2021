#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

using namespace std;

void worker(int& counter, timed_mutex& m) {
	for (int i = 0; i < 10000; i++) {
		m.try_lock_for(std::chrono::seconds(1));
		counter += 1;
		m.unlock();
	}
}
int main() {
	int counter = 0;
	timed_mutex m;
	std::vector<thread> workers;
	for (int i = 0; i < 4; i++) {
		workers.push_back(thread(worker, ref(counter), ref(m)));
	}
	for (int i = 0; i < 4; i++) {
		workers[i].join();
	}
	std::cout << "Counter ÃÖÁ¾ °ª :" << counter << std::endl;
}