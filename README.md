## Youtube Demo Video: https://www.youtube.com/watch?v=JnnYHGuJlKk&t=2s&ab_channel=AceOfBacons

# ReplaySystemDemo
## Unreal Engine Replay System
The unreal engine replay system is able to record gameplay data and store it for later viewing. Even if a project doesn't have a multiplayer mode, any project set up to replicate data is compatible with the Replay System without the need for further modification.


## Recording gameplay
In C++ recording gameplay takes place in the game instance. So, we will create our own one.
Here we will define our functionalities for the replay system.
 
We should be able to:
•	Start a recording. For now, we are using the local file streamer, but we could add in an extra parameter with a URL option to user another one.
•	Stop the recording
•	Play the replay


## Defining the functionalities
Now we need to define our functions. We will set the recording name and friendly recording name properties to “My replay” by default and then define each individual function, we will use methods already present in the "ReplaySystem/ReplayGameInstance.h" library to help us.
 

Finally, we change out default game instance class for our own:
 
## Demo net Driver
It will record network traffic for demos. When you watch your gameplay back, you will only see things that are replicated. 
 
This is the reason why we will add replication to the objects that we want to see on replays, like the projectile bullet.
Assign keys
Then we will assign key bounds to our previously created functions, in order to trigger them
 
•	Key [1] should start the recording
•	Key [2] should stop the recording
•	Key [3] to watch the replay
•	Key [4] to restart the replay, while watching it


## Restarting the replay and adding a 2nd Player Controller
We will add another player controller class, to spawn in when we play back the replay footage. Unreal actually does this for us by default, but we will create our own Player Controller instance to add in more functionality.
 
In this case we will add a function to restart the playing of the replay.


## Setting up the Game mode

Finally, we will create our own game mode class, where I am assigning the “replay spectator player controller class” to our previously created player controller class.
Accessing a stored replay
The Local File Streamer records replay data asynchronously to a single file on local storage (such as a hard drive). By default, replay data files are saved to the "Saved/Demos/" folder in your project, and have the extension ".replay".
Project file structure
All of the custom blueprints created will be under the “Blueprints” folder.
 
All of the custom C++ Classes created will be under the “Public” folder.
 


## My personal experience
The replay system looks to be a basic tool, that can escalate into more complex behaviours according to the user’s needs. I was able to implement a custom function that allowed me to re-start the replay, quickly and without major inconveniences. However, we I started researching more into streamers, which are the classes that exist to extract and record the information needed to create replays, the rabbit hole can go deep, and there is not a lot of documentation to support their usage and experimentation. There are several different Streamers included with the Engine that can be attached to the DemoNetDriver depending on how the replay data is intended to be viewed.


## Potential applications
Within the scale of a larger project, I see the replay system a powerful tool that can be adapted and suited to most projects without a very significant learning curve. Replays can be easily created, played, modified and stored, which is what any basic replay system should do. On another side, it took me a relatively short time to implement, but this might change if the replays have to go through a different Streamer setup.

