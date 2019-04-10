# Project Proposal
## Bubble Notes
##### CS 126 Final Project


For my final project, I plan on making post-it notes in the form of bubbles. It's a cross between bubble screen savers and digital sticky notes that computers have. 

* I will use the graphics library to make circles (bubbles). I'm not sure if transparent colors are possible, so I'll probably just use pastel colors instead. I will play around with coloring to see what effects I can make to imitate transparency.
    * The background window can be made transparent using the ofxTransparentWindow add-on.

* For shape animation, I would use the ofxAnimatable add-on. I want the bubbles to move randomly on the screen and "bounce" off each other if they hit each other so figuring out the movement will be the biggest challenge.
    * a tutorial with ofMesh has an orbiting movement so maybe I can use it add some additional movement: https://openframeworks.cc/ofBook/chapters/generativemesh.html#manipulationsaddingeffectsthatmodifythemesh

* Since these bubbles are supposed to double as sticky notes, they will also need to take in user text-input. There's an example on the openframworks forum I will follow
    * https://forum.openframeworks.cc/t/text-input-creating-words-by-entering-and-showing-on-screen/2846/2 
