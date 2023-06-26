#!/bin/bash

echo "enter file name "
read Filename
#touch $Fileneme
# para escribir comentarios se usa #


echo "enter commit/message"
read c
#touch $c

echo "are you working on a branch ?"
read answer
#touch $answer

if [ "$answer" == "yes" ]; then
echo "enter branch name"
read bN
#touch $bN

git add $Filename
git commit -m '$c'
git push origin $bN

else
git add $Filename
git commit -m '$c'
git push 
fi


#!/bin/bash
#echo "Enter file name: "
#read Filename
#touch $Filename

#echo "Enter commit/message: "
#read c

#echo "Are you working on a branch? (yes/no): "
#read answer

#if [ "$answer" == "yes" ]; then
#echo "Enter branch name: "
#read bN

#git add $Filename
#git commit -m "$c"
#git push origin $bN

#else
#git add $Filename
#git commit -m "$c"
#git push
#fi
