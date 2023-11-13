# JAM - Jamming Amplitude modulation
## Úvod
Zdravím, a vítejte v repozitáři mojí rušičky JAM kterou jsem sestavil a představil jako můj projekt pro EO2023
### Co je to JAM?
JAM je radiová rušička která narozdíl od klasických rušiček dokáže též skenovat kanály.
### Jak funguje?
JAM funguje jako každá jiná rušička. Stačí JAM naladit na stejnou frekvenci kterou chceme rušit, oskenovat a vybrat kanál, a ten následně rušit.
### Kde lze najít dokumentaci a schéma?
Dokumentaci zdrojového kódu a schéma lze najít v repozítáři.
### Na jakých frekvencích funguje?
#### 433 mHz
Na této frekvenci nalezneme široké spektrum zařízeních na dalkové ovládání. Běžně na této frekvenci operují vysílačky, dálkové ovladače, a IoT prvky.
#### 2.4 gHz
Na této frekvenci běží mnoho digitalních služeb jako je WiFi, GPS, a bluetooth.
### Je rušička legální?
Stavba a provoz rušiček sám legální je, ale problémy mohou nastat v případě že rušíme něco cizího. Tato rušička nebyla sestavena za účelém páchání trestné činnosti, ale pouze na vzdělávání v oblastech kybernetické bezpečnosti.
## Technické specifikace JAMu
### Platforma
Arduino NANO
### Frekvenční moduly
#### 433 mHz
NiceRF  STX882
#### 2.4 gHz
nRF24L01p+ PA+ LNA 2.4GHz
### Display
0,96" 128x64 OLED, I2C, SSD1306
## Technické specifikace demonstračního obvodu
### Popis
Jednoduchý obvod který ovládá led diodu pomocí dalkového ovládání.
### Seznam součástek
#### Komunikace
Sada bezdrátového ovládání 433MHz EV1527 4-kanály
#### Ostatní
Zdroj napájení
LED dioda x1
