; FUN_005da040  005da040
005da040  PUSH EBP
005da041  MOV EBP,ESP
005da043  SUB ESP,0x10
005da046  MOV dword ptr [EBP + -0x8],ECX
005da049  MOV dword ptr [EBP + -0x4],0x0
005da050  JMP 0x005da05b
005da052  MOV EAX,dword ptr [EBP + -0x4]
005da055  ADD EAX,0x1
005da058  MOV dword ptr [EBP + -0x4],EAX
005da05b  MOV ECX,dword ptr [0x007947e0]
005da061  MOV EDX,dword ptr [ECX]
005da063  MOV ECX,dword ptr [0x007947e0]
005da069  MOV EAX,dword ptr [EDX + 0x168]
005da06f  CALL EAX
005da071  CMP dword ptr [EBP + -0x4],EAX
005da074  JGE 0x005da10e
005da07a  MOV ECX,dword ptr [EBP + -0x4]
005da07d  PUSH ECX
005da07e  MOV EDX,dword ptr [0x0162ee84]
005da084  MOV EAX,dword ptr [EDX]
005da086  MOV ECX,dword ptr [0x0162ee84]
005da08c  MOV EDX,dword ptr [EAX + 0x164]
005da092  CALL EDX
005da094  PUSH EAX
005da095  MOV ECX,dword ptr [0x0162ee84]
005da09b  CALL 0x006367d0
005da0a0  MOVZX EAX,AL
005da0a3  TEST EAX,EAX
005da0a5  JZ 0x005da0d9
005da0a7  MOV ECX,dword ptr [EBP + -0x4]
005da0aa  ADD ECX,0x186f9
005da0b0  PUSH ECX
005da0b1  MOV EDX,dword ptr [EBP + 0x8]
005da0b4  PUSH EDX
005da0b5  MOV ECX,dword ptr [EBP + -0x8]
005da0b8  CALL 0x005f2300
005da0bd  MOV ECX,EAX
005da0bf  CALL 0x005ff060
005da0c4  MOV dword ptr [EBP + -0xc],EAX
005da0c7  MOV EAX,dword ptr [EBP + -0xc]
005da0ca  MOV EDX,dword ptr [EAX]
005da0cc  MOV ECX,dword ptr [EBP + -0xc]
005da0cf  MOV EAX,dword ptr [EDX + 0xd0]
005da0d5  CALL EAX
005da0d7  JMP 0x005da109
005da0d9  MOV ECX,dword ptr [EBP + -0x4]
005da0dc  ADD ECX,0x186f9
005da0e2  PUSH ECX
005da0e3  MOV EDX,dword ptr [EBP + 0x8]
005da0e6  PUSH EDX
005da0e7  MOV ECX,dword ptr [EBP + -0x8]
005da0ea  CALL 0x005f2300
005da0ef  MOV ECX,EAX
005da0f1  CALL 0x005ff060
005da0f6  MOV dword ptr [EBP + -0x10],EAX
005da0f9  MOV EAX,dword ptr [EBP + -0x10]
005da0fc  MOV EDX,dword ptr [EAX]
005da0fe  MOV ECX,dword ptr [EBP + -0x10]
005da101  MOV EAX,dword ptr [EDX + 0xcc]
005da107  CALL EAX
005da109  JMP 0x005da052
005da10e  MOV ESP,EBP
005da110  POP EBP
005da111  RET 0x4
