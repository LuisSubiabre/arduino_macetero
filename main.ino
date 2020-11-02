int ledAzul = 3;
int ledVerde = 4;
int ledRojo = 13;

int sensor = A0;
int val = 0;

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    val = analogRead(sensor);
    Serial.println(val);
    
    //seco
    if(val >= 1000) {
      digitalWrite(ledRojo, HIGH);
      digitalWrite(ledAzul, LOW);
      digitalWrite(ledVerde, LOW);
    } 
    //muy humedo
    else if (val <= 500) {
      digitalWrite(ledRojo, LOW);
      digitalWrite(ledAzul, HIGH);
      digitalWrite(ledVerde, LOW);
    }
    //estado normal
    else {
      digitalWrite(ledRojo, LOW);
      digitalWrite(ledAzul, LOW);
      digitalWrite(ledVerde, HIGH);
    }
}
