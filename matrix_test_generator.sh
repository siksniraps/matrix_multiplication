#!/bin/bash





echo $1

for i in $(seq 1 $1); do
    for j in $(seq 1 $1); do
        echo -n $(( $RANDOM % 1000  ))  " "
    done
    echo
done
for k in $(seq 1 $1); do
    for l in $(seq 1 $1); do
        echo -n $(( $RANDOM % 1000  ))  " "
    done
    echo
done
