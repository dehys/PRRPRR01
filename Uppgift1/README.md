# Uppgift 1

Kostnaderna för att hyra en hyrbil räknas fram enligt följande: -500 kr fast avgift per dag + 2 kr per mil om man hyr bilen upp till 3 dagar. -990 kr per dag och fri milkostnad om man hyr bilen mer än 3 dagar. Uthyrningsfirman vill ha ett enkelt program som hjälper till att ta fram hyreskostnaderna för hyrbilen om man anger antal hyrdagar och eventuellt antal mil som man har åkt med bilen.

___

## Analys
#### Vilket resultat vill vi ha:

> Vi vill räkna ut vad priset blir när man vill hyra en hyresbil beroende på hur många dagar man ska hyra bilen och hur många mil bilen har kört.

#### Vilka informationer är tillgänliga och hur tillförs dessa i programmet:
> Dagar bilen ska eller har hyrts i, samt miltalen bilen har kört anges via tangentbordet av användaren som heltal. Miltalen bilen har kört anges bara om > Dagarna bilen ska eller har hyrts i är mer än mindre än eller lika med 3.
> 
> Vi har tre informationer fastsatta:
> Pris1: 500kr - Om hyresdagarna är mindre eller lika med 3
> Pris2: 990kr - Om hyresdagarna är mer än 3
> Pris per miltal: 2kr - Om det är Pris1 som gäller

#### Hur kan man få fram resultatet i allmänna drag? Finns det fall där din lösning inte fungerar?
> Priset räknas ut beroende på antal dagar bilen ska hyras. Om dagarna är mindre eller likamed 3 så räknas priset ut genom:
> Pris1 + (Pris per miltal * Miltal)
> Om dagarna är mer än 3 så är det Pris2 som gäller.
> 
> Lösningen fungerar inte om användaren skriver in något som inte är ett heltal, de vill säga decimaler, karaktärer, ord mm...

#### Hur ser gränssnittet ut mellan användaren och programmet om det finns en kommunikation mellan användaren och programmet?
> Användaren ska kunna ange dagar hyresbilen ska eller har hyrts i och beroende på dagarna, ska användaren ochså ha möjlighet till att ange hur många mil > bilen har åkt. Utseenden som kan vara lämpliga:
> 
> 1)
>     Dagar bilen ska hyras: 3
>     Mil bilen har åkt: 10
>     Pris: 520kr
> 
> 2)  
>     Dagar bilen ska hyras: 4
>     Pris: 990kr

## Psuedokod
1. Fråga användaren hur många dagar bilen hyrdes/ska hyras i med hjälp av `cout`
2. Lagra det angivna heltalet av användaren I en Integer med hjälp av `cin`
3. Kolla om dagarna är mindre än eller likamed 3 (dagar <= 3) med hjälp av ett `if else` uttalande 
4. Om dagarna är mindre än eller likamed 3, Fråga användaren hur många mil bilen har kört. Lagra det angivna heltalet av användaren I en Integer med hjälp av `cin`. Skriv ut priset till användaren med hjälp av `cout`. Priset är lika med Dagar + (miltal*2) kr.
5. Om dagarna är mer än 3, skriv ut priset till användaren med hjälp av `cout`. Priset är lika med 990kr

## Flödesschema
<img src="https://i.imgur.com/M3k9cBl.jpeg">
