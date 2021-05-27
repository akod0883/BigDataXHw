#!/bin/bash
if [ -f "$1" ];  then
        echo "file exists"
else
        touch $1
        echo "created file"
fi

# Define varirables to store command line args
for (( c=1; c<=$2; c++ ))
do  
    randomInt=$(($RANDOM))
    password=$(cat /dev/urandom | tr -dc 'a-zA-Z0-9' | fold -w 32 | head -n 1)
#     password=$(pwgen 95)
    echo "$randomInt $password" >> $1
done
