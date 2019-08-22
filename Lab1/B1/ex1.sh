#! /bin/bash 
if [ -z $1 ] ; then 
echo 'string null '
else 
echo $1 >ex1.txt
uname -a >> ex1.txt
fi 






