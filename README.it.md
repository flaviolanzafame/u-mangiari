# 🍽️ 'U Mangiari

### *Un sistema di prenotazione ristorante, scritto in C++.*

<br>

![C++](https://img.shields.io/badge/C++-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-CLI-black?style=for-the-badge)
![Stato](https://img.shields.io/badge/Stato-Stabile-brightgreen?style=for-the-badge)
![Licenza](https://img.shields.io/badge/Licenza-MIT-lightgrey?style=for-the-badge)

<br>

🇬🇧 [Read in English](README.md) · 🇮🇹 **Italiano**

<br>

> **'U Mangiari** — *"il mangiare"* in siciliano — è un gestore di prenotazioni per ristorante che gira nel terminale.  
> Aggiungi prenotazioni, controlla i tavoli e gestisci richieste speciali, tutto da riga di comando.

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
1. Prenota un tavolo
2. Vedi prenotazioni
3. Stato dei tavoli
0. Esci
=========================
Scegli un'opzione (0–3): 1

  Nome ospite: Rossi
  Numero di persone: 3
  Richieste speciali — premi Invio per saltare: Menu senza glutine

  Prenotazione confermata!
  Tavolo 2 (3 posti) — Rossi (3 ospiti)
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

> Progetto scolastico — ITET M. Rapisardi - L. da Vinci · Informatica e telecomunicazioni · Terza superiore (2025)

---

## 📄 Licenza

Rilasciato sotto [Licenza MIT](LICENSE).

---

<div align="center">

Scritto in C++ · e con tanti arancini

</div>
