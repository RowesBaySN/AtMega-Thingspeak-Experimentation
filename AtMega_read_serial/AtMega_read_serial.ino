#include <textparser.h>
TextParser parser(",");  // Delimiter is a comma followed by a space.

int room1t, room2t, room3t, room4t, room5t, room6t, room7t, room8t;
int room1h, room2h, room3h, room4h, room5h, room6h, room7h, room8h;
String inString;
char raw;

void setup()
{
   Serial.begin(115200);
   Serial3.begin(115200);
}

void loop()
{
  
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
