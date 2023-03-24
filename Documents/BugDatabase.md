For more information on how it works: [Test plan](TestPlan.md)

|Index|Reporter|Date|Description|Component|Steps|Assignee|Severity|Additional content|Status|Solution|
|-|-|-|-|-|-|-|-|-|-|-|
|1|Clémentine|10/03|TheCardKingdom could not be compiled on MacOS|Unreal or MacOS issue|At the opening of the project in UnReal|Clément|Medium|<img src="Images/1miss.png" style="height:100px"><img src="Images/1log.png" style="height:100px"><img src="Images/1error.png" style="height:100px">|Cancel|Change the game compatibility to be just with windows|
|2|Clement|13/03|bug with the cards, switching continuously|Cards|put the cursor in the exact middle of two cards|Clement|Medium|-|Closed|Change the method of picking card|
|3|Clement|17/03|When you select a card and select another one, both of them are in the same place. The first card doesn't unselect.|Cards|You click on a card to select it -> it goes on the left -> you click on another card -> it goes on the left, and the first one doesn't go to the original place|Clément|Medium|-|Closed||
|4|Clémentine|17/03|Wrong card selected when clicking on the blue part of a card|Cards|Click at the right of the number on the blue part of a card. The card under is selected|Clément|None|-|Closed|Was the result of the previous method of choosing a card. The hitbox of the cards has been deleted.|
|5|Clément|17/03|Instead of creating a tower, it creates a tower on every frame|Tower|Place a tower|Clément|Major|-|Closed||
|6|Clémentine|17/03|Multiple .DS_Store find in the GitHub|Documents|On the GitHub Main, and the Document file, and Document/Images|Victor|None|<img src="Images/6main.png" style="weight:100px"><img src="Images/6doc.png" style="weight:100px"><img src="Images/6img.png" style="weight:100px">|Closed|Victor delete the files and update the gitignore file.|
|7|Clément|21/03|The wrong tower place|Tower|Place a card to have a tower|Clément|Major|-|To do||
|8|Clément|21/03|You can place a tower before selecting the card|Card/Tower|Click on the grid without selecting a card, then click on a card. A tower will appear at the location of the click on the grid|Clément|Medium|-|To do||
|9|Clément|23/03|All the enemies walk in the same place, in the same time|Enemies|When you lauch the game, you start a wave, you should have 2 enemies, but just looks like one because they are at the same place|Clément|Major||To do||
|10|Léo (playtesting)|23/03|After multiple wave want to place an archer tower but can't even with mana|Cards|Be at the eleven wave and have one mana, try to place an archer tower|Clément|Medium||To do||
|11|Playtester|23/03|Mana not visible when a card is selected|Mana|Select a card, you can't see your mana anymore|Clément|Medium||Closed|Move the mana higher|
|12|Clément|22/03|Enemies go through the towers|Enemies|When you lauch the game, place a tower in the middle of the grid,you start a wave|Clément|Major|-|To do|Add pathfinding and collider?|
|13|Playtester|23/03|Not enough information on the cards|Cards|Select a card and they don't learn a lot about the card|Clémentine|Major|-|In progress|Create new card with picture of the tower, and information on the target, damage and speed|
