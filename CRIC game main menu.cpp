#include<iostream>//header files(libraries)
#include<conio.h>//header files(libraries)
#include<windows.h>//header files(libraries)
#include<string>//header files(libraries)
using namespace std;//declaring namespace


void draw();//function declaration for initialization
void main_menu_content();//function declaration for initialization
void main_menu_choice();//function declaration for initialization
void animation();//function declaration for initialization
void input();//function declaration for initialization
void logic();//function declaration for initialization
void scoreBoard();//function declaration for initialization
void scores();//function declaration for initialization
int begin_play();//function declaration for initialization
void SetCursorPosition(int x, int y);//function declaration for initialization
void gameoveranimo();//function declaration for initialization
void outdisplay();//function declaration for initialization
int a;//variable declaration(globally)
const HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);//variable declaration(globally)
COORD c;//variable declaration(globally)
COORD s;//variable declaration(globally)
char z;//variable declaration(globally)
string batsman, bowlerN, NamesOfBatsman[10];//variable declaration(globally)
int width = 60, height = 40, randomNum, bat = 0, NumOfBall = 0, BallCondition = 0, runs = 0, Ballp = 0, Position = 0;//variable declaration(globally)
int fielderx[9] = { 21,30,40,55,50,42,30,13,8 };//array declaration
int fieldery[9] = { 4,9,3,13,45,25,38,30,13 };//array declaration
int playerX = 30, playerY = 13, bowlerX = 30, bowlerY = 28, ballx = 30, bally = 28, Post, wickets = 0;//variable declaration
bool gameOver = false, newball = false, wicket = false, NextOver = false, NoBall = false, Wide = false, Ifsix = false, Iffour = false, Iftwo = false, Ifone = false;//variable declaration
enum bdirection { STOP = 0, LEFT, RIGHT, UP, DOWN };//creating a new data type
bdirection ball = STOP, bowler = STOP, Batsman = STOP;
enum change { fielder1 = 0, fielder2, fielder3, fielder4, fielder5, fielder6, fielder7, fielder8 };//creating a new data type
change position = fielder1;
enum fielderChnge { Stop = 0, Left, Right, Up, Down };//creating a new data type
fielderChnge fielderDirection = Stop;
change fielderName = fielder1;
bool good = false, ifzero = false;

void colour1(int count)//console colour displaying initialization functoin
{
	if (count < 10) {
		system("color F1");
	}
	else if (count < 20) {
		system("color D2");
	}
	else if (count < 30) {
		system("color C3");
	}
	else if (count < 40) {
		system("color B4");
	}
	else if (count < 50) {
		system("color A5");
	}
	else if (count < 60) {
		system("color 76");
	}
	else if (count < 70) {
		system("color 67");
	}
	else if (count < 80) {
		system("color 98");
	}
	else if (count < 90) {
		system("color B9");
	}
	else if (count < 100) {
		system("color DA");
	}
	else if (count < 110) {
		system("color 0B");
	}

}//
void colour(int count) {
	if (count < 10) {
		system("color F1");
	}
	else if (count < 20) {
		system("color F2");
	}
	else if (count < 30) {
		system("color F3");
	}
	else if (count < 40) {
		system("color F4");
	}
	else if (count < 50) {
		system("color F5");
	}
	else if (count < 60) {
		system("color F6");
	}
	else if (count < 70) {
		system("color F7");
	}
	else if (count < 80) {
		system("color F8");
	}
	else if (count < 90) {
		system("color F9");
	}
	else if (count < 100) {
		system("color FA");
	}
	else if (count < 110) {
		system("color FB");
	}
}//




void animation()//introduction animation display called with setCursorposition keyword and printing with for loops
{
	char line0[] = " --------------------------------------------------------------------------------------------------------    ";
	char line1[] = " |     CCCCCCCCC   RRRRRRR     IIIIIIIIIII       CCCCCCCCC    KKK      KKK   EEEEEEEEE   TTTTTTTTTTTTT  |    ";
	char line2[] = " |  CCCCCCCCCCC    RRRRRRRRR   IIIIIIIIIII     CCCCCCCCCCC    KKK    KKK     EEEEEEEEE   TTTTTTTTTTTTT  |    ";
	char line3[] = " | CCCCC           RRR   RRR       III       CCCCC            KKK  KKK       EEE              TTT       |    ";
	char line4[] = " | CCC             RRR  RRRR       III       CCC              KKKKKK         EEEEEEEEE        TTT       |    ";
	char line5[] = " | CCCCC           RRRRRRRR        III       CCCCC            KKK  KKK       EEE              TTT       |    ";
	char line6[] = " |  CCCCCCCCCCC    RRR   RRR   IIIIIIIIIII     CCCCCCCCCCC    KKK    KKK     EEEEEEEEE        TTT       |    ";
	char line7[] = " |    CCCCCCCCC    RRR    RRR  IIIIIIIIIII       CCCCCCCCC    KKK      KKK   EEEEEEEEE        TTT       |    ";
	char line8[] = " --------------------------------------------------------------------------------------------------------    ";

	char line9[] = "                                       \xB2   \xB2   \xB2   \xB2   \xB2 \xB2   \xB2  ";
	char line10[] = "                                       \xB2\xB2 \xB2\xB2  \xB2 \xB2  \xB2\xB2  \xB2 \xB2  \xB2 \xB2 ";
	char line11[] = "                                       \xB2 \xB2 \xB2 \xB2\xB2\xB2\xB2\xB2 \xB2 \xB2 \xB2 \xB2 \xB2\xB2\xB2\xB2\xB2";
	char line12[] = "                                       \xB2   \xB2 \xB2   \xB2 \xB2  \xB2\xB2 \xB2 \xB2   \xB2";
	char line13[] = "                                       \xB2   \xB2 \xB2   \xB2 \xB2   \xB2 \xB2 \xB2   \xB2";
	char line14[] = "                                      \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD";
	char line15[] = "                                                                                      @'NNYP' GAMES Corp.";

	int X = 30;
	int Y = 20;
	int k1 = X + 0, x1, y1 = Y + 0;
	int k2 = X + 0, x2, y2 = Y + 1;
	int k3 = X + 0, x3, y3 = Y + 2;
	int k4 = X + 0, x4, y4 = Y + 3;
	int k5 = X + 0, x5, y5 = Y + 4;
	int k6 = X + 0, x6, y6 = Y + 5;
	int k7 = X + 0, x7, y7 = Y + 6;

	int count = 0;
	for (int x0 = X; x0 < X + 107; x0++) {
		colour(x0);

		SetCursorPosition(x0, Y - 1);
		cout << line0[count];
		SetCursorPosition(x0, Y + 7);
		cout << line8[count];
		count++;
		colour(count);
	}
	for (x1 = k1; x1 < k1 + 12; x1++) {
		SetCursorPosition(x1, y1);
		cout << line1[x1 - k1];
	}
	for (x2 = k2; x2 < k2 + 10; x2++) {
		SetCursorPosition(x2, y2);
		cout << line2[x2 - k2];
	}
	for (x3 = k3; x3 < k3 + 8; x3++) {
		SetCursorPosition(x3, y3);
		cout << line3[x3 - k3];
	}
	for (x4 = k4; x4 < k4 + 6; x4++) {
		SetCursorPosition(x4, y4);
		cout << line4[x4 - k4];
	}
	for (x5 = k5; x5 < k5 + 4; x5++) {
		SetCursorPosition(x5, y5);
		cout << line5[x5 - k5];
	}
	for (x6 = k6; x6 < k6 + 2; x6++) {
		SetCursorPosition(x6, y6);
		cout << line6[x6 - k6];
	}
	for (x7 = k7; x7 < k7 + 0; x7++) {
		SetCursorPosition(x7, y7);
		cout << line7[x7 - k7];
	}
	k1 = X + 12;
	k2 = X + 10;
	k3 = X + 8;
	k4 = X + 6;
	k5 = X + 4;
	k6 = X + 2;
	k7 = X + 0;
	for (int count = 0; count < 107; count++) {
		colour(count);
		if (count < 95) {
			for (x1 = k1; x1 < k1 + 1; x1++) {
				SetCursorPosition(x1, y1);
				cout << line1[count + 12];
			}
		}
		k1 = x1;
		Sleep(0.1);
		if (count < 97) {
			for (x2 = k2; x2 < k2 + 1; x2++) {
				SetCursorPosition(x2, y2);
				cout << line2[count + 10];
			}
		}
		k2 = x2;
		Sleep(0.1);
		if (count < 99) {
			for (x3 = k3; x3 < k3 + 1; x3++) {
				SetCursorPosition(x3, y3);
				cout << line3[count + 8];
			}
		}
		k3 = x3;
		Sleep(0.1);
		if (count < 101) {
			for (x4 = k4; x4 < k4 + 1; x4++) {
				SetCursorPosition(x4, y4);
				cout << line4[count + 6];
			}
		}
		k4 = x4;
		Sleep(0.1);
		if (count < 103) {
			for (x5 = k5; x5 < k5 + 1; x5++) {
				SetCursorPosition(x5, y5);
				cout << line5[count + 4];
			}
		}
		k5 = x5;
		Sleep(0.1);
		for (x6 = k6; x6 < k6 + 1; x6++) {
			SetCursorPosition(x6, y6);
			cout << line6[count + 2];
		}
		k6 = x6;
		Sleep(0.1);
		for (x7 = k7; x7 < k7 + 1; x7++) {
			SetCursorPosition(x7, y7);
			cout << line7[count + 0];
		}
		k7 = x7;
		Sleep(0.1);
}
	int p = X;
	int p1 = Y + 10;
	for (int x = 0; x < 65; x++) {
		SetCursorPosition(p + x, p1);
		cout << line9[x];
		Sleep(0.2);
		colour(5);
	}
	for (int x = 0; x < 65; x++) {
		SetCursorPosition(p + x, p1 + 1);
		cout << line10[x];
		Sleep(0.2);
		colour(15);
	}
	for (int x = 0; x < 65; x++) {
		SetCursorPosition(p + x, p1 + 2);
		cout << line11[x];
		Sleep(0.2);
		colour(25);
	}
	for (int x = 0; x < 65; x++) {
		SetCursorPosition(p + x, p1 + 3);
		cout << line12[x];
		Sleep(0.2);
		colour(35);
	}
	for (int x = 0; x < 65; x++) {
		SetCursorPosition(p + x, p1 + 4);
		cout << line13[x];
		Sleep(0.2);
		colour(45);
	}
	for (int x = 0; x < 66; x++) {
		SetCursorPosition(p + x, p1 + 5);
		cout << line14[x];
		Sleep(0.2);
		colour(55);
	}
	for (int x = 0; x < 106; x++) {
		SetCursorPosition(p + x, p1 + 6);
		cout << line15[x];
		Sleep(0.2);
		colour(95);
	}
	//************************************************************************************************************************
	k1 = X + 0, x1, y1 = Y + 0;
	k2 = X + 0, x2, y2 = Y + 1;
	k3 = X + 0, x3, y3 = Y + 2;
	k4 = X + 0, x4, y4 = Y + 3;
	k5 = X + 0, x5, y5 = Y + 4;
	k6 = X + 0, x6, y6 = Y + 5;
	k7 = X + 0, x7, y7 = Y + 6;


	count = 0;
	for (int x0 = X; x0 < X + 107; x0++) {
		colour(x0);
		SetCursorPosition(x0, Y - 1);
		cout << " ";
		SetCursorPosition(x0, Y + 7);
		cout << " ";
		count++;
	}
	for (x1 = k1; x1 < k1 + 12; x1++) {
		SetCursorPosition(x1, y1);
		cout << " ";
	}
	for (x2 = k2; x2 < k2 + 10; x2++) {
		SetCursorPosition(x2, y2);
		cout << " ";
	}
	for (x3 = k3; x3 < k3 + 8; x3++) {
		SetCursorPosition(x3, y3);
		cout << " ";
	}
	for (x4 = k4; x4 < k4 + 6; x4++) {
		SetCursorPosition(x4, y4);
		cout << " ";
	}
	for (x5 = k5; x5 < k5 + 4; x5++) {
		SetCursorPosition(x5, y5);
		cout << " ";
	}
	for (x6 = k6; x6 < k6 + 2; x6++) {
		SetCursorPosition(x6, y6);
		cout << " ";
	}
	for (x7 = k7; x7 < k7 + 0; x7++) {
		SetCursorPosition(x7, y7);
		cout << " ";
	}
	k1 = X + 12;
	k2 = X + 10;
	k3 = X + 8;
	k4 = X + 6;
	k5 = X + 4;
	k6 = X + 2;
	k7 = X + 0;
	for (int count = 0; count < 107; count++) {
		colour(count);
		if (count < 95) {
			for (x1 = k1; x1 < k1 + 1; x1++) {
				SetCursorPosition(x1, y1);
				cout << " ";
			}
		}
		k1 = x1;
		Sleep(0.1);
		if (count < 97) {
			for (x2 = k2; x2 < k2 + 1; x2++) {
				SetCursorPosition(x2, y2);
				cout << " ";
			}
		}
		k2 = x2;
		Sleep(0.1);
		if (count < 99) {
			for (x3 = k3; x3 < k3 + 1; x3++) {
				SetCursorPosition(x3, y3);
				cout << " ";
			}
		}
		k3 = x3;
		Sleep(0.1);
		if (count < 101) {
			for (x4 = k4; x4 < k4 + 1; x4++) {
				SetCursorPosition(x4, y4);
				cout << " ";
			}
		}
		k4 = x4;
		Sleep(0.1);
		if (count < 103) {
			for (x5 = k5; x5 < k5 + 1; x5++) {
				SetCursorPosition(x5, y5);
				cout << " ";
			}
		}
		k5 = x5;
		Sleep(0.1);
		for (x6 = k6; x6 < k6 + 1; x6++) {
			SetCursorPosition(x6, y6);
			cout << " ";
		}
		k6 = x6;
		Sleep(0.1);
		for (x7 = k7; x7 < k7 + 1; x7++) {
			SetCursorPosition(x7, y7);
			cout << " ";
		}
		k7 = x7;
		Sleep(0.1);

	}
	for (int x = 0; x < 65; x++) {
		SetCursorPosition(p + x, p1);
		cout << " ";
		
		colour(65);
	}
	for (int x = 0; x < 65; x++) {
		SetCursorPosition(p + x, p1 + 1);
		cout << " ";
		
		colour(55);
	}
	for (int x = 0; x < 65; x++) {
		SetCursorPosition(p + x, p1 + 2);
		cout << " ";
		colour(45);
	}
	for (int x = 0; x < 65; x++) {
		SetCursorPosition(p + x, p1 + 3);
		cout << " ";
		colour(35);
	}
	for (int x = 0; x < 65; x++) {
		SetCursorPosition(p + x, p1 + 4);
		cout << " ";
		colour(25);
	}
	for (int x = 0; x < 66; x++) {
		SetCursorPosition(p + x, p1 + 5);
		cout << " ";
		colour(15);
	}
	for (int x = 0; x < 106; x++) {
		SetCursorPosition(p + x, p1 + 6);
		cout << " ";
		colour(55);
	}
	colour(15);
	SetCursorPosition(0, 0);
}

void SetCursorPosition(int x, int y)//function for initialize setCursorPosition function
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { (SHORT)x,(SHORT)y };
	SetConsoleCursorPosition(output, pos);

}

int main()//main functions

{
	animation();
	colour(00);
	main_menu_content();
	main_menu_choice();
	return 0;
}
void gameoveranimo()//animation for displaying game over
{

	

		char line1[] = "\t                 ************************     **********              **********             *****   *******************                                        ";
		char line2[] = "\t                  ************************     ***********             ***********          *******   *******************                                       ";
		char line3[] = "\t                   *****              *****     *****  *****            *****  *****       *********   *****                                                     ";
		char line4[] = "\t                    *****                        *****   *****           *****   *****    ***** *****   *****                                                    ";
		char line5[] = "\t                     *****                        *****    *****          *****    ***********   *****   *****                                                 ";
		char line6[] = "\t                      *****          **********    *****     *****         *****     ********     *****   *******************                                  ";
		char line7[] = "\t                       *****          **********    ****************        *****                  *****   *******************                               ";
		char line8[] = "\t                        *****               *****    *****************       *****                  *****   *****                                           ";
		char line9[] = "\t                         *****               *****    *****        *****      *****                  *****   *****                                           ";
		char line10[] = "\t                          *****               *****    *****         *****     *****                  *****   *****                                            ";
		char line11[] = "\t                           *****               *****    *****          *****    *****                  *****   *****                                           ";
		char line12[] = "\t                            *************************    *****           *****   *****                  *****   *******************                          ";
		char line13[] = "\t                             *************************    *****            *****  *****                  *****   *******************                           ";
		char line14[] = "\t                                                                                                                                                                 ";
		char line15[] = "\t                                                                                                                                                                 ";
		char line16[] = "\t                                      **********************  *******             ******* **********************   *********************                         ";
		char line17[] = "\t                                       **********************  *****               *****   **********************   *********************                        ";
		char line18[] = "\t                                        *****            *****  *****             *****     *****                    *****           *****                     ";
		char line19[] = "\t                                         *****            *****  *****           *****       *****                    *****           *****                   ";
		char line20[] = "\t                                          *****            *****  *****         *****         *****                    *********************                  ";
		char line21[] = "\t                                           *****            *****  *****       *****           **********************   *********************                 ";
		char line22[] = "\t                                            *****            *****  *****     *****             **********************   ************                           ";
		char line23[] = "\t                                             *****            *****  *****   *****               *****                    *****     *****                       ";
		char line24[] = "\t                                              *****            *****  ***** *****                 *****                    *****      *****                       ";
		char line25[] = "\t                                               *****            *****  *********                   *****                    *****       *****                     ";
		char line26[] = "\t                                                **********************  ********                    **********************   *****        ******                ";
		char line27[] = "\t                                                 **********************  ******                      **********************   ******        ******             ";

		system("color F0");
		int k1 = 0, x1, y1 = 5;
		int k2 = 0, x2, y2 = 6;
		int k3 = 0, x3, y3 = 7;
		int k4 = 0, x4, y4 = 8;
		int k5 = 0, x5, y5 = 9;
		int k6 = 0, x6, y6 = 10;
		int k7 = 0, x7, y7 = 11;
		int k8 = 0, x8, y8 = 12;
		int k9 = 0, x9, y9 = 13;
		int k10 = 0, x10, y10 = 14;
		int k11 = 0, x11, y11 = 15;
		int k12 = 0, x12, y12 = 16;
		int k13 = 0, x13, y13 = 17;
		int k14 = 0, x14, y14 = 18;
		int k15 = 0, x15, y15 = 19;
		int k16 = 0, x16, y16 = 20;
		int k17 = 0, x17, y17 = 21;
		int k18 = 0, x18, y18 = 22;
		int k19 = 0, x19, y19 = 23;
		int k20 = 0, x20, y20 = 24;
		int k21 = 0, x21, y21 = 25;
		int k22 = 0, x22, y22 = 26;
		int k23 = 0, x23, y23 = 27;
		int k24 = 0, x24, y24 = 28;
		int k25 = 0, x25, y25 = 29;
		int k26 = 0, x26, y26 = 30;
		int k27 = 0, x27, y27 = 31;

		for (int count_num = 0; count_num < 154; count_num++) {


			for (x1 = k1; x1 < k1 + 1; x1++) {
				SetCursorPosition(x1, y1);
				cout << line1[x1];

			}
			k1 = x1;
			Sleep(2);
			for (x2 = k2; x2 < k2 + 1; x2++) {
				SetCursorPosition(x2, y2);
				cout << line2[x2];
			}
			k2 = x2;
			Sleep(2);
			for (x3 = k3; x3 < k3 + 1; x3++) {
				SetCursorPosition(x3, y3);
				cout << line3[x3];
			}
			k3 = x3;
			Sleep(2);
			for (x4 = k4; x4 < k4 + 1; x4++) {
				SetCursorPosition(x4, y4);
				cout << line4[x4];
			}
			k4 = x4;
			Sleep(2);
			for (x5 = k5; x5 < k5 + 1; x5++) {
				SetCursorPosition(x5, y5);
				cout << line5[x5];
			}
			k5 = x5;
			Sleep(2);
			for (x6 = k6; x6 < k6 + 1; x6++) {
				SetCursorPosition(x6, y6);
				cout << line6[x6];
			}
			k6 = x6;
			Sleep(2);
			for (x7 = k7; x7 < k7 + 1; x7++) {
				SetCursorPosition(x7, y7);
				cout << line7[x7];
			}
			k7 = x7;
			Sleep(2);
			for (x8 = k8; x8 < k8 + 1; x8++) {
				SetCursorPosition(x8, y8);
				cout << line8[x8];
			}
			k8 = x8;
			Sleep(2);
			for (x9 = k9; x9 < k9 + 1; x9++) {
				SetCursorPosition(x9, y9);
				cout << line9[x9];
			}
			k9 = x9;
			Sleep(2);
			for (x10 = k10; x10 < k10 + 1; x10++) {
				SetCursorPosition(x10, y10);
				cout << line10[x10];
			}
			k10 = x10;
			Sleep(2);
			for (x11 = k11; x11 < k11 + 1; x11++) {
				SetCursorPosition(x11, y11);
				cout << line11[x11];
			}
			k11 = x11;
			Sleep(2);
			for (x12 = k12; x12 < k12 + 1; x12++) {
				SetCursorPosition(x12, y12);
				cout << line12[x12];
			}
			k12 = x12;
			Sleep(2);
			for (x13 = k13; x13 < k13 + 1; x13++) {
				SetCursorPosition(x13, y13);
				cout << line13[x13];
			}
			k13 = x13;
			Sleep(2);
			for (x14 = k14; x14 < k14 + 1; x14++) {
				SetCursorPosition(x14, y14);
				cout << line14[x14];
			}
			k14 = x14;
			Sleep(2);
			for (x15 = k15; x15 < k15 + 1; x15++) {
				SetCursorPosition(x15, y15);
				cout << line15[x15];
			}
			k15 = x15;
			Sleep(2);
			for (x16 = k16; x16 < k16 + 1; x16++) {
				SetCursorPosition(x16, y16);
				cout << line16[x16];
			}
			k16 = x16;
			Sleep(2);
			for (x17 = k17; x17 < k17 + 1; x17++) {
				SetCursorPosition(x17, y17);
				cout << line17[x17];
			}
			k17 = x17;
			Sleep(2);
			for (x18 = k18; x18 < k18 + 1; x18++) {
				SetCursorPosition(x18, y18);
				cout << line18[x18];
			}
			k18 = x18;
			Sleep(2);
			for (x19 = k19; x19 < k19 + 1; x19++) {
				SetCursorPosition(x19, y19);
				cout << line19[x19];
			}
			k19 = x19;
			Sleep(2);
			for (x20 = k20; x20 < k20 + 1; x20++) {
				SetCursorPosition(x20, y20);
				cout << line20[x20];
			}

			k20 = x20;
			Sleep(2);
			for (x21 = k21; x21 < k21 + 1; x21++) {
				SetCursorPosition(x21, y21);
				cout << line21[x21];
			}

			k21 = x21;
			Sleep(2);
			for (x22 = k22; x22 < k22 + 1; x22++) {
				SetCursorPosition(x22, y22);
				cout << line22[x22];
			}

			k22 = x22;
			Sleep(2);
			for (x23 = k23; x23 < k23 + 1; x23++) {
				SetCursorPosition(x23, y23);
				cout << line23[x23];
			}

			k23 = x23;
			Sleep(2);
			for (x24 = k24; x24 < k24 + 1; x24++) {
				SetCursorPosition(x24, y24);
				cout << line24[x24];
			}

			k24 = x24;
			Sleep(2);
			for (x25 = k25; x25 < k25 + 1; x25++) {
				SetCursorPosition(x25, y25);
				cout << line25[x25];
			}

			k25 = x25;
			Sleep(2);
			for (x26 = k26; x26 < k26 + 1; x26++) {
				SetCursorPosition(x26, y26);
				cout << line26[x26];
			}

			k26 = x26;
			Sleep(2);
			for (x27 = k27; x27 < k27 + 1; x27++) {
				SetCursorPosition(x27, y27);
				cout << line27[x27];
			}

			if (count_num == 30)
				system("color F1");
			else if (count_num == 45)
				system("color F2");
			else if (count_num == 60)
				system("color F3");
			else if (count_num == 75)
				system("color F0");
			else if (count_num == 90)
				system("color F4");
			else if (count_num == 105)
				system("color F5");
			else if (count_num == 120)
				system("color F6");
			else if (count_num == 135)
				system("color F1");
			else if (count_num == 150)
				system("color F2");
			else if (count_num == 165)
				system("color F0");
			else if (count_num == 180)
				system("color F3");

		}
		system("color F1");
		Sleep(100);
		system("color F2");
		Sleep(100);
		system("color F4");
		Sleep(100);
		system("color F5");
		Sleep(100);
		system("color F6");
		Sleep(100);
		system("color F3");
		Sleep(100);
		system("color F1");
		Sleep(100);
		system("color F2");
		Sleep(100);
		system("color F4");
		Sleep(100);
		system("color F5");
		Sleep(100);
		system("color F6");
		Sleep(100);
		system("color F3");
		Sleep(100);
		system("color F1");
		Sleep(100);
		system("color F2");
		Sleep(100);
		system("color F4");
		Sleep(100);
		system("color F5");
		Sleep(100);
		system("color F6");
		Sleep(100);
		system("color F3");
		Sleep(100);
		system("color F1");
		Sleep(100);
		system("color F2");
		Sleep(100);
		system("color F4");
		Sleep(100);
		system("color F5");
		Sleep(100);
		system("color F6");
		Sleep(100);
		system("color F3");
		Sleep(100);
		system("color F1");
		Sleep(100);
		system("color F2");
		Sleep(100);
		system("color F4");
		Sleep(100);
		system("color F5");
		Sleep(100);
		system("color F6");
		Sleep(100);
		system("color F3");
		Sleep(100);
		system("color F1");
		Sleep(100);
		system("color F2");
		Sleep(100);
		system("color F4");
		Sleep(100);
		system("color F5");
		Sleep(100);
		system("color F6");
		Sleep(100);
		system("color F3");
		Sleep(100);
		system("color F1");
		Sleep(100);
		system("color F2");
		Sleep(100);
		system("color F4");
		Sleep(100);
		system("color F5");
		Sleep(100);
		system("color F6");
		Sleep(100);
		system("color F3");
		Sleep(100);
		system("color F1");
		Sleep(100);
		system("color F2");
		Sleep(100);
		system("color F4");
		Sleep(100);
		system("color F5");
		Sleep(100);
		system("color F6");
		Sleep(100);
		system("color F3");
		Sleep(100);

}
void outdisplay()//animation to display out
{
	char line0[] = " ----------------------------------------------------------     "      ;
	char line1[] = " |          ooooo    oooo     oooo oooooooooooooo          |        "    ;
	char line2[] = " |        oo     oo   oo       oo  oo    oo    oo          |      ";
	char line3[] = " |       oo       oo  oo       oo  o     oo     o          |         ";
	char line4[] = " |       oo       oo  oo       oo        oo                |     ";
	char line5[] = " |       oo       oo  oo       oo        oo                |    ";
	char line6[] = " |        oo     oo    oo     oo         oo                |      ";
	char line7[] = " |          ooooo        ooooo         oooooo              |      ";
	char line8[] = " ----------------------------------------------------------        ";

	int X = 50;
	int Y = 20;
	int k1 = X + 0, x1, y1 = Y + 0;
	int k2 = X + 0, x2, y2 = Y + 1;
	int k3 = X + 0, x3, y3 = Y + 2;
	int k4 = X + 0, x4, y4 = Y + 3;
	int k5 = X + 0, x5, y5 = Y + 4;
	int k6 = X + 0, x6, y6 = Y + 5;
	int k7 = X + 0, x7, y7 = Y + 6;

	int count = 0;
	for (int x0 = X; x0 < X + 61; x0++) {
		colour1(x0);

		SetCursorPosition(x0, Y - 1);
		cout << line0[count];
		SetCursorPosition(x0, Y + 7);
		cout << line8[count];
		count++;
		colour1(count);
	}
	for (x1 = k1; x1 < k1 + 12; x1++) {
		SetCursorPosition(x1, y1);
		cout << line1[x1 - k1];
	}
	for (x2 = k2; x2 < k2 + 10; x2++) {
		SetCursorPosition(x2, y2);
		cout << line2[x2 - k2];
	}
	for (x3 = k3; x3 < k3 + 8; x3++) {
		SetCursorPosition(x3, y3);
		cout << line3[x3 - k3];
	}
	for (x4 = k4; x4 < k4 + 6; x4++) {
		SetCursorPosition(x4, y4);
		cout << line4[x4 - k4];
	}
	for (x5 = k5; x5 < k5 + 4; x5++) {
		SetCursorPosition(x5, y5);
		cout << line5[x5 - k5];
	}
	for (x6 = k6; x6 < k6 + 2; x6++) {
		SetCursorPosition(x6, y6);
		cout << line6[x6 - k6];
	}
	for (x7 = k7; x7 < k7 + 0; x7++) {
		SetCursorPosition(x7, y7);
		cout << line7[x7 - k7];
	}
	k1 = X + 12;
	k2 = X + 10;
	k3 = X + 8;
	k4 = X + 6;
	k5 = X + 4;
	k6 = X + 2;
	k7 = X + 0;
	for (int count = 0; count < 61; count++) {
		colour1(count);
		if (count < 49) {
			for (x1 = k1; x1 < k1 + 1; x1++) {
				SetCursorPosition(x1, y1);
				cout << line1[count + 12];
			}
		}
		k1 = x1;
		Sleep(0.1);
		if (count <51) {
			for (x2 = k2; x2 < k2 + 1; x2++) {
				SetCursorPosition(x2, y2);
				cout << line2[count + 10];
			}
		}
		k2 = x2;
		Sleep(0.1);
		if (count < 53) {
			for (x3 = k3; x3 < k3 + 1; x3++) {
				SetCursorPosition(x3, y3);
				cout << line3[count + 8];
			}
		}
		k3 = x3;
		Sleep(0.1);
		if (count < 55) {
			for (x4 = k4; x4 < k4 + 1; x4++) {
				SetCursorPosition(x4, y4);
				cout << line4[count + 6];
			}
		}
		k4 = x4;
		Sleep(0.1);
		if (count < 57) {
			for (x5 = k5; x5 < k5 + 1; x5++) {
				SetCursorPosition(x5, y5);
				cout << line5[count + 4];
			}
		}
		k5 = x5;
		Sleep(0.1);
		for (x6 = k6; x6 < k6 + 1; x6++) {
			SetCursorPosition(x6, y6);
			cout << line6[count + 2];
		}
		k6 = x6;
		Sleep(0.1);
		for (x7 = k7; x7 < k7 + 1; x7++) {
			SetCursorPosition(x7, y7);
			cout << line7[count + 0];
		}
		k7 = x7;
		Sleep(0.1);
	}

	//************************************************************************************************************************
	k1 = X + 0, x1, y1 = Y + 0;
	k2 = X + 0, x2, y2 = Y + 1;
	k3 = X + 0, x3, y3 = Y + 2;
	k4 = X + 0, x4, y4 = Y + 3;
	k5 = X + 0, x5, y5 = Y + 4;
	k6 = X + 0, x6, y6 = Y + 5;
	k7 = X + 0, x7, y7 = Y + 6;

	count = 0;
	for (int x0 = X; x0 < X + 61 + 1; x0++) {
		colour1(x0);
		SetCursorPosition(x0, Y - 1);
		cout << " ";
		SetCursorPosition(x0, Y + 7);
		cout << " ";
		count++;
	}
	for (x1 = k1; x1 < k1 + 12; x1++) {
		SetCursorPosition(x1, y1);
		cout << " ";
	}
	for (x2 = k2; x2 < k2 + 10; x2++) {
		SetCursorPosition(x2, y2);
		cout << " ";
	}
	for (x3 = k3; x3 < k3 + 8; x3++) {
		SetCursorPosition(x3, y3);
		cout << " ";
	}
	for (x4 = k4; x4 < k4 + 6; x4++) {
		SetCursorPosition(x4, y4);
		cout << " ";
	}
	for (x5 = k5; x5 < k5 + 4; x5++) {
		SetCursorPosition(x5, y5);
		cout << " ";
	}
	for (x6 = k6; x6 < k6 + 2; x6++) {
		SetCursorPosition(x6, y6);
		cout << " ";
	}
	for (x7 = k7; x7 < k7 + 0; x7++) {
		SetCursorPosition(x7, y7);
		cout << " ";
	}
	k1 = X + 12;
	k2 = X + 10;
	k3 = X + 8;
	k4 = X + 6;
	k5 = X + 4;
	k6 = X + 2;
	k7 = X + 0;
	for (int count = 0; count < 61; count++) {
		colour1(count);
		if (count < 49) {
			for (x1 = k1; x1 < k1 + 1; x1++) {
				SetCursorPosition(x1, y1);
				cout << " ";
			}
		}
		k1 = x1;
		Sleep(0.1);
		if (count < 51) {
			for (x2 = k2; x2 < k2 + 1; x2++) {
				SetCursorPosition(x2, y2);
				cout << " ";
			}
		}
		k2 = x2;
		Sleep(0.1);
		if (count < 53) {
			for (x3 = k3; x3 < k3 + 1; x3++) {
				SetCursorPosition(x3, y3);
				cout << " ";
			}
		}
		k3 = x3;
		Sleep(0.1);
		if (count < 55) {
			for (x4 = k4; x4 < k4 + 1; x4++) {
				SetCursorPosition(x4, y4);
				cout << " ";
			}
		}
		k4 = x4;
		Sleep(0.1);
		if (count < 57) {
			for (x5 = k5; x5 < k5 + 1; x5++) {
				SetCursorPosition(x5, y5);
				cout << " ";
			}
		}
		k5 = x5;
		Sleep(0.1);
		for (x6 = k6; x6 < k6 + 1; x6++) {
			SetCursorPosition(x6, y6);
			cout << " ";
		}
		k6 = x6;
		Sleep(0.1);
		for (x7 = k7; x7 < k7 + 1; x7++) {
			SetCursorPosition(x7, y7);
			cout << " ";
		}
		k7 = x7;
		Sleep(0.1);

	}
	system("color F0");
}
void main_menu_content()//main menu content displaying function

{
	cout << endl<<endl<<endl;
	cout <<"\t\t\t\t\t\t\t\xB2   \xB2   \xB2   \xB2 \xB2   \xB2\t\xB2   \xB2 \xB2\xB2\xB2\xB2 \xB2   \xB2 \xB2   \xB2"<<endl;
	cout <<"\t\t\t\t\t\t\t\xB2\xB2 \xB2\xB2  \xB2 \xB2  \xB2 \xB2\xB2  \xB2\t\xB2\xB2 \xB2\xB2 \xB2    \xB2\xB2  \xB2 \xB2   \xB2"<<endl;
	cout <<"\t\t\t\t\t\t\t\xB2 \xB2 \xB2 \xB2\xB2\xB2\xB2\xB2 \xB2 \xB2 \xB2 \xB2\t\xB2 \xB2 \xB2 \xB2\xB2\xB2  \xB2 \xB2 \xB2 \xB2   \xB2"<<endl;
	cout <<"\t\t\t\t\t\t\t\xB2   \xB2 \xB2   \xB2 \xB2 \xB2  \xB2\xB2\t\xB2   \xB2 \xB2    \xB2  \xB2\xB2 \xB2   \xB2"<<endl;
	cout <<"\t\t\t\t\t\t\t\xB2   \xB2 \xB2   \xB2 \xB2 \xB2   \xB2\t\xB2   \xB2 \xB2\xB2\xB2\xB2 \xB2   \xB2 \xB2\xB2\xB2\xB2\xB2"<<endl;
	cout << "\t\t\t\t\t\t\t\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC" << endl;
	SetCursorPosition(60, 13);
	cout << "<1>-LOAD GAME";
	SetCursorPosition(60, 15);
	cout << "<2>-CONTROLS LAYOUT";
	SetCursorPosition(60, 17);
	cout << "<3>-INSTRUCTIONS";
	SetCursorPosition(60, 19);
	cout << "<4>-CREDITS";
	SetCursorPosition(60, 21);
	cout << "<Q>-QUIT";
}
void main_menu_choice()//main menu function for the console

{
	char menu_choice;
	SetCursorPosition(58, 13);
	cout << "\x3E"<<'\a';
	int p= 13;
	int x = 1;
	while (x == 1) {
		a = _getch();
		if (a == 72) {

			SetCursorPosition(58, p);
			cout << " ";
			p = p - 2;
			if (p > 12) {
				SetCursorPosition(58, p);
				cout << "\x3E";
			}
			else {
				p = 21;
				SetCursorPosition(58, p);
				cout << "\x3E";
			}
		}
		if (a == 80) {
			SetCursorPosition(58, p);
			cout << " ";
			p = p + 2;
			if (p < 22) {
				SetCursorPosition(58, p);
				cout << "\x3E";
			}
			else {
				p = 13;
				SetCursorPosition(58, p);
				cout << "\x3E";
			}
		}
		if (a == 13) {
			if (p == 13) {
				menu_choice = '1';
			}
			if (p == 15) {
				menu_choice = '2';
			}
			if (p == 17) {
				menu_choice = '3';
			}
			if (p == 19) {
				menu_choice = '4';
			}
			if (p == 21) {
				menu_choice = 'Q';
			}
			x = 0;

		}
	}
	switch (menu_choice)
	{
	case'1':
	{	system("cls");
	 begin_play();
	main_menu_content();
	main_menu_choice();
		break;
	}
	case'2':
	{
	system("cls");
	cout << "\n\n\t\t\t##CONTROLS LAYOUT##\n\t\t\t\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\n\n" << endl;
		cout << "\n\nKEY BINDINGS\n\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F"<<endl;
	cout<<"\n# Bowler Controls\n\n\tBowl \t\t\t   -W\n\n\tChange position to left\t   -A\n\n\tChange position to right   -D\n\n\tReset to original position -S" << endl;
	cout << "\n# Fielder Controls\n\n\tMove Up \t   - W\n\n\tMove Left\t   - A\n\n\tMove Right\t   - D\n\n\tMove Down\t   - S" << endl;
	cout << "\n\n# Batsman Controls\n\n\tLeave shot\t\t-U\n\n\tAttack leg side(right)  -K\n\n\tAttack off side(left)   -H\n\n\tAttack straight\t\t-J" << endl;
	
	cout << "\n\n\n\nPress *ENTER* to return to main menu." << endl;
point:
	a = _getch();
	if (a == 13) {
		system("cls");
		main_menu_content();
		main_menu_choice();
	}
	else {
		goto point;
	}
		break;
	}
	case'3':
	{
		system("cls");
		cout << "\n\n\t\t\t##INSTRUCTIONS##\n\t\t\t\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\n\n" << endl;
		cout << "\n\t\xB1 This is a multiplayer cricket game.\n\n\t\xB1 Two players can play this game choosing either bowling side or batting side.\n\n\t\xB1 Bowler can choose his bowling side;leg side or off side.\n\n\t\xB1 Also the bowler can adjust each fielder position by pressing the same movement keys according to the number of the fielder.\n\n\t\xB1 Batsman can choose batting direction for leg side,off side or straight and hit the ball.Or the player can leave the ball.\n\n\t\xB1 A single innings will be played for 5 overs.\n\n\t\xB1 Scores will be calculated real time in the score-board.\n\n\t\xB1 Batting team will win if they reach the target before 5 overs.\n\n\t\xB1 Bowling team will win if they'd be able to take all the 10 wickets before 5 overs or maintain a lesser total than target at the end of 5 overs.\n\n\t\xB1 GOOD LUCK! ;-)";
		cout << "\n\n\n\nPress *ENTER* to return to main menu." << endl;
	point2:
		a = _getch();
		if (a == 13) {
			system("cls");
			main_menu_content();
			main_menu_choice();
		}
		else {
			goto point2;
		}
		break;
	}
	case'4':
	{
		system("cls");
		cout << "\n\n\t\t\t##CREDITS##\n\t\t\t\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\x5F\n\n" << endl;
		cout << "\tInstructed by-\t Dr.Randima Dinalankara,\n\t\t\t Head of Department,\n\t\t\t Department of Computer Engineering,\n\t\t\t University of Sri Jayewardanepura." << endl;
		cout << "\n\n\tGroup Members-\t 17/ENG/074- Y.P.Morapitiya\n\t\t\t 17/ENG/080- P.M.M.N.Pathiraja\n\t\t\t 17/ENG/067- M.G.P.Madhuranthi\n\t\t\t 17/ENG/032- M.N.R.Fernando" << endl;
		cout << "\n\n\tDate Submitted-  12/10/2018" << endl;
		cout << "\n\n\tReferences- \t https://stackoverflow.com\n\n\t\t\t https://youtube.com\n\n\t\t\t https:www.daniweb.com\n\n\t\t\t Stanley B. Lippman, Josee LaJoie, Barbara E. Moo C++ Primer, 5th Edition\n\n\t\t\t Stroustrup B. The C++ Programming Language, 4th Edition\n\n\t\t\t Lecture Notes & Slides" << endl;
		cout << "\n\n\n\nPress *ENTER* to return to main menu." << endl;
	point3:
		a = _getch();
		if (a == 13) {
			system("cls");
			main_menu_content();
			main_menu_choice();
		}
		else {
			goto point3;
		}
		break;
	}
	case'Q':
	{	system("cls");
		cout << "\n\n\n\n\n\n\n\n\n";
		cout << "\n\n\t\tAre You Sure ?";
		
		SetCursorPosition(20, 13);
		cout << "<Y>-YES";
		cout << endl << endl;
		
		SetCursorPosition(20, 15);
		cout << "<N>-NO" << endl;
		
		
		SetCursorPosition(18, 13);
		cout << "\x3E";
		p = 13;
		x == 0;
		while (x == 0) {
			a = _getch();
			if (a == 72) {
				SetCursorPosition(18, p);
				cout << " ";
				p = p - 2;
				if (p > 12) {
					SetCursorPosition(18, p);
					cout << "\x3E";
				}
				else {
					p = 15;
					SetCursorPosition(18, p);
					cout << "\x3E";
				}

			}
			if (a == 80) {

				SetCursorPosition(18, p);
				cout << " ";
				p = p + 2;
				if (p < 16) {
					SetCursorPosition(18, p);
					cout << "\x3E";
				}
				else {
					p = 13;
					SetCursorPosition(18, p);
					cout << "\x3E";
				}

			}
			if (a == 13) {
				if (p == 13)
				{
					system("cls");
					break;
				}
				if (p == 15) {
					system("cls");
					main_menu_content();
					main_menu_choice();
					break;
				}
				//x == 1;
			}
		}
		break;
	}
  }
}
void draw()//function to draw the play ground

{
	SetConsoleCursorPosition(h, c);
	for (int j = 1; j <= height; j++)
	{
		for (int i = 1; i <= width; i++)
		{
			if (j == 1 || j == height)
			{
				SetConsoleTextAttribute(h, 68);
				cout << "=";
				SetConsoleTextAttribute(h, 170);
			}
			else if (i == 1 || i == width)
			{
				SetConsoleTextAttribute(h, 68);
				cout << "||";
				SetConsoleTextAttribute(h, 170);
			}
			else if (j == playerY && i == playerX)
			{
				SetConsoleTextAttribute(h, 111);
				cout << "@";
				SetConsoleTextAttribute(h, 170);
			}
			else if (j == playerY && i == playerX - 1 && bat == 1)
			{
				SetConsoleTextAttribute(h, 100);
				cout << "/";
				SetConsoleTextAttribute(h, 170);
			}
			else if (j == playerY + 1 && i == playerX && bat == 4)
			{
				SetConsoleTextAttribute(h, 100);
				cout << "|";
				SetConsoleTextAttribute(h, 170);
			}
			else if (j == playerY && i == playerX + 1 && bat == 2)
			{
				SetConsoleTextAttribute(h, 100);
				cout << "\\";
				SetConsoleTextAttribute(h, 170);
			}
			else if (j == playerY + 1 && i == playerX + 1 && bat == 3)
			{
				SetConsoleTextAttribute(h, 100);
				cout << "\\";
				SetConsoleTextAttribute(h, 170);
			}

			else if (j == playerY + 1 && i == playerX - 1 && bat == 5)
			{
				SetConsoleTextAttribute(h, 100);
				cout << "/";
				SetConsoleTextAttribute(h, 170);
			}
			else if (j == bowlerY && i == bowlerX)
			{
				SetConsoleTextAttribute(h, 111);
				cout << "@";
				SetConsoleTextAttribute(h, 170);
			}
			else if (j == bally && i == ballx)
			{
				if (j <= 31 && j >= 10 && i >= 25 && i <= 35) {
					SetConsoleTextAttribute(h, 108);
					cout << "o";
					SetConsoleTextAttribute(h, 172);
				}
				else
				{
					SetConsoleTextAttribute(h, 172);
					cout << "o";
				}
			}
			else if ((j == 10 || j == 31) && i <= 35 && i >= 25)
			{
				SetConsoleTextAttribute(h, 100);
				cout << "-";
				SetConsoleTextAttribute(h, 170);
			}
			else if ((j >= 10 && j <= 31) && (i == 35 || i == 25))
			{
				SetConsoleTextAttribute(h, 100);
				cout << "|";
				SetConsoleTextAttribute(h, 170);
			}
			else if ((j == 12 || j == 29) && i <= 33 && i >= 27)
			{
				SetConsoleTextAttribute(h, 100);
				cout << "-";
				SetConsoleTextAttribute(h, 170);
			}
			else if ((j == 11 && i == 29) || (j == 11 && i == 30) || (j == 11 && i == 31))
			{
				SetConsoleTextAttribute(h, 100);
				cout << "|";
				SetConsoleTextAttribute(h, 170);
			}
			else if ((j == 30 && i == 29) || (j == 30 && i == 30) || (j == 30 && i == 31))
			{
				SetConsoleTextAttribute(h, 100);
				cout << "|";
				SetConsoleTextAttribute(h, 170);
			}
			else if (fielderx[0] == i && fieldery[0] == j)
			{
				SetConsoleTextAttribute(h, 160);
				cout << 1;
				SetConsoleTextAttribute(h, 170);
			}
			else if (fielderx[1] == i && fieldery[1] == j)
			{
				SetConsoleTextAttribute(h, 160);
				cout << 2;
				SetConsoleTextAttribute(h, 170);
			}
			else if (fielderx[2] == i && fieldery[2] == j)
			{
				SetConsoleTextAttribute(h, 160);
				cout << 3;
				SetConsoleTextAttribute(h, 170);
			}
			else if (fielderx[3] == i && fieldery[3] == j)
			{
				SetConsoleTextAttribute(h, 160);
				cout << 4;
				SetConsoleTextAttribute(h, 170);
			}
			else if (fielderx[4] == i && fieldery[4] == j)
			{
				SetConsoleTextAttribute(h, 160);
				cout << 5;
				SetConsoleTextAttribute(h, 170);
			}
			else if (fielderx[5] == i && fieldery[5] == j)
			{
				SetConsoleTextAttribute(h, 160);
				cout << 6;
				SetConsoleTextAttribute(h, 170);
			}
			else if (fielderx[6] == i && fieldery[6] == j)
			{
				SetConsoleTextAttribute(h, 160);
				cout << 7;
				SetConsoleTextAttribute(h, 170);
			}
			else if (fielderx[7] == i && fieldery[7] == j)
			{
				SetConsoleTextAttribute(h, 160);
				cout << 8;
				SetConsoleTextAttribute(h, 170);
			}
			else if (fielderx[8] == i && fieldery[8] == j)
			{
				SetConsoleTextAttribute(h, 160);
				cout << 9;
				SetConsoleTextAttribute(h, 170);
			}

			else
			{
				if (j < 31 && j>10 && i > 25 && i < 35) {
					SetConsoleTextAttribute(h, 102);
					cout << " ";
					SetConsoleTextAttribute(h, 172);
				}
				else
				{
					SetConsoleTextAttribute(h, 172);
					cout << " ";
				}

			}

		}
		cout << endl;

	}


	//system("cls");
	SetConsoleCursorPosition(h, c);

}
void input()//functions to call out for keyboard inputs

{


	if (_kbhit())
	{
		z = _getch();
		switch (z)
		{
		case '1':
			position = fielder1; break;
		case '2':
			position = fielder2; break;
		case '3':
			position = fielder3; break;
		case '4':
			position = fielder4; break;
		case '5':
			position = fielder5; break;
		case '6':
			position = fielder6; break;
		case '7':
			position = fielder7; break;
		case '8':
			position = fielder8; break;
		case 'a':
			if (!(bally == bowlerY && ballx == bowlerX)) { fielderDirection = Left; break; }
		case 'd':
			if (!(bally == bowlerY && ballx == bowlerX)) { fielderDirection = Right; break; }
		case 'w':
			if (!(bally == bowlerY && ballx == bowlerX)) { fielderDirection = Up; break; }
		case 's':
			if (!(bally == bowlerY && ballx == bowlerX)) { fielderDirection = Down; break; }

		}
		if (bally == bowlerY && ballx == bowlerX)
		{
			switch (z)
			{
			case 'a':
				bowler = LEFT;
				break;
			case'd':
				bowler = RIGHT;
				break;
			case'w':
				ball = UP;
				break;
			case 's':
				bowler = DOWN;
				break;
			case'x':
				gameOver = true;
				break;
			}
		}
		else if (bally == playerY /*|| (bally <= playerY + 1 && bally > playerY - 1)*/)
		{

			switch (z)
			{
			case 'h':
				ball = LEFT;
				break;
			case'k':
				ball = RIGHT;
				break;
			case'u':
				ball = UP;
				z = 1;
				break;
			case'j':
				ball = DOWN;
				break;
			case 'v':
				gameOver = true;
				wicket = 10;
				break;

			}

		}
		/*else if(bally == bowlerY && ballx == bowlerX)
		{
		switch (z)
		{
		case 'h':
		Batsman = LEFT;
		break;
		case'k':
		Batsman = RIGHT;
		break;
		case'u':
		Batsman = UP;
		z = 1;
		break;
		case'j':
		Batsman = DOWN;
		break;
		case'x':
		gameOver = true;
		break;

		}
		}*/

		if ((ball == DOWN || ball == RIGHT || ball == LEFT) && (Wide || (Ballp>5 && Ballp<15))) {
			ball = UP;
		}

		z = '0';
	}

}

void logic()//logic considering function for all marks,no balls,wide balls,wickets,boundries

{
	switch (fielderDirection)
	{
	case Up:
		fieldery[Position]--; break;
	case Down:
		fieldery[Position]++; break;
	case Left:
		fielderx[Position]--; break;
	case Right:
		fielderx[Position]++; break;
	}
	switch (position)
	{
	case  fielder1:
		Position = 0; break;
	case fielder2:
		Position = 1; break;
	case  fielder3:
		Position = 2; break;
	case fielder4:
		Position = 3; break;
	case  fielder5:
		Position = 4; break;
	case fielder6:
		Position = 5; break;
	case  fielder7:
		Position = 6; break;
	case fielder8:
		Position = 7; break;
	}
	switch (ball)
	{

	case UP:
		bally--;
		break;

	case DOWN:
		if (Wide == false) {
			if (Post == 1)
			{
				ballx--;
				bally++;
				bat = 5;
			}
			else if (Post == 2)
			{
				bally++;
				bat = 4;
			}
			else
			{
				ballx++;
				bally++;
				bat = 3;
			}
		}
		break;

	case RIGHT:
		if (Wide == false) {
			if (Post == 1)
			{
				ballx++;
				bally--;
				bat = 2;
			}
			else if (Post = 2)
			{
				ballx++;
				bat = 2;
			}
			else {
				ballx++;
				bally++;
				bat = 3;
			}
		}
		break;

	case LEFT:
		if (Wide == false) {
			if (Post == 1)
			{
				ballx--;
				bally--;
				bat = 1;
			}
			else if (Post == 2)
			{
				ballx--;
				bat = 1;
			}
			else
			{
				ballx--;
				bally++;
				bat = 5;
			}
		}
		break;
	}

	switch (bowler)
	{
	case LEFT:
		bowlerX = 28;
		ballx = 28;
		break;
	case RIGHT:
		bowlerX = 32;
		ballx = 32;
		break;
	case DOWN:
		bowlerX = 30;
		ballx = 30;
	}
	/*switch (Batsman)
	{

	case DOWN:
	playerX=30; break;
	case LEFT:
	playerX = 28; break;
	case RIGHT:
	playerX = 32; break;
	}*/

	if (Ballp < 5) { NoBall = true; }
	else if (Ballp < 15) { wicket = true; }
	else if (Ballp < 25) { Wide = true; }
	else { good = true; }

	if (good)
	{
		for (int i = 0; i < 10; i++)
		{
			if (ballx == fielderx[i] && bally == fieldery[i] && i != 1)
			{
				if (BallCondition < 10) { wicket = true; newball = true; }
				else if (BallCondition < 20) { ifzero = true; newball = true; }
				else if (BallCondition < 35) { Iffour = true; }
				else if (BallCondition < 50) { Ifsix = true; }
				else if (BallCondition < 70) { Iftwo = true; newball = true; }
				else if (BallCondition < 100) { Ifone = true; newball = true; }
			}
		}
	}
	else if (NoBall)
	{
		for (int i = 0; i < 10; i++)
		{
			if (ballx == fielderx[i] && bally == fieldery[i] && i != 1)
			{
				if (BallCondition < 10) { newball = true; wicket = false; }
				else if (BallCondition < 20) { ifzero = true; newball = true; }
				else if (BallCondition < 35) { Iffour = true; }
				else if (BallCondition < 50) { Ifsix = true; }
				else if (BallCondition < 70) { Iftwo = true; newball = true; }
				else if (BallCondition < 100) { Ifone = true; newball = true; }
			}
		}
	}

	if (ballx == fielderx[1] && bally == fieldery[1] && !wicket && !(Wide || NoBall)) { newball = true; NumOfBall++; }
	if (ballx == fielderx[1] && bally == fieldery[1] && wicket) { newball = true; NumOfBall++; }
	else if (ballx == fielderx[1] && bally == fieldery[1] && NoBall) { newball = true; }
	if (ballx == fielderx[1] && bally == fieldery[1] && Wide) { newball = true; }
	if (ballx >= width || bally >= height || ballx <= 0 || bally <= 0) { newball = true; }
}




void scoreBoard()//scoreboard function

{
	s.X = 70;
	s.Y = 0;
	for (int i = 70; i <= 105; i++)
	{
		s.X = i;
		SetConsoleCursorPosition(h, s);
		cout << "0";
	}
	for (int j = 1; j <= 30; j++)
	{
		for (int i = 70; i <= 105; i++)
		{
			s.X = i;
			s.Y = j;
			SetConsoleCursorPosition(h, s);

			if (j == 2 && i == 72)
			{
				SetConsoleTextAttribute(h, 240);
				cout << "\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB";
			}
			if (j == 3 && i == 72)
			{
				cout << "\xDB     \xDB     \xDB  \xDB  \xDB  \xDB  \xDB";
			}
			if (j == 4 && i == 72)
			{
				cout << "\xDB\xDB\xDB\xDB  \xDB     \xDB  \xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB";
			}
			if (j == 5 && i == 72)
			{
				cout << "   \xDB  \xDB     \xDB  \xDB  \xDB \xDB   \xDB   ";
			}
			if (j == 6 && i == 72)
			{
				cout << "\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB  \xDB  \xDB\xDB\xDB\xDB";
			}
			if (j == 8 && i == 76)
			{
				cout << "\xDB\xDB\xDB   \xDB\xDB\xDB\xDB   \xDB\xDB   \xDB\xDB\xDB\xDB  \xDB\xDB\xDB ";
			}
			if (j == 9 && i == 76)
			{
				cout << "\xDB  \xDB  \xDB  \xDB  \xDB  \xDB  \xDB  \xDB  \xDB  \xDB";
			}
			if (j == 10 && i == 76)
			{
				cout << "\xDB\xDB\xDB\xDB  \xDB  \xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB  \xDB";
			}
			if (j == 11 && i == 76)
			{
				cout << "\xDB  \xDB  \xDB  \xDB  \xDB  \xDB  \xDB \xDB   \xDB  \xDB";
			}
			if (j == 12 && i == 76)
			{
				cout << "\xDB\xDB\xDB   \xDB\xDB\xDB\xDB  \xDB  \xDB  \xDB  \xDB  \xDB\xDB\xDB ";
			}


			if (j == 15 && i == 72)
			{
				cout << "Batsman : " << batsman;
			}
			if (j == 18 && i == 72)
			{
				cout << "Runs  " << runs;
			}
			if (j == 21 && i == 72)
			{
				cout << "Wickets : " << wickets;
			}
			if (j == 25 && i == 72)
			{
				cout << "bowler : " << bowlerN;
			}
			if (j == 28 && i == 72)
			{
				cout << "Overs : " << NumOfBall / 6 << "." << NumOfBall % 6;
			}
		}
	}
	for (int i = 70; i <= 105; i++)
	{
		s.Y = 23;
		s.X = i;
		SetConsoleCursorPosition(h, s);
		cout << "0";
	}
	for (int i = 70; i <= 105; i++)
	{
		s.Y = 14;
		s.X = i;
		SetConsoleCursorPosition(h, s);
		cout << "0";
	}
	for (int i = 70; i <= 105; i++)
	{
		s.Y = 30;
		s.X = i;
		SetConsoleCursorPosition(h, s);
		cout << "0";
	}
	for (int j = 1; j <= 30; j++)
	{
		s.Y = j;
		SetConsoleCursorPosition(h, s);
		cout << "0";
	}
	for (int j = 1; j <= 30; j++)
	{
		s.X = 70;
		s.Y = j;
		SetConsoleCursorPosition(h, s);
		cout << "0";
	}

}


void scores()//score calculation function

{
	if (ifzero == true) { NumOfBall++; }
	else if (Iftwo == true) { runs = runs + 2;   NumOfBall++; }
	else if (Ifone == true) { runs = runs + 1;   NumOfBall++; }
	else if (Ifsix == true) { runs = runs + 6;   NumOfBall++; }
	else if (Iffour == true) { runs = runs + 4;   NumOfBall++; }
	else if (NoBall == true) { runs = runs + 1; }
	else if (Wide == true) { runs = runs + 1; }
	if (NumOfBall % 6 == 0)
	{
		if (NumOfBall % 6 == 0 && (Wide || NoBall))
		{
			NextOver = false;
		}
		else if (NumOfBall % 6 == 0 && (!Wide || !NoBall))
		{
			NextOver = true;
		}
	}
	if (wicket == true) { wickets++; }
}




int begin_play()//main function for playing the game
{
	system("color F0");
	int i = 0;
	int a;
	c.X = 0;
	c.Y = 0;
	wicket = true;
	NextOver = true;
	wickets != 10;
	while (!gameOver || wickets != 10)
	{
		Ifsix = false, Iffour = false, Iftwo = false, ifzero = false, Ifone = false;
		bat = 0;
		Wide = false;
		Ballp = rand() % 100;
		BallCondition = rand() % 100;
		ball = STOP;
		ballx = 30;
		bally = 28;

		if (wicket == true)
		{
			system("cls");

			cout << "input the batsman name a:- ";
			cin >> batsman;
			NamesOfBatsman[i] = batsman;
			i++;

		}

		if (NextOver == true)
		{
			system("cls");

			cout << "input the bowler name :- ";
			cin >> bowlerN;
		}
		scoreBoard();
		newball = false;
		wicket = false;
		NextOver = false;
		for (; newball == false; )
		{

			draw();
			input();
			logic();
			z = '0';
			fielderDirection = Stop;
		}
		if (wicket == true)
		{
			system("cls");
			outdisplay();
		}
		/*system("cls");
		system("pause");
		cout << NextOver;*/
		scores();


		scoreBoard();
		//system("pause");
	}
	gameoveranimo();
	
	return 0;
}