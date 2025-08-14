# Övningar

## Övning 1. setTimeout med callback

<https://www.w3schools.com/jsref/met_win_settimeout.asp>

1. Skapa en function som heter `hello()` skriver ut "Hej om 5 sekunder!"
2. Använd den inbyggda funktionen setTimeout så att funktionen `hello`
anropas efter 5 sekunder som är 5000 milliesekunder.
3. Skriv gärna ut något efter setTimeout funktionen för att se att koden körs innan "Hej om 5 sekunder!"

## Övning 2. HTTP & APIer med Fetch

1. Använd fetch för att hämta data från JSONPlaceholder:
<https://jsonplaceholder.typicode.com/>

Exempel på data är todos.

```js
fetch('https://jsonplaceholder.typicode.com/todos')
      .then(response => response.json())
      .then(json => console.log(json))
```
2. Börja med att hämta en lista av någon valfri data tex todos.
3. Hämta sedan en instans av valfri data.

## Övning 3. Gör samma sak men med ett annat API
Hämta data från ett annat API tex Polisen, Pokemon m.m.



