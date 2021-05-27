#!/bin/bash
if [ -f "$1" ];  then
        echo "file exists"
else
        touch $1
        echo "created file"
fi

# this loop will go through the user defined amount of records. will come from command line args
for (( c=1; c<=$2; c++ ))
do  
    # Random integer to put in record
    randomInt=$(($RANDOM))
    # generate random string
    password=$(cat /dev/urandom | tr -dc 'a-zA-Z0-9' | fold -w 32 | head -n 1)
#     password=$(pwgen 95)
    echo "$randomInt $password" >> $1
done
