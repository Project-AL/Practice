

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


/*
Великолепный град рабов,
Казарм, борделей и дворцов,
С твоею ночью, гнойно-ясной,
С твоей холодностью ужасной
К ударам палок и кнутов.
С твоею подлой царской службой,
С твоим тщеславьем мелочным,
С твоей чиновнической жопой,
Которой славны, например,
И Калайдович, и Лакьер.
С твоей претензией — с Европой
Идти и в уровень стоять.
Будь проклят ты, еена мать!
*/