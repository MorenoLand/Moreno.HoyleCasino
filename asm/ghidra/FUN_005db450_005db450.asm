; FUN_005db450  005db450
005db450  PUSH EBP
005db451  MOV EBP,ESP
005db453  PUSH -0x1
005db455  PUSH 0x6a9247
005db45a  MOV EAX,FS:[0x0]
005db460  PUSH EAX
005db461  SUB ESP,0x10
005db464  MOV EAX,[0x00781870]
005db469  XOR EAX,EBP
005db46b  PUSH EAX
005db46c  LEA EAX,[EBP + -0xc]
005db46f  MOV FS:[0x0],EAX
005db475  MOV dword ptr [EBP + -0x18],ECX
005db478  CMP dword ptr [0x0163068c],0x0
005db47f  JNZ 0x005db4ea
005db481  PUSH 0x1ec
005db486  CALL 0x00686d82
005db48b  ADD ESP,0x4
005db48e  MOV dword ptr [EBP + -0x14],EAX
005db491  MOV dword ptr [EBP + -0x4],0x0
005db498  CMP dword ptr [EBP + -0x14],0x0
005db49c  JZ 0x005db4ab
005db49e  MOV ECX,dword ptr [EBP + -0x14]
005db4a1  CALL 0x005e32d0
005db4a6  MOV dword ptr [EBP + -0x1c],EAX
005db4a9  JMP 0x005db4b2
005db4ab  MOV dword ptr [EBP + -0x1c],0x0
005db4b2  MOV EAX,dword ptr [EBP + -0x1c]
005db4b5  MOV dword ptr [EBP + -0x10],EAX
005db4b8  MOV dword ptr [EBP + -0x4],0xffffffff
005db4bf  MOV ECX,dword ptr [EBP + -0x10]
005db4c2  MOV dword ptr [0x0163068c],ECX
005db4c8  MOV EDX,dword ptr [0x0163068c]
005db4ce  MOV EAX,dword ptr [EDX]
005db4d0  MOV ECX,dword ptr [0x0163068c]
005db4d6  MOV EDX,dword ptr [EAX + 0x3c]
005db4d9  CALL EDX
005db4db  PUSH 0x0
005db4dd  PUSH 0x0
005db4df  MOV ECX,dword ptr [0x0163068c]
005db4e5  CALL 0x005f7340
005db4ea  MOV EAX,dword ptr [EBP + 0x8]
005db4ed  PUSH EAX
005db4ee  MOV ECX,dword ptr [EBP + -0x18]
005db4f1  CALL 0x0064ee70
005db4f6  MOV ECX,dword ptr [EBP + -0xc]
005db4f9  MOV dword ptr FS:[0x0],ECX
005db500  POP ECX
005db501  MOV ESP,EBP
005db503  POP EBP
005db504  RET 0x4
