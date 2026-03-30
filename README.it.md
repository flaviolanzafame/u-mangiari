# 🍽️ 'U Mangiari

<br>

![C++](https://img.shields.io/badge/C++-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-CLI-black?style=for-the-badge)
![Stato](https://img.shields.io/badge/Stato-Stabile-brightgreen?style=for-the-badge)
![Licenza](https://img.shields.io/badge/Licenza-MIT-lightgrey?style=for-the-badge)

---

🌍 This README is available in:&nbsp;&nbsp;[<img src="https://flagcdn.com/w20/gb.png" width="20" alt="EN"/> English](README.md)&nbsp;&nbsp;·&nbsp;&nbsp;[**<img src="https://flagcdn.com/w20/it.png" width="20" alt="IT"/> Italian**](README.it.md)
 
---

**'U Mangiari** (*"il mangiare"* in siciliano) è un gestore di prenotazioni per ristorante che gira nel terminale.  
Aggiungi prenotazioni, controlla i tavoli e gestisci richieste speciali da riga di comando.

</div>

---

## 🍴 Funzionalità

- **Prenota un tavolo** — assegnazione automatica del primo tavolo libero adatto
- **Riepilogo prenotazioni** — lista completa con tavolo, nome, ospiti e note
- **Stato dei tavoli** — panoramica rapida di liberi e occupati
- **Richieste speciali** — allergie, compleanni, preferenze
- **Validazione dell'input** — nessun crash in caso di errore dell'utente

---

## 🚀 Come iniziare

### Requisiti

- Un compilatore C++ compatibile con C++11 o superiore (`g++`, `clang++`, MSVC)

### Compilazione

```bash
g++ -std=c++17 -o u-mangiari u-mangiari.cpp
```

### Avvio

```bash
./u-mangiari      # Linux / macOS
u-mangiari.exe    # Windows
```

---

## ⚙️ Come funziona

Il sistema gestisce **10 tavoli** con capienza diversa:

| Tavolo | Posti |
|---|---|
| 1 | 2 |
| 2 | 3 |
| 3–4 | 4 |
| 5–6 | 5 |
| 7 | 6 |
| 8 | 7 |
| 9–10 | 8 |

Quando arriva una prenotazione, il sistema cerca automaticamente il **primo tavolo disponibile** con abbastanza posti — nessuna selezione manuale.

I dati sono salvati in array paralleli (uno per campo: nome, ospiti, tavolo assegnato, note) e un array di booleani tiene traccia di quali tavoli sono occupati.

---

## 🖥️ Esempio d'uso

```text
====== 'U MANGIARI ======
1. Make a reservation
2. View reservations
3. View table status
0. Exit
=========================
Choose an option (0–3): 1

  Guest name: Rossi
  Number of guests: 3
  Special requests — press Enter to skip: Gluten-free menu

  Reservation confirmed!
  Table 2 (3 seats) — Rossi (3 guests)
```

---

## 🔭 Possibili estensioni

- [ ] Cancellare una prenotazione esistente
- [ ] Prenotare per una fascia oraria specifica
- [ ] Gestire più turni per tavolo (pranzo / cena)
- [ ] Salvare e caricare le prenotazioni da file
- [ ] Cercare prenotazioni per nome

---

## 👥 Team

- **Flavio Lanzafame** — [@flaviolanzafame](https://github.com/flaviolanzafame)
- **Carmelo Vicari** — [@VicariCarmelo8](https://github.com/VicariCarmelo8)

> Progetto scolastico — ITET M. Rapisardi - L. da Vinci · Informatica e telecomunicazioni, art. Informatica · Terza superiore (2025)

---

## 📄 Licenza

Rilasciato sotto [Licenza MIT](LICENSE).

---

<div align="center">

Scritto in C++ · e con tanti arancini

</div>
