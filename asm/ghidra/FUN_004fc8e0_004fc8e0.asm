; FUN_004fc8e0  004fc8e0
004fc8e0  PUSH EBP
004fc8e1  MOV EBP,ESP
004fc8e3  PUSH ECX
004fc8e4  MOV dword ptr [EBP + -0x4],ECX
004fc8e7  MOV EAX,dword ptr [EBP + -0x4]
004fc8ea  CMP dword ptr [EAX + 0x84],0x0
004fc8f1  JZ 0x004fc90e
004fc8f3  MOV ECX,dword ptr [EBP + -0x4]
004fc8f6  MOV ECX,dword ptr [ECX + 0x84]
004fc8fc  CALL 0x005f8990
004fc901  MOV EDX,dword ptr [EBP + -0x4]
004fc904  MOV dword ptr [EDX + 0x84],0x0
004fc90e  MOV ESP,EBP
004fc910  POP EBP
004fc911  RET
