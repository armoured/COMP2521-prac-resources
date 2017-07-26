 #!/bin/bash

numtests=$(expr $(ls -lR ./tests/*.sh | wc -l) - 1)

for i in `seq 0 $numtests`; do

echo "test $i"

./tests/t$i.sh > ./tests/t$i.out

diff -y ./tests/t$i.exp ./tests/t$i.out

done 
