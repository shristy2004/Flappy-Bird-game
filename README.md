<div align="center">

# 🐦 Flappy Bird Game

### A Simple 2D Arcade Game Built with C++ and SFML

<img src="https://img.shields.io/badge/C++-Programming-blue?style=for-the-badge&logo=c%2B%2B">
<img src="https://img.shields.io/badge/SFML-Graphics_Library-green?style=for-the-badge">
<img src="https://img.shields.io/badge/Game-2D_Arcade-red?style=for-the-badge">
<img src="https://img.shields.io/badge/Platform-Windows_|_Linux-orange?style=for-the-badge">

<br>

*A real-time Flappy Bird-inspired game demonstrating game loops, collision detection, physics simulation, and object-oriented programming.*

</div>

---

# 📖 About The Project

This project is a **Flappy Bird-inspired 2D game** developed using **C++** and the **SFML (Simple and Fast Multimedia Library)** framework.

The game focuses on implementing real-time game development concepts such as:

- 🎮 Real-time rendering
- ⚡ Event handling
- 🧠 Object-oriented programming
- 💥 Collision detection
- 📂 File handling
- 🌍 Physics simulation

Players control a bird that must pass through moving pipes without colliding.  
The score increases as obstacles are cleared successfully, and the highest score is saved using file handling.

---

# ✨ Features

<table>
<tr>
<td>✅ Smooth Bird Movement</td>
<td>✅ Gravity Simulation</td>
</tr>

<tr>
<td>✅ Dynamic Pipe Generation</td>
<td>✅ Collision Detection</td>
</tr>

<tr>
<td>✅ Score Tracking System</td>
<td>✅ Persistent High Score</td>
</tr>

<tr>
<td>✅ Easy & Hard Modes</td>
<td>✅ Responsive Controls</td>
</tr>

<tr>
<td>✅ Real-Time Rendering</td>
<td>✅ Game Over Screen</td>
</tr>
</table>

---

# 🛠️ Technologies Used

| Technology | Purpose |
|------------|---------|
| **C++** | Core Programming Language |
| **SFML** | Graphics & Multimedia Library |
| **VS Code** | Development Environment |
| **GCC / Dev-C++** | Compilation |
| **Windows / Linux** | Supported Platforms |

---

# 🧠 Concepts Implemented

- Object-Oriented Programming (OOP)
- Classes and Encapsulation
- Game Loop Architecture
- Event-Driven Programming
- Real-Time Rendering
- Collision Detection
- File Handling
- Physics-Based Movement

---

# ⚙️ Game Logic

The game works using a continuous game loop where:

1. Gravity pulls the bird downward  
2. Player input moves the bird upward  
3. Pipes move continuously from right to left  
4. Collision is checked every frame  
5. Score increases when pipes are crossed  
6. High score is stored using files  

---

# 📂 Project Structure

```bash
Flappy-Bird-Game/
│
├── assets/
│   ├── bird.png
│   ├── pipe.png
│   ├── background.png
│   └── fonts/
│
├── src/
│   ├── main.cpp
│   ├── Bird.cpp
│   ├── Pipe.cpp
│   └── Game.cpp
│
├── include/
│   ├── Bird.h
│   ├── Pipe.h
│   └── Game.h
│
├── highscore.txt
├── README.md
└── LICENSE
```

---

# ▶️ Installation & Setup

## 1️⃣ Install SFML

Download SFML from:

🔗 https://www.sfml-dev.org/

---

## 2️⃣ Compile the Project

```bash
g++ main.cpp -o flappybird -lsfml-graphics -lsfml-window -lsfml-system
```

---

## 3️⃣ Run the Game

```bash
./flappybird
```

---

# 🎮 Controls

| Key | Action |
|-----|--------|
| `SPACE` | Move Bird Up |
| `ENTER` | Restart Game |
| `ESC` | Exit Game |

---

# 📸 Game Screens

### 🏠 Main Menu
Displays the title screen and game options.

### 🎮 Gameplay Mode
Real-time gameplay with moving obstacles and scoring.

### 🔥 Hard Mode
Increased speed and difficulty level.

### 💀 Game Over Screen
Displays the final score and high score.

---

# 📊 Results

The project successfully demonstrates:

- Smooth gameplay mechanics
- Stable real-time rendering
- Dynamic obstacle generation
- Responsive user interaction
- Accurate collision handling
- Persistent score management

---

# 🚀 Future Improvements

- 🎵 Add sound effects and background music
- 🎨 Improve graphics and animations
- 🧩 Add multiple levels and difficulty modes
- ⏸️ Add pause and resume functionality
- 🌐 Develop web/mobile versions
- 🏆 Implement online leaderboard system

---

# 📚 References

1. SFML Documentation  
2. Practical C++ Programming Resources  
3. Game Development Tutorials  
4. C++ Programming Guides  

---

<div align="center">

## ⭐ Thanks for Visiting ⭐

### If you like this project, a star ⭐

</div>
