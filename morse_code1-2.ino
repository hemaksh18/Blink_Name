const int Pin1 = 2; // for button
const int Pin2 = LED_BUILTIN; // for LED 
bool Blinking = false;

const int .delay = 200; 
const int _delay = 3 * .delay; 

void setup() {
  pinMode(Pin1, INPUT);
  pinMode(Pin2, OUTPUT);
}

void loop() {
  if (digitalRead(Pin1) == HIGH) {
    while (digitalRead(Pin1) == HIGH) {
      
    }
    
    if (!Blinking) {
      blinkName("hemaksh"); 
      Blinking = true;
    } else {
      Blinking = false;
      digitalWrite(Pin2, LOW); 
      delay(1000); 
    }
  }
}

void blinkName(const char *name) {
  
  for (int i = 0; name[i] != '\0'; i++) {
    if (name[i] == ' ') {
      delay(7 * .delay); 
    } else {
      blinkLetter(name[i]);
    }
  }
}
void blinkLetter(char letter) {
  switch (letter) {
    case 'H':
     
      digitalWrite(Pin2, HIGH);
      delay(.Delay);
      digitalWrite(Pin2, LOW);
      delay(.Delay);
      digitalWrite(Pin2, HIGH);
      delay(.Delay);
      digitalWrite(Pin2, LOW);
      delay(.Delay);
      break;

    case 'E':
     
      digitalWrite(Pin2, HIGH);
      delay(.Delay);
      digitalWrite(Pin2, LOW);
      delay(.Delay);
      break;
    
    case 'M':
      
      digitalWrite(Pin2, HIGH);
      delay(_Delay);
      digitalWrite(Pin2, LOW);
      delay(.Delay); 
      digitalWrite(Pin2, HIGH);
      delay(_Delay);
      digitalWrite(Pin2, LOW);
      delay(_Delay); 
      break;
    
    case 'A':

      digitalWrite(Pin2, HIGH);
      delay(.Delay);
      digitalWrite(Pin2, LOW);
      delay(.Delay);
      digitalWrite(Pin2, HIGH);
      delay(_Delay);
      digitalWrite(Pin2, LOW);
      delay(_Delay); 
      break;

  
    case 'K':
  
    digitalWrite(Pin2, HIGH);
    delay(_Delay);
    digitalWrite(Pin2, LOW);
    delay(.Delay); 
    digitalWrite(Pin2, HIGH);
    delay(.Delay);
    digitalWrite(Pin2, LOW);
    delay(_Delay);
    digitalWrite(Pin2, HIGH);
    delay(_Delay);
    digitalWrite(Pin2, LOW);
    delay(_Delay); 
    break;

    case 'S':
      
      digitalWrite(Pin2, HIGH);
      delay(.Delay);
      digitalWrite(Pin2, LOW);
      delay(.Delay); 
      digitalWrite(Pin2, HIGH);
      delay(.Delay);
      digitalWrite(Pin2, LOW);
      delay(.Delay); 
      digitalWrite(Pin2, HIGH);
      delay(.Delay);
      digitalWrite(Pin2, LOW);
      delay(.Delay); 
      break;

    default:
      delay(300); 
      break;
  }
}



