### Potrebne komponente

|  Arduino |  X1 |
| ------------ | ------------ |
| Led dioda  |  X1 |
|  Otpornik | X1  |

------------


### Objašnjenje koda

`int led = 12;`  - deklariramo varijablu koja koja ima neku brojčanu vrijednost (int)

`pinMode(led, OUTPUT);` - postavljamo pin 12 da se ponaša kao izlaz

` digitalWrite(led, HIGH);` - puštamo napon od 5V na pin 12

`  delay(500);` - čekamo 500ms

` digitalWrite(led, LOW);` - prekidamo napon na pinu broj 12



------------

###  Korisni linkovi
[Simulacija](https://wokwi.com/projects/340245559319200339 "Simulacija") <br>
[PinMode - detaljno objašnjenje](https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/ "Dokumentacija") <br>
[DigitalWrite - detaljno objašnjenje](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/ "DigitalWrite detaljno objašnjenje") <br>
[Delay - detaljno objašnjenje](https://www.arduino.cc/reference/en/language/functions/time/delay/ "Delay detaljno objašnjenje") <br>
[Diode](https://www.electronics-tutorials.ws/diode/diode_8.html "Diode") <br>

------------

### Koji otpornik treba staviti

kako bismo izračunali koji otpornik trebamo staviti korisiti ćemo se omovim zakonom koji glasi: `I=R/U`

gdje je:

| I  | Jakost struje(A) |
| ------------ | ------------ |
| R  | Otpor (Ω)  |
| U  | Napon (V)  |

Tipična dioda radi na 20mA, dok napon koji koristi ovisi prema boji koju dioda emitira.

|  Boja | Napon  |
| ------------ | ------------ |
| Infra crvena  | 1.2 V  |
| Crvena  |  1.8 V |
|  Narančasta | 2.0 V  |
| Žuta  |  2.2 V |
|  Zelena |  3.5 V |
|  Plava | 3.6 V |
|  Bijela |  4.0 V |

Digitalni pin kod arduina je na potencionalu od 5V.
Ako koristimo crvenu diodu pad napona na diodi je 1.8 V što znači da će nam ostati 3.2 V "viška". Taj višak mora otići negdje, u našem slučaju to je otpornik.

Prema formoli `R = U/I` možemo izračunati otpor.

`R = 3.2V/0.02A = 1600 Ω`

------------

### Shema

[![Shema](https://github.com/Blazp04/arduino/blob/main/L01-led-blink/shema.png "Shema")](https://github.com/Blazp04/arduino/blob/main/L01-led-blink/shema.png "Shema")









