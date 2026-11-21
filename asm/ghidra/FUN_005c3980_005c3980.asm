; FUN_005c3980  005c3980
005c3980  PUSH EBP
005c3981  MOV EBP,ESP
005c3983  PUSH -0x1
005c3985  PUSH 0x6a869d
005c398a  MOV EAX,FS:[0x0]
005c3990  PUSH EAX
005c3991  SUB ESP,0x30
005c3994  MOV EAX,[0x00781870]
005c3999  XOR EAX,EBP
005c399b  PUSH EAX
005c399c  LEA EAX,[EBP + -0xc]
005c399f  MOV FS:[0x0],EAX
005c39a5  MOV dword ptr [EBP + -0x38],ECX
005c39a8  MOV dword ptr [EBP + -0x4],0x0
005c39af  MOV EAX,dword ptr [EBP + -0x38]
005c39b2  CMP dword ptr [EAX + 0x30],0x0
005c39b6  JZ 0x005c39e7
005c39b8  MOV ECX,dword ptr [EBP + -0x38]
005c39bb  MOV EDX,dword ptr [ECX + 0x30]
005c39be  MOV dword ptr [EBP + -0x14],EDX
005c39c1  MOV EAX,dword ptr [EBP + -0x14]
005c39c4  MOV dword ptr [EBP + -0x10],EAX
005c39c7  CMP dword ptr [EBP + -0x10],0x0
005c39cb  JZ 0x005c39e0
005c39cd  PUSH 0x1
005c39cf  MOV ECX,dword ptr [EBP + -0x10]
005c39d2  MOV EDX,dword ptr [ECX]
005c39d4  MOV ECX,dword ptr [EBP + -0x10]
005c39d7  MOV EAX,dword ptr [EDX]
005c39d9  CALL EAX
005c39db  MOV dword ptr [EBP + -0x3c],EAX
005c39de  JMP 0x005c39e7
005c39e0  MOV dword ptr [EBP + -0x3c],0x0
005c39e7  MOV ECX,dword ptr [EBP + -0x38]
005c39ea  MOV dword ptr [ECX + 0x30],0x0
005c39f1  MOV dword ptr [EBP + -0x4],0xffffffff
005c39f8  MOV EDX,dword ptr [EBP + -0x38]
005c39fb  ADD EDX,0x20
005c39fe  MOV dword ptr [EBP + -0x34],EDX
005c3a01  MOV ECX,dword ptr [EBP + -0x34]
005c3a04  CALL 0x005be450
005c3a09  MOV ECX,dword ptr [EBP + -0xc]
005c3a0c  MOV dword ptr FS:[0x0],ECX
005c3a13  POP ECX
005c3a14  MOV ESP,EBP
005c3a16  POP EBP
005c3a17  RET
