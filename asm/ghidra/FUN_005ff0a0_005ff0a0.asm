; FUN_005ff0a0  005ff0a0
005ff0a0  PUSH EBP
005ff0a1  MOV EBP,ESP
005ff0a3  SUB ESP,0x10
005ff0a6  MOV dword ptr [EBP + -0x8],ECX
005ff0a9  MOV EAX,dword ptr [EBP + -0x8]
005ff0ac  CMP dword ptr [EAX + 0x1bc],0x0
005ff0b3  JZ 0x005ff187
005ff0b9  MOV dword ptr [EBP + -0x4],0x0
005ff0c0  JMP 0x005ff0cb
005ff0c2  MOV ECX,dword ptr [EBP + -0x4]
005ff0c5  ADD ECX,0x1
005ff0c8  MOV dword ptr [EBP + -0x4],ECX
005ff0cb  MOV EDX,dword ptr [EBP + -0x8]
005ff0ce  MOV ECX,dword ptr [EDX + 0x1bc]
005ff0d4  CALL 0x005feda0
005ff0d9  CMP dword ptr [EBP + -0x4],EAX
005ff0dc  JGE 0x005ff142
005ff0de  PUSH 0x0
005ff0e0  MOV EAX,dword ptr [EBP + -0x4]
005ff0e3  PUSH EAX
005ff0e4  MOV ECX,dword ptr [EBP + -0x8]
005ff0e7  MOV ECX,dword ptr [ECX + 0x1bc]
005ff0ed  CALL 0x005ff080
005ff0f2  MOV ECX,EAX
005ff0f4  CALL 0x005f5df0
005ff0f9  MOV EDX,dword ptr [EBP + -0x4]
005ff0fc  PUSH EDX
005ff0fd  MOV EAX,dword ptr [EBP + -0x8]
005ff100  MOV ECX,dword ptr [EAX + 0x1bc]
005ff106  CALL 0x005ff080
005ff10b  MOV ECX,EAX
005ff10d  CALL 0x006026d0
005ff112  MOVZX ECX,AL
005ff115  TEST ECX,ECX
005ff117  JZ 0x005ff140
005ff119  MOV EDX,dword ptr [EBP + -0x4]
005ff11c  PUSH EDX
005ff11d  MOV EAX,dword ptr [EBP + -0x8]
005ff120  MOV ECX,dword ptr [EAX + 0x1bc]
005ff126  CALL 0x005ff080
005ff12b  MOV dword ptr [EBP + -0xc],EAX
005ff12e  PUSH 0x0
005ff130  MOV ECX,dword ptr [EBP + -0xc]
005ff133  MOV EDX,dword ptr [ECX]
005ff135  MOV ECX,dword ptr [EBP + -0xc]
005ff138  MOV EAX,dword ptr [EDX + 0xd8]
005ff13e  CALL EAX
005ff140  JMP 0x005ff0c2
005ff142  MOV ECX,dword ptr [EBP + -0x8]
005ff145  MOV EDX,dword ptr [ECX + 0x1bc]
005ff14b  CMP dword ptr [EDX + 0x1b8],-0x1
005ff152  JZ 0x005ff187
005ff154  MOV EAX,dword ptr [EBP + -0x8]
005ff157  MOV ECX,dword ptr [EAX + 0x1bc]
005ff15d  MOV EDX,dword ptr [ECX + 0x1b8]
005ff163  PUSH EDX
005ff164  MOV EAX,dword ptr [EBP + -0x8]
005ff167  MOV ECX,dword ptr [EAX + 0x1bc]
005ff16d  CALL 0x005ff060
005ff172  MOV dword ptr [EBP + -0x10],EAX
005ff175  PUSH 0x3
005ff177  MOV ECX,dword ptr [EBP + -0x10]
005ff17a  MOV EDX,dword ptr [ECX]
005ff17c  MOV ECX,dword ptr [EBP + -0x10]
005ff17f  MOV EAX,dword ptr [EDX + 0xd8]
005ff185  CALL EAX
005ff187  MOV ESP,EBP
005ff189  POP EBP
005ff18a  RET
