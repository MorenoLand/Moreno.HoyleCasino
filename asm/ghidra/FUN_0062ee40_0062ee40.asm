; FUN_0062ee40  0062ee40
0062ee40  PUSH EBP
0062ee41  MOV EBP,ESP
0062ee43  SUB ESP,0xc
0062ee46  MOV dword ptr [EBP + -0xc],ECX
0062ee49  MOV EAX,dword ptr [EBP + -0xc]
0062ee4c  MOV ECX,dword ptr [EAX + 0xc]
0062ee4f  MOV dword ptr [EBP + -0x4],ECX
0062ee52  MOV EDX,dword ptr [EBP + -0xc]
0062ee55  MOV EAX,dword ptr [EDX + 0x14]
0062ee58  MOV dword ptr [EBP + -0x8],EAX
0062ee5b  PUSH 0x62f8e0
0062ee60  PUSH 0x8
0062ee62  MOV ECX,dword ptr [EBP + -0x4]
0062ee65  PUSH ECX
0062ee66  MOV EDX,dword ptr [EBP + -0x8]
0062ee69  PUSH EDX
0062ee6a  CALL dword ptr [0x006b2248]
0062ee70  ADD ESP,0x10
0062ee73  MOV EAX,dword ptr [EBP + -0xc]
0062ee76  MOV byte ptr [EAX + 0x3e],0x1
0062ee7a  MOV ESP,EBP
0062ee7c  POP EBP
0062ee7d  RET
