; FUN_005d75c0  005d75c0
005d75c0  PUSH EBP
005d75c1  MOV EBP,ESP
005d75c3  PUSH -0x1
005d75c5  PUSH 0x6a90da
005d75ca  MOV EAX,FS:[0x0]
005d75d0  PUSH EAX
005d75d1  SUB ESP,0x1c
005d75d4  MOV EAX,[0x00781870]
005d75d9  XOR EAX,EBP
005d75db  PUSH EAX
005d75dc  LEA EAX,[EBP + -0xc]
005d75df  MOV FS:[0x0],EAX
005d75e5  MOV dword ptr [EBP + -0x20],ECX
005d75e8  MOV EAX,dword ptr [EBP + -0x20]
005d75eb  MOV dword ptr [EAX],0x6d3eb4
005d75f1  MOV dword ptr [EBP + -0x4],0x0
005d75f8  MOV ECX,dword ptr [EBP + -0x20]
005d75fb  MOV EDX,dword ptr [ECX + 0x184]
005d7601  MOV dword ptr [EBP + -0x14],EDX
005d7604  MOV EAX,dword ptr [EBP + -0x14]
005d7607  MOV dword ptr [EBP + -0x10],EAX
005d760a  CMP dword ptr [EBP + -0x10],0x0
005d760e  JZ 0x005d7623
005d7610  PUSH 0x1
005d7612  MOV ECX,dword ptr [EBP + -0x10]
005d7615  MOV EDX,dword ptr [ECX]
005d7617  MOV ECX,dword ptr [EBP + -0x10]
005d761a  MOV EAX,dword ptr [EDX]
005d761c  CALL EAX
005d761e  MOV dword ptr [EBP + -0x24],EAX
005d7621  JMP 0x005d762a
005d7623  MOV dword ptr [EBP + -0x24],0x0
005d762a  MOV ECX,dword ptr [EBP + -0x20]
005d762d  MOV EDX,dword ptr [ECX + 0x188]
005d7633  MOV dword ptr [EBP + -0x1c],EDX
005d7636  MOV EAX,dword ptr [EBP + -0x1c]
005d7639  MOV dword ptr [EBP + -0x18],EAX
005d763c  CMP dword ptr [EBP + -0x18],0x0
005d7640  JZ 0x005d7655
005d7642  PUSH 0x1
005d7644  MOV ECX,dword ptr [EBP + -0x18]
005d7647  MOV EDX,dword ptr [ECX]
005d7649  MOV ECX,dword ptr [EBP + -0x18]
005d764c  MOV EAX,dword ptr [EDX]
005d764e  CALL EAX
005d7650  MOV dword ptr [EBP + -0x28],EAX
005d7653  JMP 0x005d765c
005d7655  MOV dword ptr [EBP + -0x28],0x0
005d765c  MOV dword ptr [EBP + -0x4],0xffffffff
005d7663  MOV ECX,dword ptr [EBP + -0x20]
005d7666  CALL 0x005f5c40
005d766b  MOV ECX,dword ptr [EBP + -0xc]
005d766e  MOV dword ptr FS:[0x0],ECX
005d7675  POP ECX
005d7676  MOV ESP,EBP
005d7678  POP EBP
005d7679  RET
