; FUN_005da3d0  005da3d0
005da3d0  PUSH EBP
005da3d1  MOV EBP,ESP
005da3d3  PUSH -0x1
005da3d5  PUSH 0x6a91fb
005da3da  MOV EAX,FS:[0x0]
005da3e0  PUSH EAX
005da3e1  SUB ESP,0x10
005da3e4  MOV EAX,[0x00781870]
005da3e9  XOR EAX,EBP
005da3eb  PUSH EAX
005da3ec  LEA EAX,[EBP + -0xc]
005da3ef  MOV FS:[0x0],EAX
005da3f5  MOV dword ptr [EBP + -0x18],ECX
005da3f8  MOV EAX,dword ptr [EBP + -0x18]
005da3fb  CMP dword ptr [EAX + 0x68],0x0
005da3ff  JNZ 0x005da450
005da401  PUSH 0x34
005da403  CALL 0x00686d82
005da408  ADD ESP,0x4
005da40b  MOV dword ptr [EBP + -0x14],EAX
005da40e  MOV dword ptr [EBP + -0x4],0x0
005da415  CMP dword ptr [EBP + -0x14],0x0
005da419  JZ 0x005da428
005da41b  MOV ECX,dword ptr [EBP + -0x14]
005da41e  CALL 0x005c9a50
005da423  MOV dword ptr [EBP + -0x1c],EAX
005da426  JMP 0x005da42f
005da428  MOV dword ptr [EBP + -0x1c],0x0
005da42f  MOV ECX,dword ptr [EBP + -0x1c]
005da432  MOV dword ptr [EBP + -0x10],ECX
005da435  MOV dword ptr [EBP + -0x4],0xffffffff
005da43c  MOV EDX,dword ptr [EBP + -0x18]
005da43f  MOV EAX,dword ptr [EBP + -0x10]
005da442  MOV dword ptr [EDX + 0x68],EAX
005da445  MOV ECX,dword ptr [EBP + -0x18]
005da448  MOV ECX,dword ptr [ECX + 0x68]
005da44b  CALL 0x005c9c70
005da450  MOV ECX,dword ptr [EBP + -0xc]
005da453  MOV dword ptr FS:[0x0],ECX
005da45a  POP ECX
005da45b  MOV ESP,EBP
005da45d  POP EBP
005da45e  RET
