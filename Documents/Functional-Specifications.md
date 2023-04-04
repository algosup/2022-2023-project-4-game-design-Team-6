<hr>
<p align="center"> Functional specifications </p>
<br>
<p align="center"> Aurélien Fernandez</p>
<p align="center"> ALGOSUP, Group 6. All Rights Reserved.</p>
<hr>

# Summary

<details>

<summary>Table of content</summary>

- [Summary](#summary)
- [Overview](#overview)
- [Game overview](#game-overview)
  - [Story](#story)
  - [Mechanics](#mechanics)
  - [Gameplay](#gameplay)
        - [Setup phase](#setup-phase)
        - [Play phase](#play-phase)
  - [Design](#design)
    - [Graphic style](#graphic-style)
      - [Description](#description)
      - [examples](#examples)
        - [Archer tower](#archer-tower)
        - [Skeleton enemy](#skeleton-enemy)
        - [Castle](#castle)
    - [Mockup](#mockup)
  - [Course of a game](#course-of-a-game)
        - [When the players start a new game](#when-the-players-start-a-new-game)
        - [When the players continue a game](#when-the-players-continue-a-game)
        - [When the players are playing a game](#when-the-players-are-playing-a-game)
  - [Visuals of a game's course](#visuals-of-a-games-course)
    - [Main menu](#main-menu)
    - [Setup phase - without actions](#setup-phase---without-actions)
    - [Setup phase - Selecting a card](#setup-phase---selecting-a-card)
    - [Setup phase - Selecting and placing a tower](#setup-phase---selecting-and-placing-a-tower)
    - [Setup phase - A tower is placed in the middle](#setup-phase---a-tower-is-placed-in-the-middle)
    - [Battle phase - Ennemies appear](#battle-phase---ennemies-appear)
    - [Battle phase - Castle takes damages](#battle-phase---castle-takes-damages)
- [Non-functionnal requirements](#non-functionnal-requirements)
- [Footnotes](#footnotes)

</details>

# Overview

The goal of this project is to create a video game with innovant ideas within 6 weeks.
The idea is to teach students principles of game design, during this project we will learn every fundamentals of creating a video game, from the creation of concepts to create the balance between every elements.

To create a video game we will use multiple tools such as:

- Unreal Engine 4
- Modeling app such as blender
  
As for the audience we are aiming, we are aiming for every types of users, from 8 years old to 80 years old. However if you want more specific informations here is a document that will present them: [Personas](./Personas.md)

# Game overview

## Story

The story takes place in a fantasy world, humans are the most dominant species, goblins, orcs, phantoms, and countless creatures can be found, but beware, they are lurking in the dark, waiting for the long-desired moment where they can crush all civilization and hope. You are the king, head of your country and its armies, you will have to defend your glorious kingdom against endless waves of monsters and sometimes traitors, but you are not alone, powerful artifacts will lead your way during this journey, defend your kingdom and your people my king, may the gods be with you.

## Mechanics

Our team is searching for innovative ideas, to attain them we wanted to aim to a new type of gameplay, our game is a tower defence game mixed with a roguelite[^roguelite] style, the user is defending their castle with the same mechanics as a standard tower defence but using a system of cards and deck.

To explain a bit further, the user have a hand of cards, generated randomly after each waves in a level depending of user's deck. To use their cards, the user will have to use their mana, a ressource refilled as the same time as the hand.

The user will be able to place their towers on the map which is cut into a grid, they can also give a bonus to them. By placing towers the user will be able to create a maze to make ennemies' advance longer and harder.

## Gameplay

The gameplay was made to be simple to grasp within short time, the battle phase is cut in two different part, the setup and the play phase.

Players have two ressources, cards which can be played by the players and mana which is consumed when cards are played, each card has its own mana cost.

##### Setup phase

The setup phase is, as its name suggest a moment where the players are able to setup their towers. At the start of this phase, the game is saved, players draw 7 cards, and refill their mana and permanently gain one more up to 10 mana. During the setup phase, the players can place their towers, to do so they have to either click on one of their cards and then on one cell of the grid or they can do the opposite, to click on one cell and then a card.
Each towers has its own effect, its own attack and attack speed and a different cost.

When the players have finished their preparations, they can click on the "next wave" button placed in the bottom right of the window. When this is done, the players' hand is discarded and the battle phase begins.

##### Play phase

The play phase represent the phase where ennemies are coming, the towers attack nearby ennemies and the phase ends when all ennemies are killed, except for boss battles, if the boss is not killed after a certain amount of time, it calls reinforcement and every ennemies are twice as fast, it is to avoid a battle phase that last longer than expected. Finally, during this phase, the players can use their remaining mana to use spell cards that can temporarily enhance towers, slow or hurt ennemies.

## Design

### Graphic style

#### Description

Our game will use a style named "paper style", every thing is represented as papers and drawings, for example an enemy is a drawing standing on a stick and the castle is a card castle.

#### examples

##### Archer tower

<img src="Images/archer.png" width=60% >

##### Skeleton enemy

<img src="Images/skel.png" width=80%>

##### Castle

<img src="Images/Castle.png" width=50%>

### Mockup

The image below is showing the interface during the play phase, on the bottom you can observe players's hand of card, on the right it's pile and on the left the discard pile, as the norm dictates.

On the middle you can see the grid, this is where players can use their cards and create their maze, naturally this is where ennemies will appear and this is where they will be marching toward the castle.

Now, for the interface part, on the castle's left you can see the players's mana, on the top, you can see as it follows : the artifact inventory, the number of wave, the pause button and finaly under the pause button there is a "new wave" button, this button ends the setup phase, hovering it reveal which monsters will come and how many of them there will be.

Finally on the left of the card you may have noticed there is a grey square, it is where we will put an almanach, it will contain a description of the towers' and  the ennemies' features and, if we have the time, their lore[^lore].

<img src="Images/Mockup.png">

## Course of a game

##### When the players start a new game

- The players open the executable
- The players arrive on the main menu
- The players select "new game"
- The next phase is now "[When the players are playing a game](#when-the-players-are-playing-a-game)"
  
##### When the players continue a game

- The players open the executable
- The players arrive on the main menu
- The players select "continue"
- The next phase is now "[When the players are playing a game](#when-the-players-are-playing-a-game)"

##### When the players are playing a game

- The players arrive on the playable scene
- The setup phase starts
- The players use all their mana to place archer towers
- The players push the "new wave" button"
- The players sucessfully kill all of the ennemies
- The setup phase come back, all their mana is refilled, the players now have 7 cards
- The players push the "new wave" button
- An ennemies sucessfuly pass through the players' defenses and arrive at the castle, the players loose
- The players come back to the main menu

## Visuals of a game's course

### Main menu

<img src="Images/Menu.png" width=90%>

### Setup phase - without actions

<img src="Images/Setup1.png" width=90%>

### Setup phase - Selecting a card

<img src="Images/Setup2.png" width=90%>

### Setup phase - Selecting and placing a tower

<img src="Images/Setup3.png" width=90%>

### Setup phase - A tower is placed in the middle

<img src="Images/Setup4.png" width=90%>

### Battle phase - Ennemies appear

<img src="Images/Battle1.png" width=90%>

### Battle phase - Castle takes damages

<img src="Images/Battle2.png" width=90%>


# Non-functionnal requirements

- The interface have to be clear enough for children to understand.
- The game must be responsive[^responsive] for all kind of computer screen (laptop, desk computer), with an acceptable resolution (the test must be readable)

# Footnotes

[^lore]: The story, a character's lore is the story of the character, it can also define the main story for a movie, a book or a game.
[^roguelite]: It is a lighter version of the roguelike[^roguelike] genre.
[^roguelike]: As the name suggest, it is a genre of game based on the gameplay of the game "Rogue" a video game from 1980, in this game the user axplore a dungeon where monsters lurk in the dark, the user have to find object to help him finishing the game, most of the time this genre is associated with procedural maps.
[^responsive]: A responsive app is an app which is able to scale to every screen size of it's plateform, for example responsive website are website able to perform for every computers and/or phones without having issues with their apparence.
