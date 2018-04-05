nameExecutable=$1
nameBinary="${nameExecutable}.o"
gcc $nameBinary -o $nameExecutable && ./$nameExecutable

