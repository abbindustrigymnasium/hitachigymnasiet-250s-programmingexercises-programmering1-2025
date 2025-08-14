# Övningar

Ni som upplever att uppgifterna är för lätta och vill ha lite mer utmanande mindre projekt så kolla på den här länken:
<https://rojas.io/vue-js-practice-project-ideas/>

### Övning 0 - Skapa ett nytt Vue projekt med Vue-CLI
Skapa ett nytt projekt med Vue CLI dvs via kommandofönstret, minns du inte kolla på beskrivningen i mappen en nivå upp.
Du kan göra övningarna för 0 i App.vue komponenten. Alternativt ska ett Quasar Framework projekt och jobba i pages/IndexPage.vue

#### Övning 0.1 - Interpolering
1. Skapa en data variabel *message* med värdet "Hello Vue!" och visa värdet i HTML koden genom interpolering {{}}.
2. Hitta på lite fler variabler med olika typer och visa dem med.

#### Övning 0.2 - Attribut bindning
1. Skapa en data variabel *link* med värdet på en valfri Youtube video. Skapa sedan en länk-tagg <a>a</a>-tagg som binder till länk variabeln, verifiera så att länken fungerar när du klickar på den.
2. Skapa en data variabel *image* med värdet på en bildaddress på en valfri bild från nätet.
Skapa sedan en img-tagg vars src-attribut binder till image variabeln och visar bilden på skärmen.

#### Övning 0.3 - HTML Villkor
1. Skapa en data variabel *age* med värdet på en ålder som du själv bestämmer. 
2. Använd sedan *v-if* direktivet i HTML section för att kontrollera ifall age variabeln är större än 18. Stämmer villkoret ska en p-tagg visas med texten "Du får ta körkort! annars visas texten "Tyvärr du får inte ta körkort!".

#### Övning 0.4 - Loopar i HTML med v-for
1. Skapa en data variabel som är en lista med talen *1 till 10*. 
2. Använd sedan *v-for* direktivet i HTML section för att loopa/gå igenom listan med talen och skriv ut dem med hjälp av interpolering och en oordnad lista ul/li.

#### Övning 0.5 - API anrop för att hämta ett objekt och presentera det
1. Skapa en variabel som heter *photo* som är null från början.
2. I *onMounted()* metoden gör ett API-anrop med *fetch()* som hämtar ett photo objekt och tilldelar det till *photo* data variabeln.<br>

```js
onMounted(() => {

})
```

<https://jsonplaceholder.typicode.com/photos/1>
3. Presentera sedan photo objektets värden i html med interpolation.

#### Övning 0.6 - API anrop för att hämta en lista av objekt
1. Skapa en variabel som heter *photos* som är null från början.
2. I *onMounted()* metoden gör ett API-anrop med *fetch()* som hämtar ett photo objekt och tilldelar det till *photo* data-variabeln.<br>

```js
onMounted(() => {

})
```

<https://jsonplaceholder.typicode.com/photos/1>
3. Presentera sedan photo objektets värden i html med interpolation.

#### Övning 0.7 - Eventhantering med knappar
1. Skapa en data variabel som heter *name* och som innehåller ert förnamn. Visa namnet med interpolering på skärmen.
2. Skapa sedan en knapp med texten "byt namn", koppla på ett klick-event/metod som körs när man klickar på knappen så att *name* variabeln uppdateras till ditt efternamn istället. Du kan döpa metoden till vad du vill tex changeName().

### Övning 0.8 - Två-vägs bindning och computed (beräknade variabler)
1. Skapa två data-variabler för firstName och lastName.
2. Skapa två input-fält som har två-vägbindning med lastName och firstName dvs **v-model**.
3. Visa för och efternamn brevid varandra med interpolering {{firstName}} {{lastName}}.

### Övning 0.9 - Computed & Watchers
Skapa Computed och Watch exemplen i powerpoint presentationen och försök förstå vad dem gör.

### Övning 0.10 - Class-bindning
1. Skapa en div.
2. Skapa två klasser innanför style taggen som heter green-background och red-background.
Som ger diven följande egenskaper, men ska ha olika färger dvs grönt och rött.

```
  width: 200px;
  height: 200px;
  background-color: green;
``` 

3. Skapa en variabel isGreen som bestämmer vilken klass som appliceras på diven med hjälp av class-bindning.
4. Skapa en knapp som ändrar på isGreen och sedan på klassen.

### Övning 0.11 - Style-bindning
Skapa Computed och Watch exemplen i powerpoint presentationen och försök förstå vad dem gör.

### Övning 1 - Hello From Group X - Skapa och visa en komponent
3. I en valfri komponent i projektet skapa en rubrik med texten "Hello From Group X" tillsammans med en lista på namnen av alla grupp medlemmar i din basgrupp.
"Hello From Group X" och listan ska deklareras som vue data variabler.

### Övning 1.1 - Formulär
1. Skapa 4 input-fält för address, postnummer, stad och land.
2. Skapa 4 variabler i data-sektionen för att spara det som matas in.
3. Skapa en knapp som skriver det som matats in i ***alert()***

### Övning 1.2 - Flera komponenter
1. Skapa 4 input-fält för address, postnummer, stad och land.

![Komponenter](./komponents.png)


### Övning 2 - Skapa en data-bunden komponent
Lägg till en ny komponent för att visa ett lektions-event med hjälp av html och datat nedan.<br>
Det du behöver göra:

1. Skapa komponenten **EventDetailsComponent** eller lägg koden direkt i **App** komponenten.
Du kan antigen skapa ett CLI Vue projekt eller göra det genom att länka in Vue som i övning 1. 
HTML koden (utan data-bindningar) finns **_nedan_**.

2. Skapa en variabel i data-sektionen för att hålla datat. 
Datat för komponenten finns **_nedan_**.

3. Lägg till de nödvändiga data-bindningarna (med interpolation) till komponentens template del.
  
4. Importera komponenten till App-komponenten och lägg till den i template delen för att visas.

### Resultatet
---
### Event: Smarta System 2020
**Date:** 24/8/2020 <br>
**Time:** 13:00 <br>
**Address:** Robotvägen 4, 721 36 Västerås, Sverige <br>


####_Här är start html för template:_####

```

<div>
  <h1>
    Event:
  </h1>
  
  <div>
    Date:
  </div>
  
  <div>
    Time:
  </div>
  
  <div>
    Address:
  </div>
</div>

```

  

####_Här är datat:_####

```
{
  name:'Smarta System 2020', 
  date: '24/8/2020', 
  time: '13:00', 
  location: { 
    address: 'Robotvägen 4', 
    zipcode: '721 36', 
    city: 'Västerås', 
    country: 'Sverige'
  }
}

```
### Övning 2.2 - Hämta data valfri data från API och presentera det
Använd tjänsten JSON-Placeholder för att göra api-anrop och hämta valfri data och presentera den.
<br>
<https://jsonplaceholder.typicode.com/>
<br>
<br>
### Övning 3 - Kommunikation mellan komponenter Parent -> Child
**_Instruktioner_**: **EventDetailsComponent**:en visar information om ett lektions-event, där adress är inkluderad.
Skapa en ny child komponent som ska hantera att adressen visas och skicka eventets adress in till den nya komponenten från EventDetailsComponenten.<br>
Det du behöver göra:

_HINT:_ Namnge inte din komponent `<address>`. `<address>` är redan ett HTML5 element.

1. Skapa en ny adress komponent som tar in adress data som **prop** 

2. Updatera event-details komponenten att inkludera adress komponenten och skicka in adress-delen av event-datat.

### Resultatet
---
Samma som i övning 2.

### Övning 4 - Kommunikation mellan komponenter Child -> Parent
**_Instruktioner_**: 

1. Skapa 4 **input**-element och 4 **button**-element i adress-komponenten.  

2. Fixa så att genom **Child -> Parent** kommunikation så att när man fyllt i ett fält och klickar på motsvarande knapp ska adressen uppdateras för den delen i EventDetailsComponenten.

### Resultatet
---
![överblick](https://github.com/abbjoafli/Programmering-1/blob/master/3.Vue/%C3%B6vningar/SmartaSystemExercise4.PNG)

### Övning 5 - Styles Bindning
**_Instruktioner_**: 

1. Skapa en **input**-element brevid titeln på sidan.  

2. Använd two-way-binding med **v-model** för att koppla värdet från fältet till en data-variabel kanske **titleColor**.

3. Använd sedan **style-binding** så att titelns färg ändras till den färgen man matat in.

### Resultatet
---
![överblick](https://github.com/abbjoafli/Programmering-1/blob/master/3.Vue/%C3%B6vningar/style-binding.PNG)


### Övning 6 - Watcher
**_Instruktioner_**: 

1. Skapa en **watcher** på **titleColor** data-variabeln som skriver ut "Jippy min favoritfärg!"

### Resultatet
---
![överblick](https://github.com/abbjoafli/Programmering-1/blob/master/3.Vue/%C3%B6vningar/watcher.PNG)

### Övning 7 - v-if direktivet
**_Instruktioner_**: 

1. Applicera **v-if**-direktivet så att titeln inte syns ifall färgen är **brown**.  

### Resultatet
---
![överblick](https://github.com/abbjoafli/Programmering-1/blob/master/3.Vue/%C3%B6vningar/v-if-brown.PNG)

### Övning 8 - Class Bindning & Computed Property
**_Instruktioner_**: 

1. Använd en **computed property** för att hålla koll på ifall färgen är **brown** tex **isBrown**.

2. Applicera **Class**-bindning med hjälp av **isBrown** så att all text blir brun. Hint: måste skapa en css class i styles.

### Resultatet
---
![överblick](https://github.com/abbjoafli/Programmering-1/blob/master/3.Vue/%C3%B6vningar/isBrown.PNG)
