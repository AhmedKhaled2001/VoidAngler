# Void Trawler - Technical Prototype

**Engine:** Unreal Engine 5  
**Language:** C++ / Blueprints  
**Role:** Solo Developer  

## Overview
*Void Trawler* is an active technical prototype and engineering sandbox built to explore advanced, physics-driven locomotion and momentum systems in Unreal Engine 5. 

Rather than relying on standard out-of-the-box character movement, this project focuses on custom C++ implementations for hoverboard traversal, vector-based momentum generation, and a physics-tethering mechanic inspired by kite-surfing and fishing dynamics. 

**Note for Reviewers:** This repository is currently focused on systems architecture and core mechanic engineering. The primary game loop and state management are in active development. Please review the `Source/` directory for the core C++ implementations.

## Core Engineering Systems

### Custom Physics Locomotion (Hoverboard Mechanics)
Standard UE5 Character Movement Components are insufficient for fluid, momentum-based hoverboard traversal. This system required building a custom movement implementation:
* **Vector Math & Momentum:** Engineered custom velocity and acceleration calculations to simulate continuous momentum, surface friction, and drag within a zero-gravity or void-like environment.
* **Surface Alignment:** Implemented trace-based logic to dynamically align the player character and board to varied terrain normals in real-time.

### Dynamic Tethering & Tension System
A core mechanic involves the player tethering to environmental objects and entities (akin to a fishing mechanic) to generate traversal momentum.
* **Real-time Tension Calculations:** Implemented physics logic to calculate distance, line tension, and reciprocal force between the player and the tethered target.
* **Momentum Transfer:** Engineered the system to convert the tether's tension into a directional velocity boost, simulating a kite-surfing propulsion effect using C++ math libraries.

## Architecture Highlights
* **C++ Base Classes:** Core mechanics, physics calculations, and heavy logic are handled in C++ to ensure optimal performance during complex vector math operations.
* **Blueprint Extension:** Designed base classes to be easily extended via Blueprints, allowing for rapid iteration of variables (e.g., tether length, friction coefficients, base acceleration) without requiring a full recompile.

## Active Development & Known Challenges
As an ongoing technical exercise, I am currently engineering solutions for the following complex challenges:
* **Physics Edge Cases:** Refining the tether tension math to prevent velocity spikes or clipping when the player breaks the maximum tether radius at high speeds.
* **State Machine Implementation:** Transitioning the player from free-look state to an active "capturing/fishing" state without interrupting the underlying momentum vectors.

## Installation & Setup
1. Clone the repository.
2. Right-click the `.uproject` file and select "Generate Visual Studio project files".
3. Open the `.sln` file and compile the project using the Development Editor configuration.
4. Launch the project via the Unreal Engine 5 editor.
