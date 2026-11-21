; FUN_005e7e90  005e7e90
005e7e90  PUSH EBP
005e7e91  MOV EBP,ESP
005e7e93  SUB ESP,0x24
005e7e96  MOV dword ptr [EBP + -0x20],ECX
005e7e99  CMP dword ptr [EBP + 0xc],0x2
005e7e9d  JZ 0x005e7eb6
005e7e9f  PUSH 0x22b
005e7ea4  PUSH 0x6d5d9c
005e7ea9  PUSH 0x6d5db0
005e7eae  CALL 0x005e9f20
005e7eb3  ADD ESP,0xc
005e7eb6  MOV ECX,dword ptr [EBP + 0x18]
005e7eb9  MOV EDX,dword ptr [EBP + 0x10]
005e7ebc  CMP EDX,dword ptr [ECX]
005e7ebe  JGE 0x005e7ed3
005e7ec0  MOV EAX,dword ptr [EBP + 0x18]
005e7ec3  MOV ECX,dword ptr [EBP + 0x10]
005e7ec6  MOV dword ptr [EAX],ECX
005e7ec8  MOV EDX,dword ptr [EBP + 0x14]
005e7ecb  MOV dword ptr [EAX + 0x4],EDX
005e7ece  JMP 0x005e7f82
005e7ed3  MOV EAX,dword ptr [EBP + 0x10]
005e7ed6  CMP EAX,dword ptr [EBP + 0x1c]
005e7ed9  JGE 0x005e7ee0
005e7edb  JMP 0x005e7f82
005e7ee0  MOV dword ptr [EBP + -0x4],0x0
005e7ee7  PUSH 0x0
005e7ee9  PUSH 0x0
005e7eeb  CALL 0x0064c8a0
005e7ef0  ADD ESP,0x8
005e7ef3  MOV dword ptr [EBP + -0x14],EAX
005e7ef6  MOV dword ptr [EBP + -0x10],EDX
005e7ef9  MOV ECX,dword ptr [EBP + -0x14]
005e7efc  MOV dword ptr [EBP + -0xc],ECX
005e7eff  MOV EDX,dword ptr [EBP + -0x10]
005e7f02  MOV dword ptr [EBP + -0x8],EDX
005e7f05  MOV EAX,dword ptr [EBP + 0x18]
005e7f08  MOV ECX,dword ptr [EBP + 0x10]
005e7f0b  CMP ECX,dword ptr [EAX]
005e7f0d  JGE 0x005e7f1c
005e7f0f  MOV EDX,dword ptr [EBP + 0x18]
005e7f12  MOV EAX,dword ptr [EDX]
005e7f14  SUB EAX,dword ptr [EBP + 0x10]
005e7f17  MOV dword ptr [EBP + -0x24],EAX
005e7f1a  JMP 0x005e7f27
005e7f1c  MOV ECX,dword ptr [EBP + 0x18]
005e7f1f  MOV EDX,dword ptr [EBP + 0x10]
005e7f22  SUB EDX,dword ptr [ECX]
005e7f24  MOV dword ptr [EBP + -0x24],EDX
005e7f27  MOV EAX,dword ptr [EBP + -0x24]
005e7f2a  MOV dword ptr [EBP + -0x4],EAX
005e7f2d  PUSH 0x0
005e7f2f  MOV ECX,dword ptr [EBP + -0x4]
005e7f32  PUSH ECX
005e7f33  CALL 0x0064c8a0
005e7f38  ADD ESP,0x8
005e7f3b  MOV dword ptr [EBP + -0x1c],EAX
005e7f3e  MOV dword ptr [EBP + -0x18],EDX
005e7f41  MOV EDX,dword ptr [EBP + -0x1c]
005e7f44  MOV dword ptr [EBP + -0xc],EDX
005e7f47  MOV EAX,dword ptr [EBP + -0x18]
005e7f4a  MOV dword ptr [EBP + -0x8],EAX
005e7f4d  MOV ECX,dword ptr [EBP + -0x8]
005e7f50  PUSH ECX
005e7f51  MOV EDX,dword ptr [EBP + -0xc]
005e7f54  PUSH EDX
005e7f55  MOV EAX,dword ptr [EBP + 0xc]
005e7f58  PUSH EAX
005e7f59  MOV ECX,dword ptr [EBP + -0x20]
005e7f5c  CALL 0x005e7fc0
005e7f61  MOVZX ECX,AL
005e7f64  TEST ECX,ECX
005e7f66  JNZ 0x005e7f6a
005e7f68  JMP 0x005e7f82
005e7f6a  MOV EDX,dword ptr [EBP + -0x8]
005e7f6d  PUSH EDX
005e7f6e  MOV EAX,dword ptr [EBP + -0xc]
005e7f71  PUSH EAX
005e7f72  MOV ECX,dword ptr [EBP + 0xc]
005e7f75  PUSH ECX
005e7f76  MOV EDX,dword ptr [EBP + 0x8]
005e7f79  PUSH EDX
005e7f7a  MOV ECX,dword ptr [EBP + -0x20]
005e7f7d  CALL 0x005e8120
005e7f82  MOV ESP,EBP
005e7f84  POP EBP
005e7f85  RET 0x1c
