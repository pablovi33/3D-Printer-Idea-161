                   .:                     :,                                          
,:::::::: ::`      :::                   :::                                          
,:::::::: ::`      :::                   :::                                          
.,,:::,,, ::`.:,   ... .. .:,     .:. ..`... ..`   ..   .:,    .. ::  .::,     .:,`   
   ,::    :::::::  ::, :::::::  `:::::::.,:: :::  ::: .::::::  ::::: ::::::  .::::::  
   ,::    :::::::: ::, :::::::: ::::::::.,:: :::  ::: :::,:::, ::::: ::::::, :::::::: 
   ,::    :::  ::: ::, :::  :::`::.  :::.,::  ::,`::`:::   ::: :::  `::,`   :::   ::: 
   ,::    ::.  ::: ::, ::`  :::.::    ::.,::  :::::: ::::::::: ::`   :::::: ::::::::: 
   ,::    ::.  ::: ::, ::`  :::.::    ::.,::  .::::: ::::::::: ::`    ::::::::::::::: 
   ,::    ::.  ::: ::, ::`  ::: ::: `:::.,::   ::::  :::`  ,,, ::`  .::  :::.::.  ,,, 
   ,::    ::.  ::: ::, ::`  ::: ::::::::.,::   ::::   :::::::` ::`   ::::::: :::::::. 
   ,::    ::.  ::: ::, ::`  :::  :::::::`,::    ::.    :::::`  ::`   ::::::   :::::.  
                                ::,  ,::                               ``             
                                ::::::::                                              
                                 ::::::                                               
                                  `,,`


https://www.thingiverse.com/thing:2738690
TronXY X5S Marlin 1.1.8 Firmware by The_Wizard is licensed under the GNU - GPL license.
http://creativecommons.org/licenses/GPL/2.0/

# Summary

Marlin 1.1.8 for the TronXY X5S.  Fully working!

This has all the improvements I have done to the stock 1.1.6.

If you want to stay on the bleeding edge of Marlin , this is for you.

The way CoreXY is implemented is different on 1.1.8. Your motors may be swapped. If you get inverse motion or swapped X/Y,  invert the motor directions!

Manual Mesh Leveling added. 4x4 matrix
Improved homing , and jog speeds from LCD , particularly Z axis. Stock 4mm/s is far to slow
Increased Z max speed. 4mm/s is far to slow to prevent blobbing during Z moves. Max is now 35mm/s
Much improved encoder operation. It now works as expected. Single click for menu items, proper direction, and better multiplier operation when changing values.
EEPROM support enabled.
Filament change options enabled.
Better default Jerk settings.
Proper MAX positions.

Several other small changes.

Minus having to run bed leveling the first time...this is a drop in replacement. Flash and dash....

I suggest executing a "RESTORE FAILSAFE" from the LCD to ensure proper default EEPROM values are loaded immediately after flashing.