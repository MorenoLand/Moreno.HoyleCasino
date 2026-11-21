; FUN_005dbf60  005dbf60
005dbf60  PUSH EBP
005dbf61  MOV EBP,ESP
005dbf63  PUSH -0x1
005dbf65  PUSH 0x6a93a7
005dbf6a  MOV EAX,FS:[0x0]
005dbf70  PUSH EAX
005dbf71  SUB ESP,0x18
005dbf74  MOV EAX,[0x00781870]
005dbf79  XOR EAX,EBP
005dbf7b  PUSH EAX
005dbf7c  LEA EAX,[EBP + -0xc]
005dbf7f  MOV FS:[0x0],EAX
005dbf85  MOV dword ptr [EBP + -0x20],ECX
005dbf88  LEA EAX,[EBP + -0x14]
005dbf8b  PUSH EAX
005dbf8c  MOV ECX,dword ptr [EBP + -0x20]
005dbf8f  CALL 0x005dac90
005dbf94  PUSH EAX
005dbf95  CALL 0x005dcb00
005dbf9a  ADD ESP,0x4
005dbf9d  MOV ECX,EAX
005dbf9f  CALL 0x005d5a90
005dbfa4  MOV ECX,dword ptr [EAX + 0x4]
005dbfa7  PUSH ECX
005dbfa8  MOV EDX,dword ptr [EAX]
005dbfaa  PUSH EDX
005dbfab  PUSH 0x5
005dbfad  MOV ECX,dword ptr [EBP + -0x20]
005dbfb0  CALL 0x005dac90
005dbfb5  PUSH EAX
005dbfb6  MOV ECX,dword ptr [0x0079506c]
005dbfbc  CALL 0x005e7e40
005dbfc1  PUSH 0x0
005dbfc3  PUSH ECX
005dbfc4  FLD float ptr [0x006b3654]
005dbfca  FSTP float ptr [ESP]
005dbfcd  PUSH ECX
005dbfce  FLD1
005dbfd0  FSTP float ptr [ESP]
005dbfd3  PUSH 0x1
005dbfd5  PUSH 0x5
005dbfd7  PUSH 0x0
005dbfd9  PUSH 0x0
005dbfdb  PUSH 0x18a9b
005dbfe0  MOV EAX,[0x0162ee84]
005dbfe5  MOV EDX,dword ptr [EAX]
005dbfe7  MOV ECX,dword ptr [0x0162ee84]
005dbfed  MOV EAX,dword ptr [EDX + 0x80]
005dbff3  CALL EAX
005dbff5  CMP dword ptr [0x007947c4],0x0
005dbffc  JNZ 0x005dc078
005dbffe  PUSH 0x1c0
005dc003  CALL 0x00686d82
005dc008  ADD ESP,0x4
005dc00b  MOV dword ptr [EBP + -0x1c],EAX
005dc00e  MOV dword ptr [EBP + -0x4],0x0
005dc015  CMP dword ptr [EBP + -0x1c],0x0
005dc019  JZ 0x005dc028
005dc01b  MOV ECX,dword ptr [EBP + -0x1c]
005dc01e  CALL 0x005cecc0
005dc023  MOV dword ptr [EBP + -0x24],EAX
005dc026  JMP 0x005dc02f
005dc028  MOV dword ptr [EBP + -0x24],0x0
005dc02f  MOV ECX,dword ptr [EBP + -0x24]
005dc032  MOV dword ptr [EBP + -0x18],ECX
005dc035  MOV dword ptr [EBP + -0x4],0xffffffff
005dc03c  MOV EDX,dword ptr [EBP + -0x18]
005dc03f  MOV dword ptr [0x007947c4],EDX
005dc045  MOV EAX,dword ptr [EBP + -0x20]
005dc048  MOV EDX,dword ptr [EAX]
005dc04a  MOV ECX,dword ptr [EBP + -0x20]
005dc04d  MOV EAX,dword ptr [EDX + 0x2f4]
005dc053  CALL EAX
005dc055  PUSH EAX
005dc056  MOV ECX,dword ptr [EBP + 0xc]
005dc059  PUSH ECX
005dc05a  MOV EDX,dword ptr [EBP + 0x8]
005dc05d  PUSH EDX
005dc05e  MOV ECX,dword ptr [0x007947c4]
005dc064  CALL 0x005cee20
005dc069  PUSH 0x0
005dc06b  PUSH 0x0
005dc06d  MOV ECX,dword ptr [0x007947c4]
005dc073  CALL 0x005f7340
005dc078  MOV ECX,dword ptr [0x007947c4]
005dc07e  CALL 0x005cef60
005dc083  MOV ECX,dword ptr [EBP + -0xc]
005dc086  MOV dword ptr FS:[0x0],ECX
005dc08d  POP ECX
005dc08e  MOV ESP,EBP
005dc090  POP EBP
005dc091  RET 0x8
