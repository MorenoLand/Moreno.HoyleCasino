; FUN_005db8c0  005db8c0
005db8c0  PUSH EBP
005db8c1  MOV EBP,ESP
005db8c3  PUSH -0x1
005db8c5  PUSH 0x6a92e9
005db8ca  MOV EAX,FS:[0x0]
005db8d0  PUSH EAX
005db8d1  SUB ESP,0x14
005db8d4  MOV EAX,[0x00781870]
005db8d9  XOR EAX,EBP
005db8db  PUSH EAX
005db8dc  LEA EAX,[EBP + -0xc]
005db8df  MOV FS:[0x0],EAX
005db8e5  MOV dword ptr [EBP + -0x1c],ECX
005db8e8  CMP dword ptr [0x007947b0],0x0
005db8ef  JNZ 0x005db960
005db8f1  PUSH 0x1bc
005db8f6  CALL 0x00686d82
005db8fb  ADD ESP,0x4
005db8fe  MOV dword ptr [EBP + -0x14],EAX
005db901  MOV dword ptr [EBP + -0x4],0x0
005db908  CMP dword ptr [EBP + -0x14],0x0
005db90c  JZ 0x005db91b
005db90e  MOV ECX,dword ptr [EBP + -0x14]
005db911  CALL 0x005cdbd0
005db916  MOV dword ptr [EBP + -0x20],EAX
005db919  JMP 0x005db922
005db91b  MOV dword ptr [EBP + -0x20],0x0
005db922  MOV EAX,dword ptr [EBP + -0x20]
005db925  MOV dword ptr [EBP + -0x10],EAX
005db928  MOV dword ptr [EBP + -0x4],0xffffffff
005db92f  MOV ECX,dword ptr [EBP + -0x10]
005db932  MOV dword ptr [0x007947b0],ECX
005db938  MOV EDX,dword ptr [0x007947b0]
005db93e  MOV EAX,dword ptr [EDX]
005db940  MOV ECX,dword ptr [0x007947b0]
005db946  MOV EDX,dword ptr [EAX + 0x3c]
005db949  CALL EDX
005db94b  MOV AX,word ptr [EBP + 0xc]
005db94f  PUSH EAX
005db950  MOV CX,word ptr [EBP + 0x8]
005db954  PUSH ECX
005db955  MOV ECX,dword ptr [0x007947b0]
005db95b  CALL 0x005f7340
005db960  MOV ECX,dword ptr [0x007947b0]
005db966  CALL 0x005f85d0
005db96b  MOV EDX,dword ptr [0x0162ee84]
005db971  MOV AL,byte ptr [EDX + 0x25]
005db974  MOV byte ptr [EBP + -0x15],AL
005db977  MOVZX ECX,byte ptr [EBP + -0x15]
005db97b  TEST ECX,ECX
005db97d  JZ 0x005db994
005db97f  PUSH 0x0
005db981  MOV EDX,dword ptr [0x007947b0]
005db987  MOV EAX,dword ptr [EDX]
005db989  MOV ECX,dword ptr [0x007947b0]
005db98f  MOV EDX,dword ptr [EAX + 0x18]
005db992  CALL EDX
005db994  MOV ECX,dword ptr [EBP + -0xc]
005db997  MOV dword ptr FS:[0x0],ECX
005db99e  POP ECX
005db99f  MOV ESP,EBP
005db9a1  POP EBP
005db9a2  RET 0x8
