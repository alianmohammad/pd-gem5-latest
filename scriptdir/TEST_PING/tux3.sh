#/bin/bash/
for i in `seq 1 10`;
do
        ping -c 1 10.0.0.2
        ping -c 1 10.0.0.3
        ping -c 1 10.0.0.4
done
/bin/bash
