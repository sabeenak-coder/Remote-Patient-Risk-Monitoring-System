#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define HEART_SENSOR_PIN 36  // Potentiometer 1 (Heart Rate)
#define TEMP_SENSOR_PIN 39   // Potentiometer 2 (Temperature)
#define ALERT_BUTTON 15
#define BUZZER 23

void setup() {
    Serial.begin(115200);

    pinMode(HEART_SENSOR_PIN, INPUT);
    pinMode(TEMP_SENSOR_PIN, INPUT);
    pinMode(ALERT_BUTTON, INPUT_PULLUP);
    pinMode(BUZZER, OUTPUT);

    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
        Serial.println("SSD1306 allocation failed");
        while (true);
    }
    display.clearDisplay();
}

void loop() {
    int heartRate = analogRead(HEART_SENSOR_PIN) / 40; // Simulating BPM
    float temperature = (analogRead(TEMP_SENSOR_PIN) / 20.0) + 20.0; // Simulating Temp in °C

    Serial.print("Heart Rate: ");
    Serial.print(heartRate);
    Serial.print(" BPM | Temperature: ");
    Serial.print(temperature);
    Serial.println("°C");

    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0, 10);
    display.print("Heart Rate: ");
    display.print(heartRate);
    display.println(" BPM");
    
    display.setCursor(0, 30);
    display.print("Temperature: ");
    display.print(temperature);
    display.println(" C");
    
    display.display();

    if (digitalRead(ALERT_BUTTON) == LOW) {
        Serial.println("EMERGENCY ALERT! Patient needs help!");
        display.setCursor(0, 50);
        display.print("!! EMERGENCY ALERT !!");
        display.display();
        digitalWrite(BUZZER, HIGH);
        delay(1000);
        digitalWrite(BUZZER, LOW);
    }

    delay(1000);
}
