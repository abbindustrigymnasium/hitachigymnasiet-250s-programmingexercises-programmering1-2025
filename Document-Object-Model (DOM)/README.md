# DOM (Document Object Model)

## Introduktion

DOM är kärnan i interaktiv webbutveckling. Genom att förstå DOM kan du skapa dynamiska, användarinteraktiva webbapplikationer som svarar på användarens handlingar i realtid.

### Vad är DOM?

**DOM (Document Object Model)** är en programmeringsgränssnitt som representerar HTML-dokument som ett träd av objekt. Tänk på det som en "karta" över din webbsida som JavaScript kan läsa och modifiera.

**Varför är DOM viktigt?**

- Gör statiska webbsidor interaktiva
- Möjliggör realtidsuppdateringar utan att ladda om sidan
- Skapar användarupplevelser som känns moderna och responsiva

**Med DOM kan vi:**

- **Hitta** specifika HTML-element
- **Ändra** text, attribut och innehåll
- **Modifiera** CSS-stilar dynamiskt
- **Skapa** nya element eller ta bort befintliga
- **Lyssna** på användarinteraktioner (events)
- **Validera** formulärdata
- **Animera** element

### Lärandemål

Efter dessa övningar kommer du att kunna:

- Använda alla DOM-selektorer effektivt
- Manipulera element dynamiskt
- Hantera användarinteraktioner
- Skapa interaktiva formulär
- Bygga enkla webbapplikationer

## Lägga till JavaScript i HTML

Det finns två huvudsakliga sätt att lägga till JavaScript i en HTML-sida:

### 1. Internal JavaScript (I `<script>`-taggar)

JavaScript-kod placeras direkt i HTML-filen inom `<script>`-taggar.

**I `<head>`-sektionen:**

```html
<!DOCTYPE html>
<html>
  <head>
    <title>Min Sida</title>
    <script>
      // JavaScript här körs INNAN HTML-elementen laddas
      // Använd DOMContentLoaded för att vänta på att sidan laddas
      document.addEventListener("DOMContentLoaded", () => {
        const heading = document.querySelector("h1");
        heading.textContent = "Sidan är laddad!";
      });
    </script>
  </head>
  <body>
    <h1>Original rubrik</h1>
  </body>
</html>
```

**I slutet av `<body>` (Rekommenderat):**

```html
<!DOCTYPE html>
<html>
  <head>
    <title>Min Sida</title>
  </head>
  <body>
    <h1 id="heading">Välkommen</h1>
    <button id="myBtn">Klicka mig</button>

    <script>
      // JavaScript här körs EFTER att HTML-elementen har laddats
      const button = document.querySelector("#myBtn");
      button.addEventListener("click", () => {
        alert("Knappen klickades!");
      });
    </script>
  </body>
</html>
```

**Fördelar:**

- Enklare för små projekt
- All kod i en fil
- Inget behov av externa filer

**Nackdelar:**

- Blir rörigt med mycket kod
- Kod kan inte återanvändas mellan flera sidor

### 2. External JavaScript (Extern fil) - **REKOMMENDERAT**

JavaScript-kod placeras i en separat `.js`-fil som länkas till HTML-filen.

**HTML-fil (index.html):**

```html
<!DOCTYPE html>
<html>
  <head>
    <title>Min Sida</title>
  </head>
  <body>
    <h1 id="heading">Välkommen</h1>
    <button id="myBtn">Klicka mig</button>

    <!-- Länka till extern JavaScript-fil -->
    <script src="script.js"></script>
  </body>
</html>
```

**JavaScript-fil (script.js):**

```javascript
const button = document.querySelector("#myBtn");
const heading = document.querySelector("#heading");

button.addEventListener("click", () => {
  heading.textContent = "Du klickade på knappen!";
});
```

**Fördelar:**

- Renare och mer organiserad kod
- Kod kan återanvändas på flera sidor
- Enklare att underhålla
- Webbläsaren kan cacha JavaScript-filen (snabbare laddning)

### Var ska `<script>`-taggen placeras?

**1. I slutet av `<body>` (Traditionellt sätt):**

```html
<body>
  <h1>Min sida</h1>
  <p>Innehåll...</p>

  <script src="script.js"></script>
</body>
```

✅ JavaScript körs efter att HTML har laddats

**2. I `<head>` med `defer` (Modernt sätt):**

```html
<head>
  <script src="script.js" defer></script>
</head>
```

✅ Scriptet laddas parallellt men körs efter HTML är färdigt  
✅ Rekommenderat för modern utveckling

**3. I `<head>` med `async`:**

```html
<head>
  <script src="script.js" async></script>
</head>
```

⚠️ Scriptet körs så fort det är laddat (kan orsaka problem om DOM inte är redo)

### Sammanfattning - Bästa praxis

För övningarna, använd detta mönster:

```html
<!DOCTYPE html>
<html>
  <head>
    <title>DOM Övning</title>
    <script src="script.js" defer></script>
  </head>
  <body>
    <h1>Min Webbsida</h1>
    <button id="myBtn">Klicka här</button>
  </body>
</html>
```

Eller alternativt:

```html
<!DOCTYPE html>
<html>
  <head>
    <title>DOM Övning</title>
  </head>
  <body>
    <h1>Min Webbsida</h1>
    <button id="myBtn">Klicka här</button>

    <script src="script.js"></script>
  </body>
</html>
```

## Vanliga DOM-funktioner

### 1. Hitta Element (Selectors)

**getElementById()**

```javascript
const element = document.getElementById("myId");
// Hittar element med id="myId"
```

**querySelector()**

```javascript
const element = document.querySelector(".myClass");
// Hittar första elementet med class="myClass"

const button = document.querySelector("#submitBtn");
// Hittar element med id="submitBtn"
```

**querySelectorAll()**

```javascript
const allItems = document.querySelectorAll("li");
// Hittar ALLA <li> element, returnerar en NodeList

allItems.forEach((item) => {
  console.log(item.textContent);
});
```

### 2. Ändra Innehåll

**textContent**

```javascript
const heading = document.querySelector("h1");
heading.textContent = "Ny rubrik";
// Ändrar textinnehållet
```

**innerHTML**

```javascript
const container = document.querySelector("#container");
container.innerHTML = "<p>Ny paragraf med <strong>HTML</strong></p>";
// Ändrar HTML-innehållet
```

### 3. Ändra CSS-stilar

**style**

```javascript
const box = document.querySelector(".box");
box.style.backgroundColor = "blue";
box.style.width = "200px";
box.style.display = "none";
```

**classList**

```javascript
const element = document.querySelector(".menu");
element.classList.add("active"); // Lägger till klass
element.classList.remove("hidden"); // Tar bort klass
element.classList.toggle("open"); // Växlar klass (on/off)
element.classList.contains("active"); // Kontrollerar om klass finns
```

### 4. Hantera Attribut

**getAttribute() / setAttribute()**

```javascript
const link = document.querySelector("a");
const url = link.getAttribute("href");
link.setAttribute("href", "https://example.com");
link.setAttribute("target", "_blank");
```

### 5. Skapa och Ta Bort Element

**createElement() / appendChild()**

```javascript
const newDiv = document.createElement("div");
newDiv.textContent = "Jag är ett nytt element";
newDiv.classList.add("new-item");

const container = document.querySelector("#container");
container.appendChild(newDiv);
```

**remove()**

```javascript
const element = document.querySelector(".old-item");
element.remove();
// Tar bort elementet från DOM
```

### 6. Event Listeners

**addEventListener()**

```javascript
const button = document.querySelector("#myButton");

button.addEventListener("click", function () {
  alert("Knappen klickades!");
});

// Med arrow function
button.addEventListener("click", () => {
  console.log("Klick!");
});
```

**Vanliga events:**

- `click` - När element klickas
- `input` - När användare skriver i input-fält
- `change` - När värde i formulär ändras
- `submit` - När formulär skickas
- `mouseover` - När musen hovrar över element
- `keydown` - När tangent trycks ned

**Exempel med input:**

```javascript
const inputField = document.querySelector("#nameInput");

inputField.addEventListener("input", (event) => {
  console.log("Du skrev:", event.target.value);
});
```

### 7. Formulärhantering

**Få värden från formulär:**

```javascript
const nameInput = document.querySelector("#name");
const value = nameInput.value;

// Sätt värde
nameInput.value = "Nytt värde";
```

**Förhindra formulär från att skickas:**

```javascript
const form = document.querySelector("#myForm");

form.addEventListener("submit", (event) => {
  event.preventDefault(); // Stoppar formulär från att skickas

  const name = document.querySelector("#name").value;
  console.log("Namn:", name);
});
```

### 8. Navigera i DOM-trädet

**parentElement**

```javascript
const child = document.querySelector(".child");
const parent = child.parentElement;
```

**children**

```javascript
const container = document.querySelector(".container");
const allChildren = container.children;
```

**nextElementSibling / previousElementSibling**

```javascript
const element = document.querySelector(".item");
const next = element.nextElementSibling;
const previous = element.previousElementSibling;
```

### Huvudresurser

**W3Schools (Huvudresurs):**

- [W3Schools JS HTML DOM](https://www.w3schools.com/js/js_htmldom.asp)
- [W3Schools JS Browser BOM](https://www.w3schools.com/js/js_window.asp)
- [W3Schools DOM Methods](https://www.w3schools.com/js/js_htmldom_methods.asp)
- [W3Schools DOM Elements](https://www.w3schools.com/js/js_htmldom_elements.asp)

## Instruktioner

**Filstruktur:**

1. Skapa HTML-filer för varje övning: `dom-övning1.html`, `dom-övning2.html`, etc.
2. Lägg JavaScript i `<script>`-taggar eller separata `.js`-filer
3. Testa alltid dina lösningar i webbläsaren (använd F12 för Developer Tools)
4. Ladda upp till GitHub när du är klar
