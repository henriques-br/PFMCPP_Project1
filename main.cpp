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
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: musicPlayer
//  action 1: music player plays tracks
musicPlayer.playTracks();

//  action 2: music player pauses playback 
musicPlayer.pausePlayback();

//  action 3: music player adjusts volume
musicPlayer.adjustVoume();

//  2)
//  Noun: taskScheduler
//  action 1: task scheduler schedules tasks
taskScheduler.scheduleTasks();

//  action 2: task scheduler prioritize jobs
taskScheduler.prioritizeJobs();

//  action 3: task scheduler delays execution
taskScheduler.delayExecution()

//  3)
//  Noun: car
//  action 1: car starts engine
car.startEngine();

//  action 2: car accelerate
car.accelerate();

//  action 3: car brakes
car.brake();

//  4) 
//  Noun: bankAccount
//  action 1: bank account does deposit
bankAccount.deposit();

//  action 2: bank account does withdraw
bankAccount.withdraw();

//  action 3: bank account does transfer
bankAccount.transfer();

//  5) 
//  Noun: paymentProcessor
//  action 1: the payment processor validates payments
paymentProcessor.validatePayments();

//  action 2: the payment processor transfer funds
paymentProcessor.transferFunds();

//  action 3: the payment processor generate receipts
paymentProcessor.generateReceipts();

//  6)
//  Noun: weatherMonitor
//  action 1: weather monitor measures temperature
weatherMonitor.measureTemperature();

//  action 2: weather monitor report conditions
weatherMonitor.reportConditions();

//  action 3: weather monitor detects storms
weatherMonitor.detectStorms();

//  7)
//  Noun: gameController
//  action 1: game controller detects input
gameController.detectInput();

//  action 2: game controller triggers vibration
gameController.triggerVibration();

//  action 3: game controller navigates menus
gameController.navigateMenus();

//  8)
//  Noun: securityScanner
//  action 1: security scanner detects threats
securityScanner.detectsThreats();

//  action 2: security scanner quarantines malware
securityScanner.quarantineMalware();

//  action 3: security scanner scans network
securityScanner.scanNetwork();

//  9)
//  Noun: fileOrganizer
//  action 1: file organizer sorts documents
fileOrganizer.sortDocuments();

//  action 2: file organizer rename files
fileOrganizer.renameFiles();

//  action 3: file organizer archives folders
fileOrganizer.archiveFolders();

//  10)
//  Noun: inventoryManager
//  action 1: inventory manager tracks products
inventoryManager.trackProducts();

//  action 2: inventory manager updates stock
inventoryManager.updateStock();

//  action 3: inventory manager orders supplies
inventoryManager.orderSupplies();


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
