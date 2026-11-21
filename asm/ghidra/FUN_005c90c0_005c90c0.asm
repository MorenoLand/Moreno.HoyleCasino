; FUN_005c90c0  005c90c0
005c90c0  PUSH EBP
005c90c1  MOV EBP,ESP
005c90c3  SUB ESP,0x8
005c90c6  MOV dword ptr [EBP + -0x8],ECX
005c90c9  MOV EAX,dword ptr [EBP + -0x8]
005c90cc  MOV byte ptr [EAX + 0x14],0x1
005c90d0  MOV dword ptr [EBP + -0x4],0x0
005c90d7  JMP 0x005c90e2
005c90d9  MOV ECX,dword ptr [EBP + -0x4]
005c90dc  ADD ECX,0x1
005c90df  MOV dword ptr [EBP + -0x4],ECX
005c90e2  MOV EDX,dword ptr [EBP + -0x8]
005c90e5  MOV EAX,dword ptr [EDX + 0x10]
005c90e8  MOV ECX,dword ptr [EBP + -0x4]
005c90eb  CMP ECX,dword ptr [EAX]
005c90ed  JGE 0x005c9126
005c90ef  MOV EDX,dword ptr [EBP + -0x4]
005c90f2  MOV EAX,dword ptr [EBP + -0x8]
005c90f5  CMP dword ptr [EAX + EDX*0x4 + 0x18],0x0
005c90fa  JL 0x005c90fe
005c90fc  JMP 0x005c90d9
005c90fe  MOV ECX,dword ptr [EBP + -0x8]
005c9101  MOV EDX,dword ptr [ECX + 0x10]
005c9104  MOV EAX,dword ptr [EBP + -0x4]
005c9107  IMUL EAX,EAX,0x7c
005c910a  MOV ECX,dword ptr [EDX + EAX*0x1 + 0x20]
005c910e  SUB ECX,0x1
005c9111  PUSH ECX
005c9112  CALL 0x0062fbf0
005c9117  ADD ESP,0x4
005c911a  MOV EDX,dword ptr [EBP + -0x4]
005c911d  MOV ECX,dword ptr [EBP + -0x8]
005c9120  MOV dword ptr [ECX + EDX*0x4 + 0x18],EAX
005c9124  JMP 0x005c90d9
005c9126  MOV ECX,dword ptr [EBP + -0x8]
005c9129  CALL 0x005c9140
005c912e  MOV ESP,EBP
005c9130  POP EBP
005c9131  RET
