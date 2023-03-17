<hr>

**<p align="center" style="font-size: 21px">The Card Kingdom</p>**
**<p align="center" style="font-size: 18px">Test Cases</p>**
<p align="center">Clémentine Curel</p>

<br>

**<p align="center">Team:</p>**
<p align="center">Jason GROSSO, Aurélien Fernandez, Victor LEROY, Clément CATON</p>

<br>

<p align="center"> ALGOSUP, Group 6. All Rights Reserved. </p>

<hr>

<details>

<summary>Table of content</summary>

- [Test Cases](#test-cases)
  - [**Test Case ID**: 001](#test-case-id-001)
  - [**Test Case ID**: 002](#test-case-id-002)
  - [**Test Case ID**: 003](#test-case-id-003)
  - [**Test Case ID**: 004](#test-case-id-004)
  - [**Test Case ID**: 005](#test-case-id-005)
  - [**Test Case ID**: 006](#test-case-id-006)
  - [**Test Case ID**: 007](#test-case-id-007)
  - [**Test Case ID**: 008](#test-case-id-008)
  - [**Test Case ID**: 009](#test-case-id-009)
  - [**Test Case ID**: 010](#test-case-id-010)
  - [**Test Case ID**: 011](#test-case-id-011)
  - [**Test Case ID**: 012](#test-case-id-012)
  - [**Test Case ID**: 013](#test-case-id-013)

</details>

<hr>

# Test Cases

## **Test Case ID**: 001

**Test Title**: Cards navigation

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Wave 0

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|
|1|Observe the cards **without touching** them|Nothing should happen|Works|
|2|**Left** click on the first card (**short press**)|The card should teleport itself to the middle left of the screen and be bigger|Works|
|3|**Left** click on the same card (**short press**)|The card must return to its initial place and be smaller|Works|
|4|**Right** click on a card (**short press**)|The card should do nothing|Works|
|5|**Left** click on the last card (**short press**)|The card should teleport itself to the middle left of the screen and be bigger|Works|
|6|**Left** click on another card (**short press**)|The first card must return to its initial place and be smaller. The second card must be at the middle right of the screen and be bigger|To do|
|7|**Hovering** the card with the cursor|Nothing should happen|Works|
|8|**Left** click on a card (**long press**)|The card should teleport itself to the middle left of the screen and be bigger|Works|
|9|**Left** click on another card (**long press**)|The first card must return to its initial place and be the same size as the other. The second card must be at the middle left of the screen and be bigger|To do|
|10|**Left** click on the card selected(on right)(**long press**)|The card must return to its original place and have its original size|Works|
|11|**Double left** click on a card with a card under|The first card must go to the middle left and be bigger, followed by the card under, and the first card should return to its initial place with its initial size|To do|
|12|**Double left** click on the selected card|The card must return to its initial place with the initial size|Works|
|13|**Double left** click on a card with no card under|The card must go to the left and be bigger|Works|


**Expected Results**: All button presses should result in the expected movements without any unwanted behaviour.


## **Test Case ID**: 002

**Test Title**: Place tower card

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Wave 0

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|
|1|**Left** click on a card (**short press**)|The card should teleport itself to the middle right of the screen and be bigger|Works|
|2|**Hovering** the grid|Nothing will happen|Works|
|3|**Left** click on a random case on the grid(**short press**)|A tower must appear in the case clicked|To do|
|4|**Left** click on a card|The card should teleport itself to the middle right of the screen and be bigger|To do|
|5|**Left** click on the previous case occupied by a tower| Nothing should happen|To do|
|6|**Left** click on a random case of the grid|A tower must appear in the case clicked|To do|
|7|Try to **drag** a tower|Nothing should happen|To do|


**Expected Results**: All button presses should result in the expected movements without any unwanted behaviour.

## **Test Case ID**: 003

**Test Title**: Enemies coming

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Wave 0

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|
|1|**Right** click on the play button|Nothing should happen|To do|
|2|**Left** click on the play button|Sounds to let us know it starts, a new card appears on your deck|To do|
|3|**Wait** and click on **nothing**|The enemies should start to arrive|To do|
|4|**Left** click on enemies|Nothing should change. The enemies should continue to move straight forward to the castle and disappear when leaving the grid|To do|


**Expected Results**: All button presses should result in the expected movements without any unwanted behaviour.


## **Test Case ID**: 004

**Test Title**: Enemies path

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Wave 0, Set up phase finished with towers

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements without any unwanted behaviour.


## **Test Case ID**: 005

**Test Title**: Tower attacks

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Wave 0, Set up phase with one of each tower on the grid

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements without any unwanted behaviour.
- attack the nearer enemie
- phase end when no more enemies

## **Test Case ID**: 006

**Test Title**: Castle destroy

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Wave 0, Set up phase finished without a tower

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements without any unwanted behaviour.
- end when the castle is at 0hp
- or end when no more enemies


## **Test Case ID**: 007

**Test Title**: Pause during the set-up phase

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Wave 0

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements without any unwanted behaviour.



## **Test Case ID**: 008

**Test Title**: Pause during waves

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Wave 0, Set up phase finished

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements without any unwanted behaviour.



## **Test Case ID**: 009

**Test Title**: Saving

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Wave 0

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements without any unwanted behaviour.

<!-- saving set up phase -> no -->
<!-- saving during a wave -> ? -->

## **Test Case ID**: 010

**Test Title**: Keyboard test

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Wave 0

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements without any unwanted behaviour.


## **Test Case ID**: 011

**Test Title**: Place spells card

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Wave 0, set up phase finished

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements without any unwanted behaviour.

## **Test Case ID**: 012

**Test Title**: Get new cards

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Wave 1, set up phase

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements without any unwanted behaviour.
- cards are kept
- auto new crad + 5
- max 20 card
- if > 20 -> card to the discrad pile
- after can thraw card
- Finally if the players's deck is empty, their discard pile is shuffled and put back in the pile.

## **Test Case ID**: 013

**Test Title**: Damage saved

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Wave 1, set up phase finished

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|
- see if the castle still have the damage take in the previous wave


**Expected Results**: All button presses should result in the expected movements without any unwanted behaviour.