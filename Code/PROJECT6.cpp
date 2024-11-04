#include<iostream>
#include<thread>
#include<queue>
#include<mutex>
#include<condition_variable>
#include<chrono>

using namespace std;

const int max_items = 5; // dinh nghia so luong trong store 
queue<int> warehouse;// dung queue luu tru
mutex mtx;// mutex bao ve store 

//Dieu kien de dong bo hoa san xuat va tieu thu
condition_variable produce_cv, consume_cv;

void producer(){
	for(int i = 1; i <= 10; ++i){
		unique_lock<mutex> lock(mtx);
		while (warehouse.size() >= max_items) {
			cout<<"Kho da day, produce dang cho...\n";
			produce_cv.wait(lock); 
		} 
		warehouse.push(i);
		cout<<"San pham "<<i<<"Da duoc san xuat.\n";
		lock.unlock();
		consume_cv.notify_one();
		this_thread::sleep_for(chrono::milliseconds(500)); 
	} 
} 
//Hàm tieu thu
void consumer(){
	for(int i = 1; i <= 10; ++i){
		unique_lock<mutex> lock(mtx);
		while(warehouse.empty()){
			cout<<"Kho da het san pham, consumer dang cho...\n";
			consume_cv.wait(lock); 
		} 
		int item = warehouse.front();
		warehouse.pop();
		cout<<"San pham "<<item<<"da duoc tieu thu.\n";
		lock.unlock();
		produce_cv.notify_one();
		this_thread::sleep_for(chrono::milliseconds(1000)); 
	} 
} 
int main(){
	thread producer_thread(producer);
	thread consumer_thread(consumer); 
    
    producer_thread.join();
	consumer_thread.join();
	
	return 0; 
} 
