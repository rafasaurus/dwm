#!/bin/sh

cat <<EOF | xmenu
[]= M+t title			0
><> M+n ?floating		1
[M] M+m monocle			2
HHH M+g grid			3
|M| M+i centeredmaster		4
>M> S+i centeredfloatingmaster	5
[@] M+y spiral			6
[\\  S+y dwindle		7
TTT S+t bstack			8
H[] M+u deck			9
EOF
