# Dart Game Simulation
Simulation runs for "HyperDarts"

# Game rules
The rules of the game are as follows:
 - *In the game of HyperDarts, the bull’s eye starts out with a diameter of 1, but each dart that lands reduces it to the length of the chord the dart lies on (or 0, if the dart is outside the bull’s eye).*
 - *Suppose a (very unskilled) player is equally likely to hit **any** point in the white square. They get 1 point just for playing, then 1 point every time they hit the current bull’s eye. If they throw an infinite number of darts, what is their expected score?*

https://user-images.githubusercontent.com/43309118/140780691-cb024757-ca4d-4346-ba19-a02915b23774.mp4

# Usage
	`simulation.exe <number of games> [--no-info]`
  The "--no-info" flag is optional which, if present, would result in no additional information displayed about each game. This is primarily to increase performance since a million print calls would decrease the program speed significantly.
