; FUN_005cdd90  005cdd90
005cdd90  PUSH EBP
005cdd91  MOV EBP,ESP
005cdd93  PUSH -0x1
005cdd95  PUSH 0x6a8be8
005cdd9a  MOV EAX,FS:[0x0]
005cdda0  PUSH EAX
005cdda1  PUSH ECX
005cdda2  MOV EAX,[0x00781870]
005cdda7  XOR EAX,EBP
005cdda9  PUSH EAX
005cddaa  LEA EAX,[EBP + -0xc]
005cddad  MOV FS:[0x0],EAX
005cddb3  MOV dword ptr [EBP + -0x10],ECX
005cddb6  PUSH 0x0
005cddb8  PUSH 0x0
005cddba  MOV ECX,dword ptr [EBP + -0x10]
005cddbd  CALL 0x005f71f0
005cddc2  MOV dword ptr [EBP + -0x4],0x0
005cddc9  MOV EAX,dword ptr [EBP + -0x10]
005cddcc  MOV dword ptr [EAX],0x6d2bbc
005cddd2  PUSH 0x0
005cddd4  PUSH 0x421
005cddd9  MOV ECX,dword ptr [EBP + -0x10]
005cdddc  CALL 0x005f83d0
005cdde1  MOV dword ptr [EBP + -0x4],0xffffffff
005cdde8  MOV EAX,dword ptr [EBP + -0x10]
005cddeb  MOV ECX,dword ptr [EBP + -0xc]
005cddee  MOV dword ptr FS:[0x0],ECX
005cddf5  POP ECX
005cddf6  MOV ESP,EBP
005cddf8  POP EBP
005cddf9  RET
