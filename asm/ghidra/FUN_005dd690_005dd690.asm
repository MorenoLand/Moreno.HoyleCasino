; FUN_005dd690  005dd690
005dd690  PUSH EBP
005dd691  MOV EBP,ESP
005dd693  SUB ESP,0x8
005dd696  MOV dword ptr [EBP + -0x8],ECX
005dd699  MOV dword ptr [EBP + -0x4],0x0
005dd6a0  MOV EAX,dword ptr [EBP + -0x8]
005dd6a3  MOV byte ptr [EAX + 0x94],0x0
005dd6aa  CMP dword ptr [0x007947e4],0x0
005dd6b1  JZ 0x005dd6e6
005dd6b3  MOV ECX,dword ptr [0x007947e4]
005dd6b9  MOV EDX,dword ptr [ECX]
005dd6bb  MOV ECX,dword ptr [0x007947e4]
005dd6c1  MOV EAX,dword ptr [EDX + 0x254]
005dd6c7  CALL EAX
005dd6c9  TEST EAX,EAX
005dd6cb  JZ 0x005dd6e6
005dd6cd  MOV ECX,dword ptr [0x007947e4]
005dd6d3  MOV EDX,dword ptr [ECX]
005dd6d5  MOV ECX,dword ptr [0x007947e4]
005dd6db  MOV EAX,dword ptr [EDX + 0x254]
005dd6e1  CALL EAX
005dd6e3  MOV dword ptr [EBP + -0x4],EAX
005dd6e6  MOV ECX,dword ptr [EBP + -0x4]
005dd6e9  PUSH ECX
005dd6ea  MOV ECX,dword ptr [0x0162ee84]
005dd6f0  CALL 0x005f47e0
005dd6f5  MOV ESP,EBP
005dd6f7  POP EBP
005dd6f8  RET
