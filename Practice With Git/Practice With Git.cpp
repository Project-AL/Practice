

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void DoWork()
{
    for (time_t i = 0; i < 10; i++) {
        cout << "ID thread = " << this_thread::get_id() << " DoWork " << i <<endl;
        this_thread::sleep_for(chrono::milliseconds(3000));
    }
}

int main()
{
    thread ti(DoWork);

    for (time_t i = 0; i < 10; i++) {
        cout << "ID thread = " << this_thread::get_id() << " main " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(1500));
    }

    ti.join();
}