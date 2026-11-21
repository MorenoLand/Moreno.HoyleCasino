; FUN_005c7ec0  005c7ec0
005c7ec0  PUSH EBP
005c7ec1  MOV EBP,ESP
005c7ec3  SUB ESP,0x28
005c7ec6  MOV dword ptr [EBP + -0x18],ECX
005c7ec9  MOV ECX,dword ptr [EBP + -0x18]
005c7ecc  CALL 0x005c1b10
005c7ed1  MOV EAX,dword ptr [EBP + -0x18]
005c7ed4  ADD EAX,0x58
005c7ed7  MOV dword ptr [EBP + -0xc],EAX
005c7eda  MOV ECX,dword ptr [EBP + -0xc]
005c7edd  CMP dword ptr [ECX + 0x4],0x0
005c7ee1  JNZ 0x005c7eec
005c7ee3  MOV dword ptr [EBP + -0x1c],0x0
005c7eea  JMP 0x005c7efe
005c7eec  MOV EDX,dword ptr [EBP + -0xc]
005c7eef  MOV EAX,dword ptr [EBP + -0xc]
005c7ef2  MOV ECX,dword ptr [EDX + 0x8]
005c7ef5  SUB ECX,dword ptr [EAX + 0x4]
005c7ef8  SAR ECX,0x2
005c7efb  MOV dword ptr [EBP + -0x1c],ECX
005c7efe  MOV EDX,dword ptr [EBP + -0x1c]
005c7f01  MOV dword ptr [EBP + -0x4],EDX
005c7f04  MOV dword ptr [EBP + -0x8],0x0
005c7f0b  JMP 0x005c7f16
005c7f0d  MOV EAX,dword ptr [EBP + -0x8]
005c7f10  ADD EAX,0x1
005c7f13  MOV dword ptr [EBP + -0x8],EAX
005c7f16  MOV ECX,dword ptr [EBP + -0x8]
005c7f19  CMP ECX,dword ptr [EBP + -0x4]
005c7f1c  JGE 0x005c7fc8
005c7f22  MOV EDX,dword ptr [EBP + -0x18]
005c7f25  ADD EDX,0x58
005c7f28  MOV dword ptr [EBP + -0x10],EDX
005c7f2b  MOV EAX,dword ptr [EBP + -0x10]
005c7f2e  CMP dword ptr [EAX + 0x4],0x0
005c7f32  JNZ 0x005c7f3d
005c7f34  MOV dword ptr [EBP + -0x20],0x0
005c7f3b  JMP 0x005c7f4f
005c7f3d  MOV ECX,dword ptr [EBP + -0x10]
005c7f40  MOV EDX,dword ptr [EBP + -0x10]
005c7f43  MOV EAX,dword ptr [ECX + 0x8]
005c7f46  SUB EAX,dword ptr [EDX + 0x4]
005c7f49  SAR EAX,0x2
005c7f4c  MOV dword ptr [EBP + -0x20],EAX
005c7f4f  MOV ECX,dword ptr [EBP + -0x8]
005c7f52  CMP ECX,dword ptr [EBP + -0x20]
005c7f55  JC 0x005c7f5d
005c7f57  CALL dword ptr [0x006b2274]
005c7f5d  MOV EDX,dword ptr [EBP + -0x10]
005c7f60  MOV EAX,dword ptr [EDX + 0x4]
005c7f63  MOV ECX,dword ptr [EBP + -0x8]
005c7f66  CMP dword ptr [EAX + ECX*0x4],0x0
005c7f6a  JZ 0x005c7fc3
005c7f6c  MOV EDX,dword ptr [EBP + -0x18]
005c7f6f  ADD EDX,0x58
005c7f72  MOV dword ptr [EBP + -0x14],EDX
005c7f75  MOV EAX,dword ptr [EBP + -0x14]
005c7f78  CMP dword ptr [EAX + 0x4],0x0
005c7f7c  JNZ 0x005c7f87
005c7f7e  MOV dword ptr [EBP + -0x24],0x0
005c7f85  JMP 0x005c7f99
005c7f87  MOV ECX,dword ptr [EBP + -0x14]
005c7f8a  MOV EDX,dword ptr [EBP + -0x14]
005c7f8d  MOV EAX,dword ptr [ECX + 0x8]
005c7f90  SUB EAX,dword ptr [EDX + 0x4]
005c7f93  SAR EAX,0x2
005c7f96  MOV dword ptr [EBP + -0x24],EAX
005c7f99  MOV ECX,dword ptr [EBP + -0x8]
005c7f9c  CMP ECX,dword ptr [EBP + -0x24]
005c7f9f  JC 0x005c7fa7
005c7fa1  CALL dword ptr [0x006b2274]
005c7fa7  MOV EDX,dword ptr [EBP + -0x14]
005c7faa  MOV EAX,dword ptr [EDX + 0x4]
005c7fad  MOV ECX,dword ptr [EBP + -0x8]
005c7fb0  MOV EDX,dword ptr [EAX + ECX*0x4]
005c7fb3  MOV dword ptr [EBP + -0x28],EDX
005c7fb6  MOV EAX,dword ptr [EBP + -0x28]
005c7fb9  MOV EDX,dword ptr [EAX]
005c7fbb  MOV ECX,dword ptr [EBP + -0x28]
005c7fbe  MOV EAX,dword ptr [EDX + 0x74]
005c7fc1  CALL EAX
005c7fc3  JMP 0x005c7f0d
005c7fc8  PUSH 0x0
005c7fca  MOV ECX,dword ptr [EBP + -0x18]
005c7fcd  CALL 0x005c74b0
005c7fd2  MOV ESP,EBP
005c7fd4  POP EBP
005c7fd5  RET
