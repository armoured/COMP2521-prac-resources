#!/bin/sh

case $# in
1) BIN="$1" ;;
*) echo "Usage: $0 ExecutableFile" ; exit 1 ;;
esac

if [ ! -f "$BIN" ]
then
    echo "No such executable: $BIN"
    exit 1
fi

if [ ! -x "$BIN" ]
then
    echo "$BIN is not executable"
    exit 1
fi

if [ ! -d tests ]
then
    echo "No tests/ directory here. Are you in the right directory?"
    exit 1
fi

for tt in tests/*.sh
do
    t=`basename $tt .sh`
    tests/$t.sh | head -500 > tests/$t.out
    if cmp -s tests/$t.exp tests/$t.out
    then
        echo Passed test $t
    else
        echo Failed test $t
        echo Compare files tests/$t.exp and tests/$t.out to see differences
    fi
done
