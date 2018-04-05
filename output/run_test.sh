#$1 nom du test quel'on souhaite exécuter de la forme numTest-nom (sans extension)
chemin="./"
cheminTest="./../testBackEnd/"

if [ -z "$1" ]               #si aucun argument n'est donné on génère tout 
then
  for i in $cheminTest*.c
   do
    ./../src/exe $i
   done
else                        #on génère seulement ce qui nous intéresse
 name=$1
 path="${cheminTest}${name}.c"
 ./../src/exe $path
fi


if [ -z "$1" ]
  then
    for i in $chemin*.s;
  do

   v=$i
   v="${v%?}"
   v2="${v}o"
   v3="${v%?}"
   as -o $v2 $i
   v3=$(echo "$v3" | cut -c 3-)
   echo "---------------------\r\n"
   echo "Test : $v3"
   echo "sortie\r\n"
   sh "./compiler.sh" $v3
 done
 echo "---------------------\r\n"

else 
 echo "---------------------\r\n"
 name=$1
 as -o "${name}.o" "${name}.s"
 echo "Test : $name"
 echo "sortie\r\n"

 sh "./compiler.sh" $name
 echo "---------------------\r\n"
fi


