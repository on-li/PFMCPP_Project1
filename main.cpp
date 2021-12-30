#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       mosquito
//  action 1:   the mosquito bites
mosquito.bite();
//  action 2:   the mosquito flies
mosquito.fly();
//  action 3:   the mosquito crawls
mosquito.crawl();
//  2)
//  Noun:       finger
//  action 1:   the finger types a letter
finger.typeLetter();
//  action 2:   the finger plays a note on a piano
finger.playNote();
//  action 3:   the finger points
finger.point();
//  3)
//  Noun:       robot
//  action 1:   the robot marches
robot.march();
//  action 2:   the robot beeps
robot.beep();
//  action 3:   the robot changes it hand into a sword
robot.changeToSword();
//  4)          
//  Noun:       animator
//  action 1:   the animator studies references
animator.studyReference();
//  action 2:   the animator plans out what to draw
animator.planStoryboard();
//  action 3:   the animator draws one keyframe  
animator.drawKeyframe();
//  5)
//  Noun:       meteoroid
//  action 1:   the meteoroid orbits 
meteoroid.orbit();
//  action 2:   the meteoroid enters the earths atmosphere
meteoroid.enterAtmosphere();
//  action 3:   the meteoroid lands on the earth 
meteoroid.landOnEarth();
//  6)
//  Noun:       clock
//  action 1:   the clock changes it's hour hand 
clock.changeHourHand()
//  action 2:   the clock changes it's minute hand
clock.changeMinuteHand()    
//  action 3:   the clock changes it's second hand
clock.changeSecondHand()
//  7)
//  Noun:       computer 
//  action 1:   the computer shuts down 
computer.shutDown();
//  action 2:   the computer starts up
computer.startUp();
//  action 3:   the computer restarts
computer.restart();
//  8)
//  Noun:       cloud
//  action 1:   the cloud rains
cloud.rain();
//  action 2:   the cloud snows
cloud.snow();
//  action 3:   the cloud hails
cloud.hail();
//  9)
//  Noun:       bee
//  action 1:   the bee pollinates a flower
bee.pollinateFlower();
//  action 2:   the bee buzzes
bee.buzz();
//  action 3:   the bee stings
bee.sting();
//  10)
//  Noun:       turtle
//  action 1:   the turtle swims
turtle.swim();
//  action 2:   the turtle brumates
turtle.brumate();
//  action 3:   the turtle basks in the sun
turtle.baskInSun();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
