SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

//void setup()
//{    
 // Serial.begin(9600);
 // pinMode(D5, OUTPUT);
 // pinMode(A5, INPUT);
//}

//void loop()
//{
  //int value = analogRead(A5);
  //Serial.println(value);
  //value = map(value, 0, 4095, 0, 255);
//}

// Define the pins for LED and photoresistor
const int ledPin = D5;
const int sensorPin = A5;

// Variables to store the current sensor and LED states
int sensorValue = 0;
int ledBrightness = 0;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set the LED pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the sensor value
  sensorValue = analogRead(sensorPin);

  // Invert the sensor value to calculate LED brightness
  ledBrightness = 255 - sensorValue / 4; // Adjust the division factor for desired sensitivity

  // Debugging: print sensor value and LED brightness to serial monitor
  Serial.println("Sensor Value: " + String(sensorValue));
  Serial.println("LED Brightness: " + String(ledBrightness));

  // Set the LED brightness
  analogWrite(ledPin, ledBrightness);

  // Delay for better visualization (adjust as needed)
  delay(100);
}