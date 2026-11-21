; FUN_005e9c40  005e9c40
005e9c40  PUSH EBP
005e9c41  MOV EBP,ESP
005e9c43  SUB ESP,0x8
005e9c46  MOV dword ptr [EBP + -0x4],ECX
005e9c49  MOV EAX,dword ptr [EBP + 0xc]
005e9c4c  MOV dword ptr [EBP + -0x8],EAX
005e9c4f  MOV ECX,dword ptr [EBP + -0x8]
005e9c52  SUB ECX,0x186a1
005e9c58  MOV dword ptr [EBP + -0x8],ECX
005e9c5b  CMP dword ptr [EBP + -0x8],0x36
005e9c5f  JA 0x005e9d86
005e9c65  MOV EDX,dword ptr [EBP + -0x8]
005e9c68  MOVZX EAX,byte ptr [EDX + 0x5e9db0]
005e9c6f  JMP dword ptr [EAX*0x4 + 0x5e9d9c]
005e9d86  MOV ECX,dword ptr [EBP + 0xc]
005e9d89  PUSH ECX
005e9d8a  MOV EDX,dword ptr [EBP + 0x8]
005e9d8d  PUSH EDX
005e9d8e  MOV ECX,dword ptr [EBP + -0x4]
005e9d91  CALL 0x005d8670
005e9d96  MOV ESP,EBP
005e9d98  POP EBP
005e9d99  RET 0x8
