#include <QCoreApplication>
#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <conio.h>
//ах роберт, если бы ты сразу указал в заголовочных файлах msoftcon - я бы понял что не стоит пытать написать эту программу. Не надо так, Роберт

using namespace std;

const int CPF = 5;                          //постоянные, кстати адреса постоянных переменных можно хранить только в указателях с модификатором const
const int maxHorses = 7;

class track;                                //можно ведь сразу описать класс, а не делать его прототип

class horse
{
private:
    const track* ptrTrack;
    const int horse_number;
    float finish_time;
    float distance_run;
public:
    horse(const int n, const track* ptrT);
    horse_number(n);
    ptrTrack(ptrT);
    distance_run(0.0)
    {
        //empty
    }
    ~horse()
    {

    }
    void display_horse(const float elapsed_time);
};

class track
{
private:
    horse* hArray[maxHorses];
    int total_horses;
    int horse_count;
    const float track_length;
    float elapsed_time;
public:
    track(float lenT, int nH);
    ~track();
    void display_track();
    void run();
    float get_track_len() const;
};

void horse::display_horse(float elapsed_time)
{
    set_cursor_pos(1 + int(distance_run * CPF), 2 + horse_number * 2);
    set_color(static_cast<color>(cBLUE + horse_number));
    char horse_char = '0' +static_cast<char>(horse_number);
    putchar( ' ' ); putchar( '\xDB'); putchar(horse_char); putchar('\xDB');
    if(distance_run < ptrTrack->get_track_len() + 1.0/CPF)
    {
        if(rand() % 3)
            distance_run += 0.2F;
        finish_time = elapsed_time;
    }
    else
    {
        int mins = int(finish_time) / 60;
        int secs = int(finish_time) - mins * 60;
        cout << "Time = " << mins << ":" << secs;
    }
}

track::track(float letT, int nH): track_length(lenT),total_horses(nH),horse_count(0), elapsed_time(0.0)
{
    init_graphics();
    total_horses = (total_horses > maxHorses) ? maxHorses : total_horses;
    for (int i; i < total_horses;i++)
    {
        hArray[i] = new horse(horse_count++, this);
    }
    time_t aTime;
    srand(static_cast<unsigned>(time(&aTime)));
    diplay_track();
}

track::~track()
{
    for(int i = 0; i < total_horses; i++)
        delete hArray[i];
}

void track::display_track()
{
    clear_screen();
    for (int j = 0;j <= track_length;j++)
    {
        for (int k = 1; k <= total_horses * 2 + 1;k++)
        {
            set_cursor_pos(j * CPF + 5, k);
            if(j == 0 || j == track_length)
            {
                cout << '\xDE';
            }
            else
            {
                cout << '\xB3';
            }
        }
    }

}

void track::run()
{
    while(!kbhit())
    {
        elapsed_time += 1.75;

        for (int i = 0; i < total_horses; i++)
        {
            hArray[i]->display_horse(elapsed_time);
            wait(500);
        }
    }
    getch();
    cout << endl;
}

float track::get_track_len() const
{
    return track_length;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    return a.exec();
}

