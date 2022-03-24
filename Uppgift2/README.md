# Uppgift 2

Skriv ett program som frågar efter ett antal sekunder och omvandlar det till timmar, minuter och sekunder:<br>
Använd operatorerna `/` och `%`

Exempel från en körning:<br>
Ange antal sekunder: 5000<br>
Antal timmar: 1<br>
Antal minuter: 23<br>
Antal sekunder: 20<br>

___

## Analys
#### Vilket resultat vill vi ha:

> Vi vill räkna ut vad givna sekunder av avändaren är omvandlat till Timmar, Minuter och Sekunder

#### Vilka informationer är tillgänliga och hur tillförs dessa i programmet:
> Sekunderna användaren vill omvandla till Timmar, Minuter och sekunder. För att få fram resultatet så måste vi omvandla givna sekunder till minuter, sedan minuter till timmar, och till sist få fram resten av Minuter från timmarna och resten av Sekunder från minuterna.

#### Hur kan man få fram resultatet i allmänna drag? Finns det fall där din lösning inte fungerar?
>För att få fram Timmar Minuter och Sekunder utifrån givna Sekunder av användaren så gör vi:<br>
><br>
> `Minuter = Sekunder givna / 60` - Eftersom det är 60 sekunder i en minut.<br>
> `Timmar = Ovanför Minuter / 60` - Eftersom det är 60 minuter i en timme<br>
><br>
>Sedan måste vi få fram resterande av `Minuter / 60` och `Sekunder / 60` - Detta gör vi genom att använda modulus `%`<br>
><br>
> `Minuter = Minuter%60`<br>
> `Sekunder = Sekunder%60`
> <br>
> <br>
> Denna lösningen fungerar inte om angivna sekunder inte är ett heltal

#### Hur ser gränssnittet ut mellan användaren och programmet om det finns en kommunikation mellan användaren och programmet?
> Användaren ska kunna ange sekunderna dem vill omvandla. Programmet ska inte ta slut efter första resultat utan vi vill att programmet tar slut endast när användaren känner sig klar. Detta gör så att användaren inte behöver köra om programmet flera gånger för att få flera resultat. Utseende som kan vara lämpligt:<br>
> <br>
>Ange sekunder: 5000<br>
>5000 sekunder är lika med:<br>
>   1 timmar<br>
>	23 minuter<br>
>	20 sekunder<br>
><br>
>I början av programmet så kan det vara bra att informera användaren av vad programmet gör. Exempel:<br>
><br>
>Transformera sekunder till<br>
>Timmar, Minuter, Sekunder<br>
>`CTRL + C` avbryter programmet

## Psuedokod
1. Skriv ut information av vad programmet gör till användaren
2. Fråga användaren om antal sekunder dem vill omvandla 
3. Ta in angiva heltal som en `string` och se till att det är en giltig `long` data typ
4. Om angivna heltal inte är en giltig `long` data typ, informera användaren att givet heltal är inte giltigt och fråga användaren om antal sekunder dem vill omvandla igen. Gör detta tills givet heltal är en giltig `long` data typ.
5. Omvandla sekunder angivna till en long, detta gör vi efter steg 4 eftersom vi är då säkra att angivna sekunder av användaren är en giltig `long` data typ.
6. Nu initierar vi först en `long` variabel som är lika med `angivna sekunder/60` - Vilket är minuter av sekunderna angivna.
7. Sedan initierar vi en till `long` variabel som är lika med `minuter variablen/60` - Vilket är timmar av minuterna.
8. Sätt variablerna `minuter` och `sekunder` till `variabel%60` för att få fram resterande minuter och sekunder av omvandlade resultat.
9. Skriv ut resultatet till användaren

## Flödesschema
<img src="">
