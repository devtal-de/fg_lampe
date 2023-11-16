#include "Arduino.h"
#include "Wire.h"
#include "MCP_DAC.h"
#include "Adafruit_MCP3008.h"

//Pin Declarations
uint8_t ss_adc = PB1;
uint8_t ss_dac = PB2;

Adafruit_MCP3008 adc;
MCP_DAC dac;

void setup()
{
	Serial.begin(9600);
	adc.begin(ss_adc);
	dac.begin(ss_dac);
}

void loop()
{

}
