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
  - [Mockup](#mockup)
  - [Course of a game](#course-of-a-game)
        - [When the players starts the game:](#when-the-players-starts-the-game)
        - [When the players starts a new game](#when-the-players-starts-a-new-game)
- [Non-functionnal requirements](#non-functionnal-requirements)
- [Footnotes](#footnotes)

</details>

# Overview

The goal of this project is to create a video game with innovant ideas within 6 weeks.
The idea is to teach students principles of game design, during this project we will learn every fundamentals of creating a video game, from the creation of concepts to create the balance between every element.

To create a video game we will use multiple tools such as:

- Unreal Engine 4
- Modeling app such as blender
  
As for the audience we are aiming, we are aiming for every type of users, from 8 years old to 80 years old. However if you want more specific informations here is a document that will present them: [Personas](./Personas.md)

# Game overview

## Story

The story takes place in a fantasy world, humans are the most dominant species, goblins, orcs, phantoms, and countless creatures can be found, but beware, they are lurking in the dark, waiting for the long-desired moment where they can crush all civilization and hope. You are the king, head of your country and its armies, you will have to defend your glorious kingdom against endless waves of monsters and sometimes traitors, but you are not alone, powerful artifacts will lead your way during this journey, defend your kingdom and your people my king, may the gods be with you.

## Mechanics

Our team is searching for innovative ideas, to attain them we wanted to aim to a new type of gameplay, our game is a tower defence game mixed with a roguelite[^roguelite] style, the user is defending their castle with the same mechanics as a standard tower defence but using a system of cards and deck.

To explain a bit further, the user have a hand of cards, generated randomly after each waves in a level depending of user's deck. To use their cards, the user will have to use their mana, a ressource refilled as the same time as the hand.

The user will be able to place their towers on the map which is cut into a grid, they can also upgrade their towers and even give a bonus to them. By placing towers the user will be able to create a maze to make ennemies' advance longer and harder.

Furthermore, the levels will be chosen by the user by using a procedural[^procedural] generation for the list of levels.

## Gameplay

The gameplay was made to be simple to grasp within short time, the battle phase is cut in two different part, the setup and the play phase.

##### Setup phase

The setup phase is, as its name suggest a moment where the players is able to setup his towers. At the start of the phase the players will see their mana refilled and will have 5 more cards in their hand. At this moment the players will have to think about how to use their mana to place towers on the grid, (e.g: the players has an archer tower and a crossbow tower, they cost 2 and 3 respectively but the players only has 4 mana, they need to choose which tower they will place or use none of them). Something to note is that during this phase, the view automatically transform to an aerial view.

When the players has finished his preparations they can push the button "new wave" and the battle phase starts, making the camera come back to an isometric view.

At the end of the phase the players keep his cards, however, they can hold until 20 cards maximum, if the players has their hand full, new cards directly go to the discard pile, to avoid the players to be stuck, they can send directly card in his hand to the discard pile for free.

Finally if the players's deck is empty, their discard pile is shuffled and put back in the pile.

##### Play phase

The play phase represent the phase where ennemies are coming, the towers attack nearby ennemies and the phase ends when all ennemies are killed, except for boss battles, if the boss is not killed after a certain amount of time, it calls reinforcement and every ennemies are twice as fast, it is to avoid a battle phase that last longer than expected. Finaly, during this phase, the players can use their remaining mana to use spell cards that they can temporarily enhance towers, slow or hurt ennemies.

## Design

## Mockup

The image below is showing the interface during the play phase, on the bottom you can observe players's hand of card, on the right it's pile and on the left the discard pile, as the norm dictates.

On the middle you can see the grid, this is where playerss can use their cards and create their maze, naturally this is where ennemies will appear and this is where they will be marching toward the castle.

Now, for the interface part, on the castle's left you can see the players's mana, on the top, you can see as it follows : the artifact inventory, the number of wave, the pause button and finaly under the pause button there is a "new wave" button (not visible on the mockup), this button ends the setup phase, hovering it reveal which monsters will come and how many of them there will be.

Finally on the left of the card you may have noticed there is a grey square, it is where we will put an almanach, it will contain a description of the towers' and  the ennemies' features and, if we have the time, their lore[^lore].

<img src="Images/Mockup.png">

## Course of a game

##### When the players starts the game:

- The players open the executable
- The players arrives on the main menue
- The players select "new game"
  
##### When the players starts a new game

- The players arrives on the playable scene
- The setup phase starts, the view is now aerial
- The players use all his mana to place archer towers
- The players pushes the "new wave" button"
- The players sucessfully kill all of the ennemies
- The setup phase come back, all his mana is refilled, the players now has 5 cards
- The players pushes the "new wave" button
- An ennemies sucessfuly pass through the players defenses and arrive at the castle, the players loses
- The players come back to the main menu

# Non-functionnal requirements

- The interface have to be clear enough for children to understand.
- The game must be responsive[^responsive] for all kind of computer screen (laptop, desk computer), with an acceptable resolution (the test must be readable)

# Footnotes

[^lore]: The story, a character's lore is the story of the character, it can also define the main story for a movie, a book or a game.
[^roguelite]: It is a lighter version of the roguelike[^roguelike] genre.
[^roguelike]: As the name suggest, it is a genre of game based on the gameplay of the game "Rogue" a video game from 1980, in this game the user axplore a dungeon where monsters lurk in the dark, the user have to find object to help him finishing the game, most of the time this genre is associated with procedural maps.
[^procedural]: A procedural generation is a randomly generated system, it is used to generate the terrain, the list of level or even encounters.
[^responsive]: A responsive app is an app which is able to scale to every screen size of it's plateform, for example responsive website are website able to perform for every computers and/or phones without having issues with their apparence.
