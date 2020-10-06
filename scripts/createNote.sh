#!/bin/sh

#$1 Chapter Name
#$2 Item Name

REPO_PATH=~/Documents/projects/Effective-Cpp-Reading-Note

echo create Note: $2 for part $1 in repo: $REPO_PATH
echo $REPO_PATH
cd $REPO_PATH

touch $1/$2.md
echo "\e[1;32m Create: \e[0m"$REPO_PATH/$2/$1.md
mkdir ./PracticeCode/$2
echo "\e[1;32m Create: \e[0m"$REPO_PATH/PracticeCode/$2
