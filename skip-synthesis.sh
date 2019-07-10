##
## EPITECH PROJECT, 2019
## delivery
## File description:
## skip-synthesis
##

#!/bin/bash

grep \ $1 | awk '$1 {print $3 ,"\t", $9}'