#define R_LED 8
#define G_LED 9
#define B_LED 10
#define I_LED 11
#define U_LED 12
#define LDR 0
#define DELAY 250
int i = 0;
void setup() {
  Serial.begin(9600);
    pinMode( R_LED, OUTPUT );
      pinMode( G_LED, OUTPUT );
        pinMode( B_LED, OUTPUT );
             pinMode( I_LED, OUTPUT );
                 pinMode( U_LED, OUTPUT );
}

void loop() {
  while(i< 100) {
    
    digitalWrite(R_LED, HIGH);
  delay( DELAY );
  Serial.print( "r: " ); 
  Serial.print( analogRead( LDR ) );
  delay( DELAY );
digitalWrite(R_LED, LOW);
  
digitalWrite(G_LED, HIGH);
  delay( DELAY );
  Serial.print( " g: " ); 
  Serial.print( analogRead( LDR ) );
  delay( DELAY );
digitalWrite(G_LED, LOW);
  
digitalWrite(B_LED, HIGH);
  delay( DELAY );
  Serial.print( " b: " ); 
  Serial.print( analogRead( LDR ) );
  delay( DELAY );
digitalWrite(B_LED, LOW);

digitalWrite(I_LED, HIGH);
  delay( DELAY );
  Serial.print( " i: " ); 
  Serial.print( analogRead( LDR ) );
  delay( DELAY );
digitalWrite(I_LED, LOW);

digitalWrite(U_LED, HIGH);
  delay( DELAY );
  Serial.print( " u: " ); 
  Serial.print( analogRead( LDR ) );
  delay( DELAY );
digitalWrite(U_LED, LOW);
  
  Serial.println();
    
  }
}
