#bProject Development
## Bubble Notes


##### 4/7/19
- [x] implement ofxTransparentWindow to of window transparent
- [x] have some circles ("bubbles")

:sparkles: :sparkles: :sparkles: 
created some circles on a transparent fullscreen background

##### 4/14/19
- [ ] ability to resize bubbles
- [x] simple movement 
- [ ] 3D (shading) bubbles - more realistic(?) than 2D 

:sparkles: :sparkles: :sparkles: 
added movement to bubbles using ofxBox2d, however bubble cannot be dragged around unless background is _not_ transparent. i set the gravity to 0 so that bubble can float freely, however the user must drag the first bubble (and subsequent bubbles if no collision occurs) to initiate movement. this obviously doesnt allow for a transparent screen, so the ofxTransparentWindow might need to go. 

the bubbles always have a black line from the center to edge. tried overriding ofxBox2dCircle.draw() method to remove the line but it didn't work, so  i want to try making a custom polygon (circle). also i want to add a feature of double clicking the bubble and then it'll be deleted.

##### 4/21/19
- [ ] remove black radial(?) line on bubbles
- [x] make bubbles a variety of (consistent) colors and not an epilepsy-inducing disco fiasco > multiple methods?


- [x] movement - have different settings of movement, random, simple, etc
    * from code review have option to have bubbles all fall to bottom of screen?
- [ ] add text >> find a way to save text inputs - .txt files?

:sparkles: :sparkles: :sparkles: 
each call to add a bubble adds 3 different colored bubbles at once -> had an issue where every 3 bubble calls would display color and inbetween it didn't work so this is the solution. wasn't able to override method to remove black line on circle because the method is interwoven with a bunch of other methods so its just plain messy, will keep working on it. added buttons that change the physics in the program (diifferent gravities).

##### 4/28/19
- [ ] add background sound
- [ ] add option to change bubble color?
- [ ] some additional features?
