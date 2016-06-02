

// DO RE MI Track Triggers
#define TDO1 14
#define TRE 15
#define TMI 16
#define TFA 17
#define TSO 18
#define TLA 19
#define TTI 20
#define TDO2 21

// DO RE MI LED Relays
#define LDO1 2
#define LRE 3
#define LMI 4
#define LFA 5
#define LSO 6
#define LLA 7
#define LTI 8
#define LDO2 9

// Cylinder Input Channels
#define Cyl1A 22
#define Cyl1B 23

#define Cyl2A 24
#define Cyl2B 25

#define Cyl3A 26
#define Cyl3B 27

#define Cyl4A 28
#define Cyl4B 29

#define Cyl5A 30
#define Cyl5B 31

#define Cyl6A 32
#define Cyl6B 33

#define Cyl7A 34
#define Cyl7B 35

#define Cyl8A 36
#define Cyl8B 37


void setup() {
  // put your setup code here, to run once:

  //DO1 - First Note In Cycle - Cylinder 1
  pinMode(TDO1, OUTPUT);
  pinMode(LDO1, OUTPUT);
  digitalWrite(TDO1, LOW);
  digitalWrite(LDO1, HIGH);
  pinMode(Cyl1A, INPUT_PULLUP);
  pinMode(Cyl1B, INPUT_PULLUP);

  //RE - Cylinder 8
  pinMode(TRE, OUTPUT);
  pinMode(LRE, OUTPUT);
  digitalWrite(TRE, LOW);
  digitalWrite(LRE, HIGH);
  pinMode(Cyl8A, INPUT_PULLUP);
  pinMode(Cyl8B, INPUT_PULLUP);

  //MI - Cylinder 4
  pinMode(TMI, OUTPUT);
  pinMode(LMI, OUTPUT);
  digitalWrite(TMI, LOW);
  digitalWrite(LMI, HIGH);
  pinMode(Cyl4A, INPUT_PULLUP);
  pinMode(Cyl4B, INPUT_PULLUP);

  //FA - Cylinder 3
  pinMode(TFA, OUTPUT);
  pinMode(LFA, OUTPUT);
  digitalWrite(TFA, LOW);
  digitalWrite(LFA, HIGH);
  pinMode(Cyl3A, INPUT_PULLUP);
  pinMode(Cyl3B, INPUT_PULLUP);

  //SO - Cylinder 6
  pinMode(TSO, OUTPUT);
  pinMode(LSO, OUTPUT);
  digitalWrite(TSO, LOW);
  digitalWrite(LSO, HIGH);
  pinMode(Cyl6A, INPUT_PULLUP);
  pinMode(Cyl6B, INPUT_PULLUP);

  //LA - Cylinder 5
  pinMode(TLA, OUTPUT);
  pinMode(LLA, OUTPUT);
  digitalWrite(TLA, LOW);
  digitalWrite(LLA, HIGH);
  pinMode(Cyl5A, INPUT_PULLUP);
  pinMode(Cyl5B, INPUT_PULLUP);

  //TI - Cylinder 7
  pinMode(TTI, OUTPUT);
  pinMode(LTI, OUTPUT);
  digitalWrite(TTI, LOW);
  digitalWrite(LTI, HIGH);
  pinMode(Cyl7A, INPUT_PULLUP);
  pinMode(Cyl7B, INPUT_PULLUP);

  //DO - Last Note In Cycle - Cylinder 2
  pinMode(TDO2, OUTPUT);
  pinMode(LDO2, OUTPUT);
  digitalWrite(TDO2, LOW);
  digitalWrite(LDO2, HIGH);
  pinMode(Cyl2A, INPUT_PULLUP);
  pinMode(Cyl2B, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  //DO - Cylinder 1
  if (digitalRead(Cyl1A) == LOW || digitalRead(Cyl1B) == LOW) {
    digitalWrite(TDO1, HIGH);
    digitalWrite(LDO1, LOW);
  }

  else if (digitalRead(Cyl1A) == HIGH && digitalRead(Cyl1B) == HIGH) {
    digitalWrite(TDO1, LOW);
    digitalWrite(LDO1, HIGH);
  }

  //RE - Cylinder 8
  if (digitalRead(Cyl8A) == LOW || digitalRead(Cyl8B) == LOW) {
    digitalWrite(TRE, HIGH);
    digitalWrite(LRE, LOW);
  }

  else if (digitalRead(Cyl8A) == HIGH && digitalRead(Cyl8B) == HIGH) {
    digitalWrite(TRE, LOW);
    digitalWrite(LRE, HIGH);
  }

  //MI - Cylinder 4
  if (digitalRead(Cyl4A) == LOW || digitalRead(Cyl4B) == LOW) {
    digitalWrite(TMI, HIGH);
    digitalWrite(LMI, LOW);
  }

  else if (digitalRead(Cyl4A) == HIGH && digitalRead(Cyl4B) == HIGH) {
    digitalWrite(TMI, LOW);
    digitalWrite(LMI, HIGH);
  }

  //FA - Cylinder 3
  if (digitalRead(Cyl3A) == LOW || digitalRead(Cyl3B) == LOW) {
    digitalWrite(TFA, HIGH);
    digitalWrite(LFA, LOW);
  }

  else if (digitalRead(Cyl3A) == HIGH && digitalRead(Cyl3B) == HIGH) {
    digitalWrite(TFA, LOW);
    digitalWrite(LFA, HIGH);
  }

  //SO - Cylinder 6
  if (digitalRead(Cyl6A) == LOW || digitalRead(Cyl6B) == LOW) {
    digitalWrite(TSO, HIGH);
    digitalWrite(LSO, LOW);
  }

  else if (digitalRead(Cyl6A) == HIGH && digitalRead(Cyl6B) == HIGH) {
    digitalWrite(TSO, LOW);
    digitalWrite(LSO, HIGH);
  }

  //LA - Cylinder 5
  if (digitalRead(Cyl5A) == LOW || digitalRead(Cyl5B) == LOW) {
    digitalWrite(TLA, HIGH);
    digitalWrite(LLA, LOW);
  }

  else if (digitalRead(Cyl5A) == HIGH && digitalRead(Cyl5B) == HIGH) {
    digitalWrite(TLA, LOW);
    digitalWrite(LLA, HIGH);
  }

  //TI - Cylinder 7
  if (digitalRead(Cyl7A) == LOW || digitalRead(Cyl7B) == LOW) {
    digitalWrite(TTI, HIGH);
    digitalWrite(LTI, LOW);
  }

  else if (digitalRead(Cyl7A) == HIGH && digitalRead(Cyl7B) == HIGH) {
    digitalWrite(TTI, LOW);
    digitalWrite(LTI, HIGH);
  }

  //DO - Cylinder 2
  if (digitalRead(Cyl2A) == LOW || digitalRead(Cyl2B) == LOW) {
    digitalWrite(TDO2, HIGH);
    digitalWrite(LDO2, LOW);
  }

  else if (digitalRead(Cyl2A) == HIGH && digitalRead(Cyl2B) == HIGH) {
    digitalWrite(TDO2, LOW);
    digitalWrite(LDO2, HIGH);
  }
}
