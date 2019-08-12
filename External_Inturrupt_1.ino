const uint8_t btn=2;
const uint8_t led=5;

void setup() {
  // put your setup code here, to run once:
DDRD = B00100000;
PORTD = B00000100;

Serial.begin(9600);

attachInterrupt(digitalPinToInterrupt(btn),toggle,FALLING);
}

void loop() 
{
  // put your main code here, to run repeatedly:

delay(500);

}

int toggle()
{
  PORTD ^=(1 << led);
  
  }
