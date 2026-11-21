; FUN_005ab8a0  005ab8a0
005ab8a0  PUSH EBP
005ab8a1  MOV EBP,ESP
005ab8a3  PUSH -0x1
005ab8a5  PUSH 0x6a7bdc
005ab8aa  MOV EAX,FS:[0x0]
005ab8b0  PUSH EAX
005ab8b1  SUB ESP,0x24
005ab8b4  MOV EAX,[0x00781870]
005ab8b9  XOR EAX,EBP
005ab8bb  PUSH EAX
005ab8bc  LEA EAX,[EBP + -0xc]
005ab8bf  MOV FS:[0x0],EAX
005ab8c5  MOV dword ptr [EBP + -0x24],ECX
005ab8c8  MOV ECX,dword ptr [EBP + -0x24]
005ab8cb  CALL 0x005fc360
005ab8d0  MOV dword ptr [EBP + -0x28],EAX
005ab8d3  CMP dword ptr [EBP + -0x28],0x6
005ab8d7  JA 0x005abc98
005ab8dd  MOV EAX,dword ptr [EBP + -0x28]
005ab8e0  JMP dword ptr [EAX*0x4 + 0x5abcc4]
005abc98  XOR EDX,EDX
005abc9a  JNZ 0x005abcb3
005abc9c  PUSH 0x618
005abca1  PUSH 0x6cf934
005abca6  PUSH 0x6b2f58
005abcab  CALL 0x005e9f20
005abcb0  ADD ESP,0xc
005abcb3  MOV ECX,dword ptr [EBP + -0xc]
005abcb6  MOV dword ptr FS:[0x0],ECX
005abcbd  POP ECX
005abcbe  MOV ESP,EBP
005abcc0  POP EBP
005abcc1  RET
