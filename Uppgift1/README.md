# Uppgift 1.1
Hej jag heter Arijan Nikoci och jag älskar att programmera. Det började när jag gick i 8an i högstadiet (ungefär 6 år sedan). Jag hade alltid viljat ha en egen hemsida där jag kunde skriva massor med saker och göra den min egen men hade ingen aning om hur hemsidor funkade och hur dem var upbyggda för den delen. Jag började med att söka runt lite och kollade massor med YouTube videor på hur man skriver HTML och CSS kod och efter ett tag så fick jag upp min första hemsida. Men jag ville göra mer, tyckte hemsidor var lite för tråkigt, jag älskade att designa saker och få dem se snygga ut men ville fortfarande testa något nytt. Så mitt andra val var att testa på mig Java. Jag visste att spelet jag spelade som mest under den tiden, Minecraft, var skriven i Java och spelet I sig självt hade potential till att byggas på med så kallad "Mods". Så jag började att lära mig själv Java. Under tiden jag skrev java kod och till Minecraft för att få spel känslan kännas bättre för mig själv så testade jag på annat också som jag byggde upp en kärlek för, nämligen Kotlin. Jag skrev massor av Kotlin och Java kod för massor av själ. Det började med Minecraft, och sedan dess har brett ut sig till allt möjligt. Jag lärde mig också databaser, olika API'er och massor av nyttiga biblotek som gjorde livet enklare.

År 2018 så började min programmerings kurs i gymnasiet. Då hade vi C# som vi skulle lära oss. Jag hade tur eftersom C#'s och Java's grammatik är ganska lika varann. Men på fritiden så höll jag mig fortfarande till Java. Under gymnasie åren så lärde jag mig också PHP, NodeJS, Express, Go och massor med teknologier på min fritid. Började också dra mig ifrån operativ systemet Windows till Linux, där jag lärde mig shellscript och annat som är relaterat till UNIX.

Just nu sitter jag framför min laptop och skriver dethär på en dator som har Arch Linux som operativ system istället för det vanilga "windows" eller "macos". Att göra en övergång till Linux lärde mig ganska mycket hur datorer fungerar på en bred aspekt. Vad en dator och olika program gör för att vi ska som användare ska kunna se en bild framför oss på skärmen mm...

# Uppgift 1.2

Kostnaderna för att hyra en hyrbil räknas fram enligt följande: -500 kr fast avgift per dag + 2 kr per mil om man hyr bilen upp till 3 dagar. -990 kr per dag och fri milkostnad om man hyr bilen mer än 3 dagar. Uthyrningsfirman vill ha ett enkelt program som hjälper till att ta fram hyreskostnaderna för hyrbilen om man anger antal hyrdagar och eventuellt antal mil som man har åkt med bilen.

___

## Analys
#### Vilket resultat vill vi ha:

> Vi vill räkna ut vad priset blir när man vill hyra en hyresbil beroende på hur många dagar man ska hyra bilen och hur många mil bilen har kört.

#### Vilka informationer är tillgänliga och hur tillförs dessa i programmet:
> Dagar bilen ska eller har hyrts i, samt miltalen bilen har kört anges via tangentbordet av användaren som heltal. Miltalen bilen har kört anges bara om Dagarna bilen ska eller har hyrts i är mindre än eller lika med 3.
> 
> Vi har tre informationer fastsatta:<br>
> Pris1: 500kr - Om hyresdagarna är mindre eller lika med 3 (heltal)<br>
> Pris2: 990kr - Om hyresdagarna är mer än 3 (heltal)<br>
> Pris per miltal: 2kr - Om det är Pris1 som gäller (heltal)

#### Hur kan man få fram resultatet i allmänna drag? Finns det fall där din lösning inte fungerar?
> Priset räknas ut beroende på antal dagar bilen ska hyras. Om dagarna är mindre eller likamed 3 så räknas priset ut genom:<br>
> Pris1 + (Pris per miltal * Miltal)<br>
> Om dagarna är mer än 3 så är det Pris2 som gäller.<br>
> <br>
> Lösningen fungerar inte om användaren skriver in något som inte är ett heltal, de vill säga decimaler, karaktärer, ord mm...

#### Hur ser gränssnittet ut mellan användaren och programmet om det finns en kommunikation mellan användaren och programmet?
> Användaren ska kunna ange dagar hyresbilen ska eller har hyrts i och beroende på dagarna, ska användaren ochså ha möjlighet till att ange hur många mil > bilen har åkt. Utseenden som kan vara lämpliga:<br>
> 
> 1)<br>
>     Dagar bilen ska hyras: 3<br>
>     Mil bilen har åkt: 10<br>
>     Pris: 520kr<br>
> <br>
> 2)  <br>
>     Dagar bilen ska hyras: 4<br>
>     Pris: 990kr<br>

## Psuedokod
1. Fråga användaren hur många dagar bilen hyrdes/ska hyras i med hjälp av `cout`
2. Lagra det angivna heltalet av användaren I en Integer med hjälp av `cin`
3. Kolla om dagarna är mindre än eller likamed 3 (dagar <= 3) med hjälp av ett `if else` uttalande 
4. Om dagarna är mindre än eller likamed 3, Fråga användaren hur många mil bilen har kört. Lagra det angivna heltalet av användaren I en Integer med hjälp av `cin`. Skriv ut priset till användaren med hjälp av `cout`. Priset är lika med Dagar + (miltal*2) kr.
5. Om dagarna är mer än 3, skriv ut priset till användaren med hjälp av `cout`. Priset är lika med 990kr

## Flödesschema
<img src="https://i.imgur.com/M3k9cBl.jpeg">
