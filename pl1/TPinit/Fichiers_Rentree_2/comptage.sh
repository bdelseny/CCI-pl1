#!/bin/bash

a=$( cat $1 | wc -l ) 
b=$( cat $2 | wc -l )

if [ $a -gt $b ]
then
 cat $1
else
 cat $2
fi
