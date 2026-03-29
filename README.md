# 🍽️ 'U Mangiari

<br>

![C++](https://img.shields.io/badge/C++-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-CLI-black?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Stable-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-lightgrey?style=for-the-badge)

<br>

🌍 This README is available in:&nbsp;&nbsp;[**<img src="https://flagcdn.com/w20/gb.png" width="20" alt="EN"/> English**](README.md)&nbsp;&nbsp;·&nbsp;&nbsp;[<img src="https://flagcdn.com/w20/it.png" width="20" alt="IT"/> Italian](README.it.md)
 
---

**'U Mangiari** (*"the food"* in Sicilian) is a terminal-based restaurant reservation manager.
Add bookings, check table availability, and handle special requests from the command line.

---

## 🍴 Features

- **Make a reservation** — assign the best available table based on guest count
- **View all reservations** — full summary with table, name, guests and notes
- **Check table status** — see which tables are free and which are taken
- **Special requests** — store notes like allergies, birthdays, or preferences
- **Input validation** — handles wrong input without crashing

---

## 🚀 Getting Started

### Requirements

- A C++ compiler supporting C++11 or later (`g++`, `clang++`, MSVC)

### Compile

```bash
g++ -std=c++17 -o u-mangiari u-mangiari.cpp
```

### Run

```bash
./u-mangiari      # Linux / macOS
u-mangiari.exe    # Windows
```

---

## ⚙️ How It Works

The system manages **10 tables** with different seat counts:

| Table | Seats |
|---|---|
| 1 | 2 |
| 2 | 3 |
| 3–4 | 4 |
| 5–6 | 5 |
| 7 | 6 |
| 8 | 7 |
| 9–10 | 8 |

When a reservation is made, the system automatically finds the **first available table** that fits the requested number of guests. No manual table selection — it just works.

Data is stored in parallel arrays (one per field: name, guest count, assigned table, notes) and a boolean array tracks which tables are occupied.

---

## 🖥️ Example Session

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

## 🔭 Possible Extensions

- [ ] Cancel an existing reservation
- [ ] Reserve a specific time slot
- [ ] Support multiple sittings per table (lunch / dinner)
- [ ] Save and load reservations from a file
- [ ] Search reservations by guest name

---

## 👥 Team

- **Flavio Lanzafame** — [@flaviolanzafame](https://github.com/flaviolanzafame)
- **Carmelo Vicari** — [@VicariCarmelo8](https://github.com/VicariCarmelo8)

> School project — ITET M. Rapisardi - L. da Vinci · Computer Science & Telecommunications · Year 3 (2025)

---

## 📄 License

Released under the [MIT License](LICENSE).

---

<div align="center">

Built with C++ · and a lot of arancini

</div>
