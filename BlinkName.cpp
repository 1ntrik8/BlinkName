/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Anonymous/Desktop/BlinkName/BlinkName/src/BlinkName.ino"
/*
 * Project BlinkName
 * Description: SIT210 - Ontrack Task 2.1P: Blink LED light to spell name in morse code
 * Author: Leigh Rowell - ID 219309149
 * GIT: https://github.com/1ntrik8/BlinkName
 * Date: 25/3/2020
 */

// Variables
void setup();
void loop();
void nextChar();
void nextFlash();
#line 10 "c:/Users/Anonymous/Desktop/BlinkName/BlinkName/src/BlinkName.ino"
int led = D7;							// output pin for LED.

int unitTime = 250;						// single time unit in milliseconds...
int dotTime = unitTime; 				// time period for LED to illuminate, representing a dot.
int dashTime = unitTime * 3; 			// time period for LED to illuminate, representing a dash.
int nextFlashPause = unitTime;			// time period to delay between dot/dash in a single character.
int nextCharPause = unitTime * 3;	 	// time period to pause between letters.
int nextWordPause = unitTime * 7; 		// time period to pause between words.

// Function prototypes
// Function code is below setup and loop functions.
void dot();
void dash();
void nextWord();
void A();
void B();
void C();
void D();
void E();
void FF();
void G();
void H();
void I();
void J();
void K();
void L();
void M();
void N();
void O();
void P();
void Q();
void R();
void S();
void T();
void U();
void V();
void W();
void X();
void Y();
void Z();
void NewLine();

// This function is called once at start up
// Set up Argon for running program.
void setup()
{
	//Setup the Blink Name
	pinMode(led, OUTPUT);

}

// This function loops forever
void loop()
{
	//This will run in a loop
	NewLine();
	nextChar();
	L();
	nextChar();
	E();
	nextChar();
	I();
	nextChar();
	G();
	nextChar();
	H();
	nextWord();
}

// Functions

void dot() // Turn LED on/off to indicate a dot.
{
	digitalWrite(led, HIGH);
	delay(dotTime);
	digitalWrite(led, LOW);
}

void dash() // Turn LED on/off to indicate a dash.
{
	digitalWrite(led, HIGH);
	delay(dashTime);
	digitalWrite(led, LOW);
}

void nextChar() // Pause between letters..
{
	delay(nextCharPause);
}

void nextWord() // Pause between words..
{
	delay(nextWordPause);
}

void nextFlash()
{
	delay(nextFlashPause);
}

// Letter functions (Translation to morsecode)
void A()
{
	dot();
	nextFlash();
	dash();
}

void B()
{
	dash();
	nextFlash();
	dot();
	nextFlash();
	dot();
	nextFlash();
	dot();
}

void C()
{
	dash();
	nextFlash();
	dot();
	nextFlash();
	dash();
	nextFlash();
	dot();
}

void D()
{
	dash();
	nextFlash();
	dot();
	nextFlash();
	dot();
}

void E()
{
	dot();
}

void FF() // 'F' creates an issue...
{
	dot();
	nextFlash();
	dot();
	nextFlash();
	dash();
	nextFlash();
	dot();
}

void G()
{
	dash();
	nextFlash();
	dash();
	nextFlash();
	dot();
}

void H()
{
	dot();
	nextFlash();
	dot();
	nextFlash();
	dot();
	nextFlash();
	dot();
}

void I()
{
	dot();
	nextFlash();
	dot();
}

void J()
{
	dot();
	nextFlash();
	dash();
	nextFlash();
	dash();
	nextFlash();
	dash();
}

void K()
{
	dash();
	nextFlash();
	dot();
	nextFlash();
	dash();
}

void L()
{
	dot();
	nextFlash();
	dash();
	nextFlash();
	dot();
	nextFlash();
	dot();
}

void M()
{
	dash();
	nextFlash();
	dash();
}

void N()
{
	dash();
	nextFlash();
	dot();
}

void O()
{
	dash();
	nextFlash();
	dash();
	nextFlash();
	dash();
}

void P()
{
	dot();
	nextFlash();
	dash();
	nextFlash();
	dash();
	nextFlash();
	dot();
}

void Q()
{
	dash();
	nextFlash();
	dash();
	nextFlash();
	dot();
	nextFlash();
	dash();
}

void R()
{
	dot();
	nextFlash();
	dash();
	nextFlash();
	dot();
}

void S()
{
	dot();
	nextFlash();
	dot();
	nextFlash();
	dot();
}

void T()
{
	dash();
}

void U()
{
	dot();
	nextFlash();
	dot();
	nextFlash();
	dash();
}

void V()
{
	dot();
	nextFlash();
	dot();
	nextFlash();
	dot();
	nextFlash();
	dash();
}

void W()
{
	dot();
	nextFlash();
	dash();
	nextFlash();
	dash();
}

void X()
{
	dash();
	nextFlash();
	dot();
	nextFlash();
	dot();
	nextFlash();
	dash();
}

void Y()
{
	dash();
	nextFlash();
	dot();
	nextFlash();
	dash();
	nextFlash();
	dash();
}

void Z()
{
	dash();
	nextFlash();
	dash();
	nextFlash();
	dot();
	nextFlash();
	dot();
}

void NewLine()
{
	dot();
	nextFlash();
	dash();
	nextFlash();
	dot();
	nextFlash();
	dash();
}
