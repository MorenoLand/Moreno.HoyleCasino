; FUN_005ea4c0  005ea4c0
005ea4c0  PUSH EBP
005ea4c1  MOV EBP,ESP
005ea4c3  SUB ESP,0x14
005ea4c6  PUSH 0x0
005ea4c8  PUSH 0x75ee04
005ea4cd  PUSH 0x75edec
005ea4d2  PUSH 0x0
005ea4d4  MOV EAX,[0x007960d8]
005ea4d9  MOV ECX,dword ptr [EAX + 0x10]
005ea4dc  PUSH ECX
005ea4dd  CALL 0x00686ede
005ea4e2  ADD ESP,0x14
005ea4e5  MOV dword ptr [EBP + -0xc],EAX
005ea4e8  CALL 0x005ea470
005ea4ed  MOV dword ptr [EBP + -0x14],EAX
005ea4f0  MOV dword ptr [EBP + -0x10],EDX
005ea4f3  MOV EDX,dword ptr [EBP + -0x14]
005ea4f6  MOV dword ptr [EBP + -0x8],EDX
005ea4f9  MOV EAX,dword ptr [EBP + -0x10]
005ea4fc  MOV dword ptr [EBP + -0x4],EAX
005ea4ff  LEA ECX,[EBP + -0x8]
005ea502  PUSH ECX
005ea503  CALL 0x005ea400
005ea508  ADD ESP,0x4
005ea50b  MOV EDX,dword ptr [EBP + -0xc]
005ea50e  MOV EAX,dword ptr [EBP + -0x8]
005ea511  SUB EAX,dword ptr [EDX + 0x28]
005ea514  MOV dword ptr [EBP + -0x8],EAX
005ea517  MOV ECX,dword ptr [EBP + -0xc]
005ea51a  MOV EDX,dword ptr [EBP + -0x4]
005ea51d  SUB EDX,dword ptr [ECX + 0x2c]
005ea520  MOV dword ptr [EBP + -0x4],EDX
005ea523  MOV EAX,dword ptr [EBP + -0x4]
005ea526  PUSH EAX
005ea527  MOV ECX,dword ptr [EBP + -0x8]
005ea52a  PUSH ECX
005ea52b  CALL 0x00630400
005ea530  ADD ESP,0x8
005ea533  MOV ESP,EBP
005ea535  POP EBP
005ea536  RET
