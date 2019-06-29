# Fillit

## Description
Main task is to find the smallest square which is suitable for given tetris figures as parameters

## Installation
        git clone https://github.com/koliankolin/fillit
        cd fillit
        make re
        
## Usage
        ./fillit [file.txt]
        
        // Example of file.txt
        ....
        ##..
        .#..
        .#..
        
        ....
        ####
        ....
        ....
        
        #...
        ###.
        ....
        ....
        
        ....
        ##..
        .##.
        ....

        
        // Possible output
        DDAA
        CDDA
        CCCA
        BBBB
