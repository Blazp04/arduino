### Potrebne komponente

|  Arduino |  X1 |
| ------------ | ------------ |
| Led dioda  |  X1 |
|  Otpornik | X1  |

------------


### Objašnjenje koda

```cpp
  for(int ledVal = 0; ledVal <= 255; ledVal +=1) {
    analogWrite(ledPin, ledVal);
    delay(15);
  }  
```
For petlja će proći kroz svaku moćugu kombinaciju sve dok uvjet ne bude ispunjen.
Za početak deklariramo varijablu "ledVal" koja u početku ima vrijednost 0. 
Nakon toga zadajemo uvjet ako je vrijednost varijable manja ili jednaka od 255 da poveća vrijednost varijable za 1 (`ledVal +=1`). Sve dok uvjet nije ispunjen vrši se kod koji se nalazi između vitičasti zagrada.

**Sintaxa for petlje**

```cpp
for (inicijalizacija varijable; uvijet; povećavanje varijable) {
  // kod
}
```

**Varijable**

Varijabla je mjesto za pohranjivanje dijela podataka. Ima naziv, vrijednost i vrstu.
Primjer jedne varijable: `int ledVBal = 0`.
Ova varijabla ima tip `int` što znači da u nju možemo pohraniti brojeve.
`ledVal` označava ime varijable. Svaki put kada pristupamo varijabli koristimo njezino ime. Npr: `ledVal += 1`. 

**Osnovni tipovi podataka**

|  Tip varijable | Vrsta podataka  |
| ------------ | ------------ |
| int  | cijeli broj |
|  String | text  |
|  bool | true/false  |
|  float |  decimalni broj |

Postoji još vrsta podataka koje nisu spomenute ovdje

**AnalogWrite**

    analogWrite(pin, vrijednost);

Omogućuje puštanje određenog napona na određen pin. Valja napomenuti da se analogWrite može koristiti samo na pinovima koji podržavaju PWM signale. 
Vrijednost može varirati između 0 i 255, gdje je 0 = 0V, a 255 = 5V

| Microcontroller  | PWM pinovi  | PWM frekvencija  |
| ------------ | ------------ | ------------ |
| Uno, Nano, Mini  | 3, 5, 6, 9, 10, 11  | 490 Hz (pins 5 and 6: 980 Hz)  |
| Mega  | 2 - 13, 44 - 46  |  490 Hz (pins 4 and 13: 980 Hz) |
| Leonardo, Micro, Yún  |  3, 5, 6, 9, 10, 11, 13 | 490 Hz (pins 3 and 11: 980 Hz)  |
| Uno WiFi Rev2, Nano Every  | 3, 5, 6, 9, 10  |  976 Hz |
| MKR boards *  |  0 - 8, 10, A3, A4 |  732 Hz |
|  MKR1000 WiFi * | 0 - 8, 10, 11, A3, A4  | 732 Hz  |
| Zero *  | 3 - 13, A0, A1  | 732 Hz  |
|  Nano 33 IoT * | 2, 3, 5, 6, 9 - 12, A2, A3, A5  | 732 Hz  |
| Nano 33 BLE/BLE Sense  | 1 - 13, A0 - A7  | 500 Hz  |




------------

###  Korisni linkovi
[Simulacija](https://wokwi.com/projects/340245559319200339 "Simulacija")<br>
[For loop](https://www.arduino.cc/reference/en/language/structure/control-structure/for/ "For loop")<br>
[varijable](https://docs.arduino.cc/learn/programming/variables "varijable")<br>
[bool](https://www.arduino.cc/reference/en/language/variables/data-types/bool/ "bool")<br>
[analogWrite](https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/ "analogWrite") <br>

------------


### Shema

[![Shema](https://github.com/Blazp04/arduino/blob/main/L01-led-blink/shema.png "Shema")](https://github.com/Blazp04/arduino/blob/main/L01-led-blink/shema.png "Shema")









