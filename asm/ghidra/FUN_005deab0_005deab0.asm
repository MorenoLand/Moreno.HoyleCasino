; FUN_005deab0  005deab0
005deab0  PUSH EBP
005deab1  MOV EBP,ESP
005deab3  PUSH -0x1
005deab5  PUSH 0x6a95c3
005deaba  MOV EAX,FS:[0x0]
005deac0  PUSH EAX
005deac1  SUB ESP,0x24
005deac4  MOV EAX,[0x00781870]
005deac9  XOR EAX,EBP
005deacb  PUSH EAX
005deacc  LEA EAX,[EBP + -0xc]
005deacf  MOV FS:[0x0],EAX
005dead5  MOV dword ptr [EBP + -0x20],ECX
005dead8  MOV dword ptr [0x007947e4],0x0
005deae2  MOV EAX,dword ptr [EBP + -0x20]
005deae5  MOV EDX,dword ptr [EAX]
005deae7  MOV ECX,dword ptr [EBP + -0x20]
005deaea  MOV EAX,dword ptr [EDX + 0xe4]
005deaf0  CALL EAX
005deaf2  CMP dword ptr [EBP + 0x8],EAX
005deaf5  JGE 0x005deb37
005deaf7  MOV ECX,dword ptr [EBP + 0x8]
005deafa  PUSH ECX
005deafb  MOV EDX,dword ptr [EBP + -0x20]
005deafe  MOV EAX,dword ptr [EDX]
005deb00  MOV ECX,dword ptr [EBP + -0x20]
005deb03  MOV EDX,dword ptr [EAX + 0xe0]
005deb09  CALL EDX
005deb0b  MOV dword ptr [EBP + -0x24],EAX
005deb0e  PUSH 0x0
005deb10  PUSH 0x706b50
005deb15  PUSH 0x706b6c
005deb1a  PUSH 0x0
005deb1c  MOV EAX,dword ptr [EBP + -0x24]
005deb1f  MOV EDX,dword ptr [EAX]
005deb21  MOV ECX,dword ptr [EBP + -0x24]
005deb24  MOV EAX,dword ptr [EDX + 0x4]
005deb27  CALL EAX
005deb29  PUSH EAX
005deb2a  CALL 0x00686ede
005deb2f  ADD ESP,0x14
005deb32  MOV [0x007947e4],EAX
005deb37  MOV ECX,dword ptr [EBP + 0x8]
005deb3a  MOV dword ptr [EBP + -0x28],ECX
005deb3d  CMP dword ptr [EBP + -0x28],0x30d400
005deb44  JZ 0x005deb54
005deb46  CMP dword ptr [EBP + -0x28],0x30d401
005deb4d  JZ 0x005deb9c
005deb4f  JMP 0x005debe3
005deb54  PUSH 0x98
005deb59  CALL 0x00686d82
005deb5e  ADD ESP,0x4
005deb61  MOV dword ptr [EBP + -0x14],EAX
005deb64  MOV dword ptr [EBP + -0x4],0x0
005deb6b  CMP dword ptr [EBP + -0x14],0x0
005deb6f  JZ 0x005deb7e
005deb71  MOV ECX,dword ptr [EBP + -0x14]
005deb74  CALL 0x00661470
005deb79  MOV dword ptr [EBP + -0x2c],EAX
005deb7c  JMP 0x005deb85
005deb7e  MOV dword ptr [EBP + -0x2c],0x0
005deb85  MOV EDX,dword ptr [EBP + -0x2c]
005deb88  MOV dword ptr [EBP + -0x10],EDX
005deb8b  MOV dword ptr [EBP + -0x4],0xffffffff
005deb92  MOV EAX,dword ptr [EBP + -0x10]
005deb95  MOV [0x007947e4],EAX
005deb9a  JMP 0x005debe3
005deb9c  PUSH 0xac
005deba1  CALL 0x00686d82
005deba6  ADD ESP,0x4
005deba9  MOV dword ptr [EBP + -0x1c],EAX
005debac  MOV dword ptr [EBP + -0x4],0x1
005debb3  CMP dword ptr [EBP + -0x1c],0x0
005debb7  JZ 0x005debc6
005debb9  MOV ECX,dword ptr [EBP + -0x1c]
005debbc  CALL 0x0051f260
005debc1  MOV dword ptr [EBP + -0x30],EAX
005debc4  JMP 0x005debcd
005debc6  MOV dword ptr [EBP + -0x30],0x0
005debcd  MOV ECX,dword ptr [EBP + -0x30]
005debd0  MOV dword ptr [EBP + -0x18],ECX
005debd3  MOV dword ptr [EBP + -0x4],0xffffffff
005debda  MOV EDX,dword ptr [EBP + -0x18]
005debdd  MOV dword ptr [0x007947e4],EDX
005debe3  CMP dword ptr [0x007947e4],0x0
005debea  JNZ 0x005debfa
005debec  MOV EAX,dword ptr [EBP + 0x8]
005debef  PUSH EAX
005debf0  MOV ECX,dword ptr [EBP + -0x20]
005debf3  CALL 0x00632890
005debf8  JMP 0x005debff
005debfa  MOV EAX,[0x007947e4]
005debff  MOV ECX,dword ptr [EBP + -0xc]
005dec02  MOV dword ptr FS:[0x0],ECX
005dec09  POP ECX
005dec0a  MOV ESP,EBP
005dec0c  POP EBP
005dec0d  RET 0x4
