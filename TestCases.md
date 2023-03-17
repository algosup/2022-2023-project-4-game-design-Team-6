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

</details>

<hr>

# Test Cases

## **Test Case ID**: 001

**Test Title**: Cards navigation

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Level 0

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|
|1|Observe the cards **without touching** them|Nothing should happen|To do|
|2|**Left** click on the first card (**short press**)|The card should teleporte itself to the middle left of the screen|To do|
|3|**Left** click on the same card (**short press**)|The card must return to its initial place|To do|
|4|**Right** click on a card (**short press**)|The card should do nothing|To do|
|5|**Left** click on the last card (**short press**)|The card should teleporte itself to the middle left of the screen|To do|
|6|**Left** click on second card (**short press**)|The first card must return to its initial place and the second card must be at the middle right of the screen|To do|
|7|**Hovering** the card with the cursor|Nothing should happen|To do|
|8|**Left** click on a card (**long press**)|The card should teleporte itself to the middle left of the screen|To do|
|9|**Left** click on second card (**long press**)|The first card must return to its initial place and the second card must be at the middle right of the screen|To do|
|10|**Left** click on the card selected(on right)(**long press**)|The card must return to its original place|To do|
|11|**Double left** click on a card with a card under|The first card must go to the left, following by the card under and th efirst crad should return to its initial place|To do|
|12|**Double left** click on the selected card|The card must return to its initial place|To do|
|13|**Double left** click on a card with no card under|The card must go to the left|To do|


**Expected Results**: All button presses should result in the expected movements, without any additional unwanted behaviour.


## **Test Case ID**: 002

**Test Title**: Placing tower

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Level 0

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|
|1|**Left** click on a card (**short press**)|The card should teleporte itself to the middle right of the screen|To do|
|2|**Hovering** the grid|Or you can see the tower or you can see the tower with the damage area or you see nothing|To do|
|3|**Left** click on a random case on the grid(**short press**)|A tower must appear in the case clicked|To do|
|4|**Left** click on a card|The card should teleporte itself to the middle right of the screen|To do|


**Expected Results**: All button presses should result in the expected movements, without any additional unwanted behaviour.

## **Test Case ID**: 003

**Test Title**: Enemies coming

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Level 0, Set up phase finished without tower

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements, without any additional unwanted behaviour.


## **Test Case ID**: 004

**Test Title**: Enemies path

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Level 0, Set up phase finished with towers

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements, without any additional unwanted behaviour.


## **Test Case ID**: 005

**Test Title**: Tower attacks

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Level 0, Set up phase with one of each tower on the grid

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements, without any additional unwanted behaviour.


## **Test Case ID**: 006

**Test Title**: Castle destroy

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Level 0, Set up phase finished without tower

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements, without any additional unwanted behaviour.



## **Test Case ID**: 007

**Test Title**: Pause during the set up phase

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Level 0

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements, without any additional unwanted behaviour.



## **Test Case ID**: 008

**Test Title**: Pause during waves

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Level 0, Set up phase finished

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements, without any additional unwanted behaviour.



## **Test Case ID**: 009

**Test Title**: Saving

**Environment**: UnReal 4.27

**Preconditions**: Load into the game with the following settings: Level 0

**Test Steps**:

|Step|Instructions|Expected behaviour|Status|
|----|------------|------------------|------|


**Expected Results**: All button presses should result in the expected movements, without any additional unwanted behaviour.

<!-- saving set up phase -> no -->
<!-- saving during a wave -> ? -->