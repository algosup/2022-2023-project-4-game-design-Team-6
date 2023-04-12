# The Card Kingdom - Technical Specifications

<br/>

<b> Team members</b>: 

- [Jason GROSSO](https://github.com/JasonGROSSO) (Project Manager)
- [Clément CATON](https://github.com/ClementCaton) (Software Engineer)
- [Aurélien FERNANDEZ](https://github.com/aurelienfernandez) (Program Manager)
- [Clémentine CUREL](https://github.com/Clementine951) (Quality Assurance)
- [Victor LEROY](https://github.com/Victor-Leroy) (Tech Lead)

<br/>

<details> 
<summary> <b> 📚 Table of contents (click to expand) </b> </summary> 

- [The Card Kingdom - Technical Specifications](#the-card-kingdom---technical-specifications)
- [1. Presentation](#1-presentation)
  - [1.1. Project Description](#11-project-description)
- [2. Technologies Used](#2-technologies-used)
  - [2.1. Unreal Engine](#21-unreal-engine)
- [3. Game Presentation](#3-game-presentation)
  - [3.1. Game Description](#31-game-description)
  - [3.2. Game Mechanics](#32-game-mechanics)
    - [3.2.1. Towers](#321-towers)
    - [3.2.2. Mana](#322-mana)
    - [3.2.3. Enemies](#323-enemies)
    - [3.2.4. Waves](#324-waves)
    - [3.2.5. Castle](#325-castle)
  - [3.3. Game Flow](#33-game-flow)
- [4. Graphics](#4-graphics)
  - [4.1. Art Style](#41-art-style)
  - [4.2. Visuals](#42-visuals)
- [5. Audio](#5-audio)
  - [5.1. Sound Effects](#51-sound-effects)
  - [5.2. Music](#52-music)
- [6. User Interface](#6-user-interface)
- [7. Minimum System Requirements](#7-minimum-system-requirements)
- [8. Glossary](#8-glossary)



</details>

<br/>

# 1. Presentation

## 1.1. Project Description

The goal of this project is to create a video game with innovant ideas within 6 weeks. The idea is to teach students the principles of game design, during this project we will learn every fundamentals of creating a video game, from the creation of concepts to the balance between every element. Another important point is to learn how to work in a team, and to learn how to use the tools we will use to create our game, but also to respect deadlines given each weeks.

<br/>

# 2. Technologies Used

## 2.1. Unreal Engine

Unreal Engine is a game engine developed by Epic Games, famous games have been created using this engine, such as Fortnite, Gears of War, Rocket League and many others. This engine has some major advantages :

- It is free to use
- It has a lot of tutorials and documentation
- It is able to create very good graphics

 It also has a pretty unique feature, named Blueprints, which allows the user to create their own scripts without having to learn a programming language (C++), it will be very useful to simplify the development process. The version we will be using for this project is Unreal Engine 4.27.

<br/>

# 3. Game Presentation

## 3.1. Game Description


The Card Kingdom is a Tower Defense game, the player will have to defend their base from waves of enemies. The player will have to place towers on the map to defend their base, and they will have the possibility of upgrading them to defeat enemies more easily. One of the main features of the game is the possibility to create your own deck of cards, and to use them in the game. The player will have to create a deck of 20 cards, and they will have 7 cards in his hand. In order to use each cards, the player will have to use mana, and each turn the player will have its mana refilled and get an additional mana point to stock, capped at 10. The player will have to use their cards wisely in order to defeat the enemies.

<br/>

## 3.2. Game Mechanics


### 3.2.1. Towers

Towers are the first type of cards. The player will have to place them on the map, and they will automatically attack enemies. There are 5 different towers, each one with their own characteristics. The player will have to be careful when placing them, because they have a range, and if they are too far from the enemies, they won't be able to attack them, but also because the player won't be able to destroy them after they have been placed. The towers will have different mana cost, based on their DPS, and on their cost efficiency, which is the ratio between the cost of the tower and its DPS. The towers range are based on a circle, and the towers will attack the closest enemy in their circle. The player will only be able to place towers during the setup phase, before the next wave of enemies. Once a tower is placed it will stay on the map until the end of the game, and the card will disappear from the player's hand.

<br/>

### 3.2.2. Mana

Mana is the resource used to play cards, the player will get 6 mana at the beginning of each turn. Every unspent mana will be added to the player's mana pool at the end of the turn, the maximum mana amount that the player can have is 10. 

<br/>

### 3.2.3. Enemies

The enemies will be the main threat for the player, they will have to be defeated in order to win the game. There will be different types of enemies, each one with their own characteristics. The enemies will have different health points, speed, castle damage, armor defense and also special abilities that will be used to challenge the player. The enemies will follow the fastest path to the castle, and they will follow it until they reach it, for that we are using pathfinding.

<br/>

### 3.2.4. Waves

The game will be divided into waves, each wave will have a different number of enemies, and each wave will be more difficult than the previous one. The player will have to defeat all the enemies of a wave in order to go to the next one. Every 5 waves, will have a boss wave, which will be more difficult than the previous waves, and will have a boss enemy. Before each wave, the player will have to place their towers and temples on the map, there won't be any time limit. Once the player has clicked the ready button, the enemies will start to spawn, and the player will have to defeat them.

<br/>

### 3.2.5. Castle

The castle is the main element of the game, it is the player's base, and it is the enemies will target, so the player will have to defend it at all cost. The castle will have 100 health points, and if the enemies reach it, they will deal damage to it. If the castle's health points reach 0, the player will lose the game. We recommend having a look at our spreadsheet to have a better understanding of the game mechanics and to get more details about the buildings, spells and enemies statistics.

<br/>

<b> Link to the statistics spreadsheet:</b> https://docs.google.com/spreadsheets/d/1XL3D_vrMhPHKqX94Ht1WxVEqHUgyo39kjctlDA9Ldi4/edit#gid=125845537

<br/>

## 3.3. Game Flow

The game will be divided into 3 main phases, the setup phase, the wave phase and the end phase. The setup phase will be the phase where the player will have to place their towers on the map. The wave phase will be the phase where the enemies will spawn, and the player will have to defeat them. The end phase will be the phase where the player will be able to see the results of the wave.

<br/>

# 4. Graphics

For the graphics, we went for a minimalistic style, we wanted to have a simple and clean design, and we wanted to have a game that is easy to understand. 
## 4.1. Art Style

Regarding the art style, we chose the cutout art style, which is a style that is used to create a 3D effect with 2D elements. We thought this style would fit our game because it relies on cards, so we wanted to create a link between the cards and the paper world in order to reinforce the player immersion. 


## 4.2. Visuals

As mentionned above, we opted for a more "paperish" visual, all of the cards will have a paper texture, and the background will be a paper texture as well. All the enemies texture will be drawn **manually** by our team, same for the towers-. 
<br/>

# 5. Audio

All the audio parts have been created by our team, we used **Audacity** to create the sound effects and Shutterstock to find songs.

## 5.1. Sound Effects

  The sound effects will be used to give feedback to the player, for instance, when a tower is placed, or when an enemy is defeated. We will also use sound effects to give the player a sense of progression, for instance, when the player defeated an enemy wave. In order to create the sound effects we tried to use as much as possible paper, so we used paper crumpling and paper tearing, and then modified them with Audacity. 
  <br/>

## 5.2. Music

The songs will be used to create a more immersive experience, and to give the player a sense of progression. The songs will be used during the setup phase, the wave phase and if the players castle goes below 50 HP, in order to reinforce the danger feeling. We used Shutterstock to find royalty-free songs, and then modified them with Audacity. 
  <br/>

<br/>

# 6. User Interface 

The user interface will be divided into 3 main parts, the top bar, the cards bar and the map. The top bar will be used to display the player's mana, the wave number, the player's castle health points and the player's score. The cards bar will be used to display the player's cards, and the map will be used to display the player's towers and enemies.
# 7. Minimum System Requirements

We don't have any specific system requirements, but our game is light and should run on any recent enough computer.

# 8. Glossary

| **Term** | **Definition** |
| :--- | :--- |
| **DPS** | [Damage per second](https://en.wikipedia.org/wiki/Damage_per_second), refers to the damage that can be dealt from an entity each second |
| [Tower Defense](https://en.wikipedia.org/wiki/Tower_defense) | A sub-genre of strategy video games where the goal is to defend a player's territories or possessions by obstructing the enemy attackers, usually achieved by placing defensive structures on or along their path of attack. |
| [Pathfinding](https://en.wikipedia.org/wiki/Pathfinding) | The process of finding a path between multiple points, which can be in a graph or a grid. |












