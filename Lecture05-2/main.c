#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y) {
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    int startX = 15;
    int startY = 2;
    gotoxy(startX, 2);
    printf("                           o");
    gotoxy(startX, 3);
    printf("                       _---|         _ _ _ _ _ ");
    gotoxy(startX, 4);
    printf("                    o   ---|     o   ]-I-I-I-[ ");
    gotoxy(startX, 5);
    printf("   _ _ _ _ _ _  _---|      | _---|    \\ ` ' / ");
    gotoxy(startX, 6);
    printf("   ]-I-I-I-I-[   ---|      |  ---|    |.   |");
    gotoxy(startX, 7);
    printf("    \\ `   '_/       |     / \\    |    | /^\\| ");
    gotoxy(startX, 8);
    printf("     [*]  __|       ^    / ^ \\   ^    | |*|| ");
    gotoxy(startX, 9);
    printf("     |__   ,|      / \\  /    `\\ / \\   | ===|");
    gotoxy(startX, 10);
    printf("  ___| ___ ,|__   /    /=_=_=_=\\   \\  |,  _|");
    gotoxy(startX, 11);
    printf("  I_I__I_I__I_I  (====(_________)___|_|____|____");
    gotoxy(startX, 12);
    printf("  \\-\\--|-|--/-/  |     I  [ ]__I I_I__|____I_I_| ");
    gotoxy(startX, 13);
    printf("   |[]      '|   | []  |`__  . [  \\-\\--|-|--/-/ ");
    gotoxy(startX, 14);
    printf("   |.   | |' |___|_____I___|___I___|---------| ");
    gotoxy(startX, 15);
    printf("  / \\| []   .|_|-|_|-|-|_|-|_|-|_|-| []   [] | ");
    gotoxy(startX, 16);
    printf(" <===>  |   .|-=-=-=-=-=-=-=-=-=-=-|   |    / \\  ");
    gotoxy(startX, 17);
    printf(" ] []|`   [] ||.|.|.|.|.|.|.|.|.|.||-      <===>");
    gotoxy(startX, 18);
    printf(" ] []| ` |   |/////////\\\\\\\\\\\\\\\\\\\\.||__.  | |[] [");
    gotoxy(startX, 19);
    printf(" <===>     ' ||||| |   |   | ||||.||  []   <===>");
    gotoxy(startX, 20);
    printf("  \\T/  | |-- ||||| | O | O | ||||.|| . |'   \\T/ ");
    gotoxy(startX, 21);
    printf("   |      . _||||| |   |   | ||||.|| |     | |");
    gotoxy(startX, 22);
    printf("../|' v . | .|||||/____|____\\|||| /|. . | . ./");
    gotoxy(startX, 23);
    printf(".|//\\............/...........\\........../../\\\\\\");
    /*
                               o                    
                       _---|         _ _ _ _ _ 
                    o   ---|     o   ]-I-I-I-[ 
   _ _ _ _ _ _  _---|      | _---|    \ ` ' / 
   ]-I-I-I-I-[   ---|      |  ---|    |.   | 
    \ `   '_/       |     / \    |    | /^\| 
     [*]  __|       ^    / ^ \   ^    | |*|| 
     |__   ,|      / \  /    `\ / \   | ===| 
  ___| ___ ,|__   /    /=_=_=_=\   \  |,  _|
  I_I__I_I__I_I  (====(_________)___|_|____|____
  \-\--|-|--/-/  |     I  [ ]__I I_I__|____I_I_| 
   |[]      '|   | []  |`__  . [  \-\--|-|--/-/  
   |.   | |' |___|_____I___|___I___|---------| 
  / \| []   .|_|-|_|-|-|_|-|_|-|_|-| []   [] | 
 <===>  |   .|-=-=-=-=-=-=-=-=-=-=-|   |    / \  
 ] []|`   [] ||.|.|.|.|.|.|.|.|.|.||-      <===> 
 ] []| ` |   |/////////\\\\\\\\\\.||__.  | |[] [ 
 <===>     ' ||||| |   |   | ||||.||  []   <===>
  \T/  | |-- ||||| | O | O | ||||.|| . |'   \T/ 
   |      . _||||| |   |   | ||||.|| |     | |
../|' v . | .|||||/____|____\|||| /|. . | . ./
.|//\............/...........\........../../\\\

    */



    // 빨간색 텍스트
    printf("\033[31m이 텍스트는 빨간색입니다.\033[0m\n");

    // 초록색 텍스트와 노란색 배경
    printf("\033[32m\033[43m이 텍스트는 초록색이고 배경은 노란색입니다.\033[0m\n");

    // 굵은 텍스트와 파란색 텍스트
    printf("\033[1m\033[34m이 텍스트는 굵고 파란색입니다.\033[0m\n");
    return 0;
}