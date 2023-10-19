#include <ncurses.h>
#include <iostream>
#include <deque>
#include <cstdlib>
#include <ctime>

const int lebar = 80;
const int tinggik = 24;
const char HEAD_CHAR = 'H';
const char BODY_CHAR = '+';
const char APPLE_CHAR = '$';

using namespace std;
struct Position {
    int x;
    int y;
    bool operator==(const Position& other) const {
        return (x == other.x && y == other.y);
    }
};

int main() {
    initscr();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    timeout(100);

    deque<Position> ular;
    ular.push_front({lebar / 2, tinggik / 2});
    int direction = KEY_RIGHT;

    Position apple = {rand() % lebar, rand() % tinggik};

    while (true) {
        clear();

        if (ular.front() == apple) {
            ular.push_back(ular.back());
            apple = {rand() % lebar, rand() % tinggik};
        }

        for (const auto& pos : ular) {
            mvaddch(pos.y, pos.x, (pos == ular.front()) ? HEAD_CHAR : BODY_CHAR);
        }

        mvaddch(apple.y, apple.x, APPLE_CHAR);

        int key = getch();
        if (key == 'q' || key == 'Q' || key == 27)
            break;
        else if ((key == KEY_UP && direction != KEY_DOWN) ||
                 (key == KEY_DOWN && direction != KEY_UP) ||
                 (key == KEY_LEFT && direction != KEY_RIGHT) ||
                 (key == KEY_RIGHT && direction != KEY_LEFT)) {
            direction = key;
        }

        Position pindah = ular.front();
        switch (direction) {
            case KEY_UP:
                pindah.y--;
                break;
            case KEY_DOWN:
                pindah.y++;
                break;
            case KEY_LEFT:
                pindah.x--;
                break;
            case KEY_RIGHT:
                pindah.x++;
                break;
        }

        ular.push_front(pindah);
        ular.pop_back();
        if (pindah.x < 0 || pindah.x >= lebar ||
            pindah.y < 0 || pindah.y >= tinggik)
            break;
        auto it = ular.begin();
        it++;
        while (it != ular.end()) {
            if (pindah == *it)
                break;
            it++;
        }
        if (it != ular.end())
            break;
        refresh();
    }
    endwin();
    cout << "\tskill issue smh lmao\n";
    return 0;
}
