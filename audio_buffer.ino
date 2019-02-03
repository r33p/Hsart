int incomingAudio;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(" Ready \n");

}

void loop() {
  // put your main code here, to run repeatedly:
  incomingAudio = analogRead(A0);//read input from A0
  int audioBuffer[16];
  
  for (int i=0; i<16; i++){
    incomingAudio = analogRead(A0);//read input from A0
    audioBuffer[i] = incomingAudio;
    Serial.print(audioBuffer[i]);
    Serial.print(" ");
  }
 
  Serial.print("\n");

}
