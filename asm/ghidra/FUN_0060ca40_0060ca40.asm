; FUN_0060ca40  0060ca40
0060ca40  PUSH EBP
0060ca41  MOV EBP,ESP
0060ca43  PUSH ECX
0060ca44  MOV dword ptr [EBP + -0x4],ECX
0060ca47  CMP dword ptr [EBP + 0x8],0x0
0060ca4b  JL 0x0060ca58
0060ca4d  MOV EAX,dword ptr [EBP + -0x4]
0060ca50  MOV ECX,dword ptr [EBP + 0x8]
0060ca53  CMP ECX,dword ptr [EAX + 0x4]
0060ca56  JL 0x0060ca5e
0060ca58  XOR EAX,EAX
0060ca5a  JMP 0x0060ca6a
0060ca5e  MOV EDX,dword ptr [EBP + -0x4]
0060ca61  MOV EAX,dword ptr [EDX + 0xc]
0060ca64  MOV ECX,dword ptr [EBP + 0x8]
0060ca67  MOV EAX,dword ptr [EAX + ECX*0x4]
0060ca6a  MOV ESP,EBP
0060ca6c  POP EBP
0060ca6d  RET 0x4
