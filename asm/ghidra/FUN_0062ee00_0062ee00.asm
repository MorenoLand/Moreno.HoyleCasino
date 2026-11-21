; FUN_0062ee00  0062ee00
0062ee00  PUSH EBP
0062ee01  MOV EBP,ESP
0062ee03  SUB ESP,0x28
0062ee06  MOV dword ptr [EBP + -0x28],ECX
0062ee09  MOV EAX,dword ptr [EBP + -0x28]
0062ee0c  MOV byte ptr [EAX + 0x3e],0x0
0062ee10  MOV ECX,dword ptr [EBP + 0x8]
0062ee13  MOV dword ptr [EBP + -0x8],ECX
0062ee16  MOV EDX,dword ptr [EBP + 0xc]
0062ee19  MOV dword ptr [EBP + -0x4],EDX
0062ee1c  MOV EAX,dword ptr [EBP + -0x4]
0062ee1f  PUSH EAX
0062ee20  MOV ECX,dword ptr [EBP + -0x8]
0062ee23  PUSH ECX
0062ee24  MOV ECX,dword ptr [EBP + -0x28]
0062ee27  ADD ECX,0x4
0062ee2a  CALL 0x0062fa00
0062ee2f  MOV ESP,EBP
0062ee31  POP EBP
0062ee32  RET 0x8
