; FUN_005c6770  005c6770
005c6770  PUSH EBP
005c6771  MOV EBP,ESP
005c6773  SUB ESP,0x60
005c6776  MOV dword ptr [EBP + -0x5c],ECX
005c6779  MOV EAX,dword ptr [EBP + -0x5c]
005c677c  MOV dword ptr [EAX + 0x4],0x0
005c6783  MOV ECX,dword ptr [EBP + -0x5c]
005c6786  MOV dword ptr [ECX + 0x8],0x0
005c678d  MOV EDX,dword ptr [EBP + -0x5c]
005c6790  MOV dword ptr [EDX + 0xc],0x0
005c6797  CMP dword ptr [EBP + 0x8],0x0
005c679b  JNZ 0x005c67a3
005c679d  XOR AL,AL
005c679f  JMP 0x005c6802
005c67a3  MOV dword ptr [EBP + -0x4],0x3fffffff
005c67aa  CMP dword ptr [EBP + -0x4],0x0
005c67ae  JBE 0x005c67b8
005c67b0  MOV EAX,dword ptr [EBP + -0x4]
005c67b3  MOV dword ptr [EBP + -0x60],EAX
005c67b6  JMP 0x005c67bf
005c67b8  MOV dword ptr [EBP + -0x60],0x1
005c67bf  MOV ECX,dword ptr [EBP + -0x60]
005c67c2  CMP ECX,dword ptr [EBP + 0x8]
005c67c5  JNC 0x005c67ce
005c67c7  CALL 0x005c6950
005c67cc  JMP 0x005c6800
005c67ce  PUSH 0x0
005c67d0  MOV EDX,dword ptr [EBP + 0x8]
005c67d3  PUSH EDX
005c67d4  CALL 0x005c6310
005c67d9  ADD ESP,0x8
005c67dc  MOV ECX,dword ptr [EBP + -0x5c]
005c67df  MOV dword ptr [ECX + 0x4],EAX
005c67e2  MOV EDX,dword ptr [EBP + -0x5c]
005c67e5  MOV EAX,dword ptr [EBP + -0x5c]
005c67e8  MOV ECX,dword ptr [EAX + 0x4]
005c67eb  MOV dword ptr [EDX + 0x8],ECX
005c67ee  MOV EDX,dword ptr [EBP + -0x5c]
005c67f1  MOV EAX,dword ptr [EDX + 0x4]
005c67f4  MOV ECX,dword ptr [EBP + 0x8]
005c67f7  LEA EDX,[EAX + ECX*0x4]
005c67fa  MOV EAX,dword ptr [EBP + -0x5c]
005c67fd  MOV dword ptr [EAX + 0xc],EDX
005c6800  MOV AL,0x1
005c6802  MOV ESP,EBP
005c6804  POP EBP
005c6805  RET 0x4
