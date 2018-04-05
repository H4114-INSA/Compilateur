#argument 1 : le nom du test à réaliser si on ne souhaite en lancer qu'un
chemin="./../testBackEnd/"


if [ -z "$1" ] 
then
  for i in $chemin*.c
   do
    echo "$i"
  
    ./../src/exe $i
  
   done

else 
 name=$1
 path="${chemin}${name}"
 ./../src/exe $path
fi
