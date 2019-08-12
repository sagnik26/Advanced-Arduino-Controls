const int btn=2; //digital pin 2 of arduino connected with a tactile push button button 
const int led=5; //digital pin 5 of arduino connected to a led with a 470 ohm resistor
void setup() {
  // put your setup code here, to run once:
DDRD = B00100000; 
PORTD = B00000100;
}

void loop() 
{
  // put your main code here, to run repeatedly:

int val = ((1 << btn) & PIND) >> btn;

if(val==LOW)
{
  PORTD = (1 << led) | PORTD;
  }
else
 {
  PORTD = ~(1 << led) & PORTD;
  }
 
}
