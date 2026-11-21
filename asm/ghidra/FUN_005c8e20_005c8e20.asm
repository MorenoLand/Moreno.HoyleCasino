; FUN_005c8e20  005c8e20
005c8e20  PUSH EBP
005c8e21  MOV EBP,ESP
005c8e23  SUB ESP,0x10
005c8e26  MOV dword ptr [EBP + -0x10],ECX
005c8e29  MOV EAX,dword ptr [EBP + -0x10]
005c8e2c  MOV ECX,dword ptr [EAX + 0x8]
005c8e2f  MOV dword ptr [EBP + -0x8],ECX
005c8e32  MOV EDX,dword ptr [EBP + -0x10]
005c8e35  MOV EAX,dword ptr [EDX + 0xc]
005c8e38  MOV dword ptr [EBP + -0xc],EAX
005c8e3b  MOV EAX,dword ptr [EBP + -0x8]
005c8e3e  CDQ
005c8e3f  IDIV dword ptr [EBP + -0xc]
005c8e42  MOV dword ptr [EBP + -0x4],EAX
005c8e45  MOV ECX,dword ptr [EBP + -0x10]
005c8e48  CALL 0x005c8f70
005c8e4d  MOVZX ECX,byte ptr [EBP + 0xc]
005c8e51  TEST ECX,ECX
005c8e53  JZ 0x005c8e85
005c8e55  MOV EDX,dword ptr [EBP + -0x10]
005c8e58  MOV EAX,dword ptr [EDX + 0x10]
005c8e5b  MOV ECX,dword ptr [EBP + 0x8]
005c8e5e  CMP ECX,dword ptr [EAX + 0x8]
005c8e61  JLE 0x005c8e6f
005c8e63  MOV EDX,dword ptr [EBP + -0x10]
005c8e66  MOV EAX,dword ptr [EDX + 0x10]
005c8e69  MOV ECX,dword ptr [EAX + 0x8]
005c8e6c  MOV dword ptr [EBP + 0x8],ECX
005c8e6f  MOV EDX,dword ptr [EBP + -0x10]
005c8e72  MOV EAX,dword ptr [EDX + 0xc]
005c8e75  CMP EAX,dword ptr [EBP + 0x8]
005c8e78  JGE 0x005c8e83
005c8e7a  MOV ECX,dword ptr [EBP + -0x10]
005c8e7d  MOV EDX,dword ptr [EBP + 0x8]
005c8e80  MOV dword ptr [ECX + 0xc],EDX
005c8e83  JMP 0x005c8ebc
005c8e85  MOV EAX,dword ptr [EBP + -0x10]
005c8e88  MOV ECX,dword ptr [EAX + 0x10]
005c8e8b  MOV EDX,dword ptr [ECX + 0x8]
005c8e8e  ADD EDX,0x1
005c8e91  CMP dword ptr [EBP + 0x8],EDX
005c8e94  JLE 0x005c8ea5
005c8e96  MOV EAX,dword ptr [EBP + -0x10]
005c8e99  MOV ECX,dword ptr [EAX + 0x10]
005c8e9c  MOV EDX,dword ptr [ECX + 0x8]
005c8e9f  ADD EDX,0x1
005c8ea2  MOV dword ptr [EBP + 0x8],EDX
005c8ea5  MOV EAX,dword ptr [EBP + -0x10]
005c8ea8  MOV ECX,dword ptr [EAX + 0xc]
005c8eab  CMP ECX,dword ptr [EBP + 0x8]
005c8eae  JL 0x005c8ebc
005c8eb0  MOV EDX,dword ptr [EBP + 0x8]
005c8eb3  SUB EDX,0x1
005c8eb6  MOV EAX,dword ptr [EBP + -0x10]
005c8eb9  MOV dword ptr [EAX + 0xc],EDX
005c8ebc  MOV ECX,dword ptr [EBP + -0x4]
005c8ebf  PUSH ECX
005c8ec0  MOV ECX,dword ptr [EBP + -0x10]
005c8ec3  CALL 0x005c8ed0
005c8ec8  MOV ESP,EBP
005c8eca  POP EBP
005c8ecb  RET 0x8
