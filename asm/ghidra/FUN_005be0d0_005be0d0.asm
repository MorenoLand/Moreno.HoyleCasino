; FUN_005be0d0  005be0d0
005be0d0  PUSH EBP
005be0d1  MOV EBP,ESP
005be0d3  SUB ESP,0x28
005be0d6  MOV dword ptr [EBP + -0x18],ECX
005be0d9  MOV ECX,dword ptr [EBP + -0x18]
005be0dc  CALL 0x005c1b10
005be0e1  MOV EAX,dword ptr [EBP + -0x18]
005be0e4  ADD EAX,0x58
005be0e7  MOV dword ptr [EBP + -0xc],EAX
005be0ea  MOV ECX,dword ptr [EBP + -0xc]
005be0ed  CMP dword ptr [ECX + 0x4],0x0
005be0f1  JNZ 0x005be0fc
005be0f3  MOV dword ptr [EBP + -0x1c],0x0
005be0fa  JMP 0x005be10e
005be0fc  MOV EDX,dword ptr [EBP + -0xc]
005be0ff  MOV EAX,dword ptr [EBP + -0xc]
005be102  MOV ECX,dword ptr [EDX + 0x8]
005be105  SUB ECX,dword ptr [EAX + 0x4]
005be108  SAR ECX,0x2
005be10b  MOV dword ptr [EBP + -0x1c],ECX
005be10e  MOV EDX,dword ptr [EBP + -0x1c]
005be111  MOV dword ptr [EBP + -0x4],EDX
005be114  MOV dword ptr [EBP + -0x8],0x0
005be11b  JMP 0x005be126
005be11d  MOV EAX,dword ptr [EBP + -0x8]
005be120  ADD EAX,0x1
005be123  MOV dword ptr [EBP + -0x8],EAX
005be126  MOV ECX,dword ptr [EBP + -0x8]
005be129  CMP ECX,dword ptr [EBP + -0x4]
005be12c  JGE 0x005be1d8
005be132  MOV EDX,dword ptr [EBP + -0x18]
005be135  ADD EDX,0x58
005be138  MOV dword ptr [EBP + -0x10],EDX
005be13b  MOV EAX,dword ptr [EBP + -0x10]
005be13e  CMP dword ptr [EAX + 0x4],0x0
005be142  JNZ 0x005be14d
005be144  MOV dword ptr [EBP + -0x20],0x0
005be14b  JMP 0x005be15f
005be14d  MOV ECX,dword ptr [EBP + -0x10]
005be150  MOV EDX,dword ptr [EBP + -0x10]
005be153  MOV EAX,dword ptr [ECX + 0x8]
005be156  SUB EAX,dword ptr [EDX + 0x4]
005be159  SAR EAX,0x2
005be15c  MOV dword ptr [EBP + -0x20],EAX
005be15f  MOV ECX,dword ptr [EBP + -0x8]
005be162  CMP ECX,dword ptr [EBP + -0x20]
005be165  JC 0x005be16d
005be167  CALL dword ptr [0x006b2274]
005be16d  MOV EDX,dword ptr [EBP + -0x10]
005be170  MOV EAX,dword ptr [EDX + 0x4]
005be173  MOV ECX,dword ptr [EBP + -0x8]
005be176  CMP dword ptr [EAX + ECX*0x4],0x0
005be17a  JZ 0x005be1d3
005be17c  MOV EDX,dword ptr [EBP + -0x18]
005be17f  ADD EDX,0x58
005be182  MOV dword ptr [EBP + -0x14],EDX
005be185  MOV EAX,dword ptr [EBP + -0x14]
005be188  CMP dword ptr [EAX + 0x4],0x0
005be18c  JNZ 0x005be197
005be18e  MOV dword ptr [EBP + -0x24],0x0
005be195  JMP 0x005be1a9
005be197  MOV ECX,dword ptr [EBP + -0x14]
005be19a  MOV EDX,dword ptr [EBP + -0x14]
005be19d  MOV EAX,dword ptr [ECX + 0x8]
005be1a0  SUB EAX,dword ptr [EDX + 0x4]
005be1a3  SAR EAX,0x2
005be1a6  MOV dword ptr [EBP + -0x24],EAX
005be1a9  MOV ECX,dword ptr [EBP + -0x8]
005be1ac  CMP ECX,dword ptr [EBP + -0x24]
005be1af  JC 0x005be1b7
005be1b1  CALL dword ptr [0x006b2274]
005be1b7  MOV EDX,dword ptr [EBP + -0x14]
005be1ba  MOV EAX,dword ptr [EDX + 0x4]
005be1bd  MOV ECX,dword ptr [EBP + -0x8]
005be1c0  MOV EDX,dword ptr [EAX + ECX*0x4]
005be1c3  MOV dword ptr [EBP + -0x28],EDX
005be1c6  MOV EAX,dword ptr [EBP + -0x28]
005be1c9  MOV EDX,dword ptr [EAX]
005be1cb  MOV ECX,dword ptr [EBP + -0x28]
005be1ce  MOV EAX,dword ptr [EDX + 0x74]
005be1d1  CALL EAX
005be1d3  JMP 0x005be11d
005be1d8  PUSH 0x0
005be1da  MOV ECX,dword ptr [EBP + -0x18]
005be1dd  CALL 0x005bceb0
005be1e2  MOV ESP,EBP
005be1e4  POP EBP
005be1e5  RET
