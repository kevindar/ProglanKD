#include <windows.h>
#include<stdio.h>

#define C4 Beep(262,220);
#define Ces4 Beep(277,220);
#define D4 Beep(293,220);
#define Des4 Beep(311,220);
#define E4 Beep(330,220);
#define F4 Beep(350,220);
#define Fes4 Beep(370,220);
#define G4 Beep(391,220);
#define Ges4 Beep(415,220);
#define A4 Beep(440,220);
#define Aes4 Beep(466,220);
#define B4 Beep(494,220);

#define C5 Beep(523,220);
#define Ces5 Beep(554,220);
#define D5 Beep(587,220);
#define Des5 Beep(622,220);
#define E5 Beep(659,220);
#define F5 Beep(698,220);
#define Fes5 Beep(740,220);
#define G5 Beep(784,220);
#define Ges5 Beep(831,220);
#define A5 Beep(880,220);
#define Aes5 Beep(932,220);
#define B5 Beep(988,220);

#define C6 Beep(1046, 200);
#define C7 Beep(2093,200);


#define HALF Sleep(500);
#define FORTH Sleep(250);

int main(){
	Beep(262,400); D4 E4 F4 G4 A4 B4 C5 HALF C6  C6 C6
	return 0;
}
