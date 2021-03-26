#include <dht.h> // inlcude the library of DHT11
#define dht_apin A0  // define the analog pin that we need to connect

dht DHT; // giving out dht sensor a name

void setup() {

  Serial.begin(9600); //baud rate at which we want to communicate (slower the better)
  delay(500);    //time to reboot the system
  Serial.println("DHT11 Humidity & temperature Sensor - Test\n\n");
  delay(1000); // small delay for the sensor to start functioning

}

void loop() {
  //Start of Program

  DHT.read11(dht_apin); //function to read the values from the pin A0

  Serial.print("Current humidity = ");
  Serial.print(DHT.humidity);
  Serial.print("%  ");
  Serial.print("temperature = ");
  Serial.print(DHT.temperature);
  Serial.println("C  ");

  delay(5000); //Use a delay before taking another set,(always try to use a delay greater than 2 secs)



}
