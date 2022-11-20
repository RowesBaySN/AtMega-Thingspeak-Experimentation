#include <UTFT.h>
#include <Adafruit_TFTLCD.h>
#include <textparser.h>
#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define PURPLE  0x58BD
#define PINK    0xB9FA
#define YELLOW  0xFFE0
#define WHITE   0xFFFF
#define GREY    0xD6BA

TextParser parser(",");  // Delimiter is a comma followed by a space.
UTFT myGLCD(ILI9481,38,39,40,41);

int room1t, room2t, room3t, room4t, room5t, room6t, room7t, room8t;
int room1h, room2h, room3h, room4h, room5h, room6h, room7h, room8h;
String inString;
char raw;

extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t SevenSegNumFont[];
extern uint8_t GroteskBold16x32_DK_NO[];
extern uint8_t ArialNumFontPlus[];

extern unsigned int Sun[];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial3.begin(115200);
  myGLCD.InitLCD(PORTRAIT);
}

void loop() {
  delay(3000);
  myGLCD.clrScr();
  myGLCD.drawBitmap(95, 30, 125, 125, Sun); //1st set is x axis when portrait second is y (starts from top) axis
  myGLCD.setColor(94, 23, 235);
  myGLCD.setBackColor(0, 0, 0);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room1t, 110, 180);
  myGLCD.setFont(BigFont);
  myGLCD.print("0", 170, 180, 0);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("C", 190, 200, 0);
  myGLCD.setColor(186, 61, 211);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room1h, 110, 250);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("%", 180, 270, 0);
  myGLCD.print("Room 1", 100, 320, 0);

  delay(3000);
  myGLCD.clrScr();
  myGLCD.drawBitmap(95, 30, 125, 125, Sun); //1st set is x axis when portrait second is y (starts from top) axis
  myGLCD.setColor(94, 23, 235);
  myGLCD.setBackColor(0, 0, 0);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room2t, 110, 180);
  myGLCD.setFont(BigFont);
  myGLCD.print("0", 170, 180, 0);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("C", 190, 200, 0);
  myGLCD.setColor(186, 61, 211);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room2h, 110, 250);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("%", 180, 270, 0);
  myGLCD.print("Room 2", 100, 320, 0);

  delay(3000);
  myGLCD.clrScr();
  myGLCD.drawBitmap(95, 30, 125, 125, Sun); //1st set is x axis when portrait second is y (starts from top) axis
  myGLCD.setColor(94, 23, 235);
  myGLCD.setBackColor(0, 0, 0);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room3t, 110, 180);
  myGLCD.setFont(BigFont);
  myGLCD.print("0", 170, 180, 0);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("C", 190, 200, 0);
  myGLCD.setColor(186, 61, 211);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room3h, 110, 250);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("%", 180, 270, 0);
  myGLCD.print("Room 3", 100, 320, 0);

  delay(3000);
  myGLCD.clrScr();
  myGLCD.drawBitmap(95, 30, 125, 125, Sun); //1st set is x axis when portrait second is y (starts from top) axis
  myGLCD.setColor(94, 23, 235);
  myGLCD.setBackColor(0, 0, 0);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room4t, 110, 180);
  myGLCD.setFont(BigFont);
  myGLCD.print("0", 170, 180, 0);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("C", 190, 200, 0);
  myGLCD.setColor(186, 61, 211);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room4h, 110, 250);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("%", 180, 270, 0);
  myGLCD.print("Room 4", 100, 320, 0);

  delay(3000);
  myGLCD.clrScr();
  myGLCD.drawBitmap(95, 30, 125, 125, Sun); //1st set is x axis when portrait second is y (starts from top) axis
  myGLCD.setColor(94, 23, 235);
  myGLCD.setBackColor(0, 0, 0);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room5t, 110, 180);
  myGLCD.setFont(BigFont);
  myGLCD.print("0", 170, 180, 0);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("C", 190, 200, 0);
  myGLCD.setColor(186, 61, 211);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room5h, 110, 250);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("%", 180, 270, 0);
  myGLCD.print("Room 5", 100, 320, 0);

  delay(3000);
  myGLCD.clrScr();
  myGLCD.drawBitmap(95, 30, 125, 125, Sun); //1st set is x axis when portrait second is y (starts from top) axis
  myGLCD.setColor(94, 23, 235);
  myGLCD.setBackColor(0, 0, 0);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room6t, 110, 180);
  myGLCD.setFont(BigFont);
  myGLCD.print("0", 170, 180, 0);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("C", 190, 200, 0);
  myGLCD.setColor(186, 61, 211);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room6h, 110, 250);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("%", 180, 270, 0);
  myGLCD.print("Room 6", 100, 320, 0);

  delay(3000);
  myGLCD.clrScr();
  myGLCD.drawBitmap(95, 30, 125, 125, Sun); //1st set is x axis when portrait second is y (starts from top) axis
  myGLCD.setColor(94, 23, 235);
  myGLCD.setBackColor(0, 0, 0);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room7t, 110, 180);
  myGLCD.setFont(BigFont);
  myGLCD.print("0", 170, 180, 0);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("C", 190, 200, 0);
  myGLCD.setColor(186, 61, 211);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room7h, 110, 250);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("%", 180, 270, 0);
  myGLCD.print("Room 7", 100, 320, 0);

  delay(3000);
  myGLCD.clrScr();
  myGLCD.drawBitmap(95, 30, 125, 125, Sun); //1st set is x axis when portrait second is y (starts from top) axis
  myGLCD.setColor(94, 23, 235);
  myGLCD.setBackColor(0, 0, 0);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room8t, 110, 180);
  myGLCD.setFont(BigFont);
  myGLCD.print("0", 170, 180, 0);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("C", 190, 200, 0);
  myGLCD.setColor(186, 61, 211);
  myGLCD.setFont(ArialNumFontPlus);
  myGLCD.printNumI(room8h, 110, 250);
  myGLCD.setFont(GroteskBold16x32_DK_NO);
  myGLCD.print("%", 180, 270, 0);
  myGLCD.print("Room 8", 100, 320, 0);
}


void serialEvent3() {
  char line[80];
  if (not Serial3.readBytesUntil('\n', line, sizeof(line))) {
  return;
    }

  parser.parseLine(line, room1t, room2t, room3t, room4t, room5t, room6t, room7t, room8t, room1h, room2h, room3h, room4h, room5h, room6h, room7h, room8h);  // Etc.
  Serial.println(room1t);
  Serial.println(room2t);
  Serial.println(room3t);
  Serial.println(room4t);
  Serial.println(room5t);
  Serial.println(room6t);
  Serial.println(room7t);
  Serial.println(room8t);
  Serial.println(room1h);
  Serial.println(room2h);
  Serial.println(room3h);
  Serial.println(room4h);
  Serial.println(room5h);
  Serial.println(room6h);
  Serial.println(room7h);
  Serial.println(room8h);
   //Serial.write(raw);
   //inString += raw;
}
