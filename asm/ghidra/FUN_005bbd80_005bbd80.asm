; FUN_005bbd80  005bbd80
005bbd80  PUSH EBP
005bbd81  MOV EBP,ESP
005bbd83  SUB ESP,0x60
005bbd86  MOV dword ptr [EBP + -0x5c],ECX
005bbd89  MOV EAX,dword ptr [EBP + -0x5c]
005bbd8c  MOV dword ptr [EAX + 0x4],0x0
005bbd93  MOV ECX,dword ptr [EBP + -0x5c]
005bbd96  MOV dword ptr [ECX + 0x8],0x0
005bbd9d  MOV EDX,dword ptr [EBP + -0x5c]
005bbda0  MOV dword ptr [EDX + 0xc],0x0
005bbda7  CMP dword ptr [EBP + 0x8],0x0
005bbdab  JNZ 0x005bbdb3
005bbdad  XOR AL,AL
005bbdaf  JMP 0x005bbe12
005bbdb3  MOV dword ptr [EBP + -0x4],0x3fffffff
005bbdba  CMP dword ptr [EBP + -0x4],0x0
005bbdbe  JBE 0x005bbdc8
005bbdc0  MOV EAX,dword ptr [EBP + -0x4]
005bbdc3  MOV dword ptr [EBP + -0x60],EAX
005bbdc6  JMP 0x005bbdcf
005bbdc8  MOV dword ptr [EBP + -0x60],0x1
005bbdcf  MOV ECX,dword ptr [EBP + -0x60]
005bbdd2  CMP ECX,dword ptr [EBP + 0x8]
005bbdd5  JNC 0x005bbdde
005bbdd7  CALL 0x005bb8f0
005bbddc  JMP 0x005bbe10
005bbdde  PUSH 0x0
005bbde0  MOV EDX,dword ptr [EBP + 0x8]
005bbde3  PUSH EDX
005bbde4  CALL 0x005c6310
005bbde9  ADD ESP,0x8
005bbdec  MOV ECX,dword ptr [EBP + -0x5c]
005bbdef  MOV dword ptr [ECX + 0x4],EAX
005bbdf2  MOV EDX,dword ptr [EBP + -0x5c]
005bbdf5  MOV EAX,dword ptr [EBP + -0x5c]
005bbdf8  MOV ECX,dword ptr [EAX + 0x4]
005bbdfb  MOV dword ptr [EDX + 0x8],ECX
005bbdfe  MOV EDX,dword ptr [EBP + -0x5c]
005bbe01  MOV EAX,dword ptr [EDX + 0x4]
005bbe04  MOV ECX,dword ptr [EBP + 0x8]
005bbe07  LEA EDX,[EAX + ECX*0x4]
005bbe0a  MOV EAX,dword ptr [EBP + -0x5c]
005bbe0d  MOV dword ptr [EAX + 0xc],EDX
005bbe10  MOV AL,0x1
005bbe12  MOV ESP,EBP
005bbe14  POP EBP
005bbe15  RET 0x4
