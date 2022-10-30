#include <Arduino.h>
#include "./../lib/example_lib.h"

ExampleLib *example = new ExampleLib();

void setup()
{
  Serial.begin(9600);
  Serial.println(example->printTest());
}

void loop()
{
  // put your main code here, to run repeatedly:
}