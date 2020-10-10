/*
                                              AAA                           
     +--------+-------------------------+    F   B                          
     |  Pins  |      2 3 4 5 6 7 8      |    F   B                          
     +--------+-------------------------+     GGG                           
     |  Seg   |     a b c d e f g       |    E   C                          
     +--------+-------------------------+    E   C                          
                                              DDD      
*/

#define delayTime 500

const char cList[] = {
 'a', // pin  2
 'b', // pin  3
 'c', // pin  4
 'd', // pin  5
 'e', // pin  6
 'f', // pin  7
 'g', // pin  8
   };

int characterArray[10][7] = {
	{1, 1, 1, 1, 1, 1, 0}, // 0   '0'          AAA
	{0, 1, 1, 0, 0, 0, 0}, // 1   '1'         F   B
	{1, 1, 0, 1, 1, 0, 1}, // 2   '2'         F   B
	{1, 1, 1, 1, 0, 0, 1}, // 3   '3'          GGG
	{0, 1, 1, 0, 0, 1, 1}, // 4   '4'         E   C
	{1, 0, 1, 1, 0, 1, 1}, // 5   '5'         E   C
	{1, 0, 1, 1, 1, 1, 1}, // 6   '6'          DDD
	{1, 1, 1, 0, 0, 0, 0}, // 7   '7'
	{1, 1, 1, 1, 1, 1, 1}, // 8   '8'
	{1, 1, 1, 1, 0, 1, 1}, // 9   '9'
};

void cleanScreen() {
  for (int i = 2; i <= 9; i++) {
    pinMode(i, INPUT);
  };
};

void displayDigit(int digit = 0) {
  for (int i = 2; i <= 9; i++) {
    pinMode(i, characterArray[digit][i - 2]);
  };
};
void setup() {
  
};

void loop() {
  for (int i = 0; i <= 9; i++) {
    displayDigit(i);
    delay(delayTime);
    cleanScreen();
  };
}
