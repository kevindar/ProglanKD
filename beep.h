#ifndef BEEP_H_
#define BEEP_H_

#define BEEP Beep(500,85);
#define CHOOSE Beep(1000,85);

#define C4 Beep(262,220);
#define Ces4 Beep(277,220);
#define D4 Beep(293,220);
#define Des4 Beep(311,220);
#define E4 Beep(330,100);
#define F4 Beep(350,100);
#define Fes4 Beep(370,220);
#define G4 Beep(391,220);
#define Ges4 Beep(415,220);
#define A4 Beep(440,100);
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

#define ONE Sleep(880);
#define HALF Sleep(480);
#define FORTH Sleep(220);

void winSong(){
	C4 D4 E4 G4 Beep(494, 480); FORTH Beep(391, 480); Beep(523, 700);
}

void splashSong(){
	C4 FORTH Beep(350,600); F4 F4 HALF G4 FORTH Beep(440, 500); A4 A4 HALF
	Beep(440, 500); FORTH Beep(391, 500); F4 G4 Beep(440, 400); Beep(391, 400); F4
}

#endif
