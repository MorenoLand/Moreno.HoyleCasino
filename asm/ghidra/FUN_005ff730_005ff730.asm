; FUN_005ff730  005ff730
005ff730  PUSH EBP
005ff731  MOV EBP,ESP
005ff733  SUB ESP,0xc
005ff736  MOV dword ptr [EBP + -0x8],ECX
005ff739  MOV ECX,dword ptr [EBP + -0x8]
005ff73c  CALL 0x006001b0
005ff741  MOV EAX,dword ptr [EBP + -0x8]
005ff744  CMP dword ptr [EAX + 0x210],0x0
005ff74b  JZ 0x005ff796
005ff74d  MOV dword ptr [EBP + -0x4],0x0
005ff754  JMP 0x005ff75f
005ff756  MOV ECX,dword ptr [EBP + -0x4]
005ff759  ADD ECX,0x1
005ff75c  MOV dword ptr [EBP + -0x4],ECX
005ff75f  MOV EDX,dword ptr [EBP + -0x8]
005ff762  MOV ECX,dword ptr [EDX + 0x210]
005ff768  CALL 0x0060c9a0
005ff76d  CMP dword ptr [EBP + -0x4],EAX
005ff770  JGE 0x005ff796
005ff772  MOV EAX,dword ptr [EBP + -0x4]
005ff775  PUSH EAX
005ff776  MOV ECX,dword ptr [EBP + -0x8]
005ff779  MOV ECX,dword ptr [ECX + 0x210]
005ff77f  CALL 0x0060ca40
005ff784  MOV dword ptr [EBP + -0xc],EAX
005ff787  MOV EDX,dword ptr [EBP + -0xc]
005ff78a  MOV EAX,dword ptr [EDX]
005ff78c  MOV ECX,dword ptr [EBP + -0xc]
005ff78f  MOV EDX,dword ptr [EAX + 0x70]
005ff792  CALL EDX
005ff794  JMP 0x005ff756
005ff796  MOV ESP,EBP
005ff798  POP EBP
005ff799  RET
