startup trace 2
node
ps
exec {nowait,name $SERV0,nid 0}server
exec {nowait,pri 5,name $SERV1}server
exec {nowait,pri 10,name $CLIENT,nid 0}client
delay 1
ps
delay 1
ps
ps
ps
delay 1
ps
delay 5



