; FUN_005fab80  005fab80
005fab80  PUSH EBP
005fab81  MOV EBP,ESP
005fab83  PUSH -0x1
005fab85  PUSH 0x6aa4a4
005fab8a  MOV EAX,FS:[0x0]
005fab90  PUSH EAX
005fab91  SUB ESP,0x10
005fab94  MOV EAX,[0x00781870]
005fab99  XOR EAX,EBP
005fab9b  PUSH EAX
005fab9c  LEA EAX,[EBP + -0xc]
005fab9f  MOV FS:[0x0],EAX
005faba5  MOV dword ptr [EBP + -0x18],ECX
005faba8  CMP dword ptr [EBP + 0x8],0x0
005fabac  JNZ 0x005fabef
005fabae  PUSH 0x70
005fabb0  CALL 0x00686d82
005fabb5  ADD ESP,0x4
005fabb8  MOV dword ptr [EBP + -0x14],EAX
005fabbb  MOV dword ptr [EBP + -0x4],0x0
005fabc2  CMP dword ptr [EBP + -0x14],0x0
005fabc6  JZ 0x005fabd5
005fabc8  MOV ECX,dword ptr [EBP + -0x14]
005fabcb  CALL 0x00614810
005fabd0  MOV dword ptr [EBP + -0x1c],EAX
005fabd3  JMP 0x005fabdc
005fabd5  MOV dword ptr [EBP + -0x1c],0x0
005fabdc  MOV EAX,dword ptr [EBP + -0x1c]
005fabdf  MOV dword ptr [EBP + -0x10],EAX
005fabe2  MOV dword ptr [EBP + -0x4],0xffffffff
005fabe9  MOV ECX,dword ptr [EBP + -0x10]
005fabec  MOV dword ptr [EBP + 0x8],ECX
005fabef  MOV EDX,dword ptr [EBP + 0x8]
005fabf2  PUSH EDX
005fabf3  MOV ECX,dword ptr [EBP + -0x18]
005fabf6  ADD ECX,0xd4
005fabfc  CALL 0x0060c840
005fac01  MOV EAX,dword ptr [EBP + 0x8]
005fac04  MOV ECX,dword ptr [EBP + -0x18]
005fac07  MOV dword ptr [EAX + 0x4],ECX
005fac0a  MOV EDX,dword ptr [EBP + 0xc]
005fac0d  PUSH EDX
005fac0e  MOV EAX,dword ptr [EBP + 0x58]
005fac11  PUSH EAX
005fac12  MOV ECX,dword ptr [EBP + 0x54]
005fac15  PUSH ECX
005fac16  MOV EDX,dword ptr [EBP + 0x50]
005fac19  PUSH EDX
005fac1a  MOV EAX,dword ptr [EBP + 0x4c]
005fac1d  PUSH EAX
005fac1e  MOV ECX,dword ptr [EBP + 0x48]
005fac21  PUSH ECX
005fac22  MOV EDX,dword ptr [EBP + 0x44]
005fac25  PUSH EDX
005fac26  MOV EAX,dword ptr [EBP + 0x40]
005fac29  PUSH EAX
005fac2a  MOV ECX,dword ptr [EBP + 0x3c]
005fac2d  PUSH ECX
005fac2e  MOV EDX,dword ptr [EBP + 0x38]
005fac31  PUSH EDX
005fac32  MOV EAX,dword ptr [EBP + 0x34]
005fac35  PUSH EAX
005fac36  MOV ECX,dword ptr [EBP + 0x30]
005fac39  PUSH ECX
005fac3a  MOV EDX,dword ptr [EBP + 0x2c]
005fac3d  PUSH EDX
005fac3e  MOV EAX,dword ptr [EBP + 0x28]
005fac41  PUSH EAX
005fac42  MOV ECX,dword ptr [EBP + 0x24]
005fac45  PUSH ECX
005fac46  MOV EDX,dword ptr [EBP + 0x20]
005fac49  PUSH EDX
005fac4a  MOV EAX,dword ptr [EBP + 0x1c]
005fac4d  PUSH EAX
005fac4e  MOV ECX,dword ptr [EBP + 0x18]
005fac51  PUSH ECX
005fac52  MOV EDX,dword ptr [EBP + 0x14]
005fac55  PUSH EDX
005fac56  MOV EAX,dword ptr [EBP + 0x10]
005fac59  PUSH EAX
005fac5a  MOV ECX,dword ptr [EBP + 0x8]
005fac5d  CALL 0x00614b60
005fac62  MOV ECX,dword ptr [EBP + 0x8]
005fac65  MOV EDX,dword ptr [ECX]
005fac67  MOV ECX,dword ptr [EBP + 0x8]
005fac6a  MOV EAX,dword ptr [EDX + 0x74]
005fac6d  CALL EAX
005fac6f  MOV EAX,dword ptr [EBP + 0x8]
005fac72  MOV ECX,dword ptr [EBP + -0xc]
005fac75  MOV dword ptr FS:[0x0],ECX
005fac7c  POP ECX
005fac7d  MOV ESP,EBP
005fac7f  POP EBP
005fac80  RET 0x54
