; FUN_005d3f30  005d3f30
005d3f30  PUSH EBP
005d3f31  MOV EBP,ESP
005d3f33  PUSH -0x1
005d3f35  PUSH 0x6a8ef0
005d3f3a  MOV EAX,FS:[0x0]
005d3f40  PUSH EAX
005d3f41  SUB ESP,0xb4
005d3f47  MOV EAX,[0x00781870]
005d3f4c  XOR EAX,EBP
005d3f4e  MOV dword ptr [EBP + -0x20],EAX
005d3f51  PUSH EAX
005d3f52  LEA EAX,[EBP + -0xc]
005d3f55  MOV FS:[0x0],EAX
005d3f5b  MOV dword ptr [EBP + 0xffffff44],ECX
005d3f61  MOV dword ptr [EBP + 0xffffff50],0xffffffee
005d3f6b  MOV EAX,dword ptr [EBP + 0x8]
005d3f6e  PUSH EAX
005d3f6f  LEA ECX,[EBP + 0xffffff5c]
005d3f75  PUSH ECX
005d3f76  MOV ECX,dword ptr [EBP + 0xffffff44]
005d3f7c  CALL 0x005d4280
005d3f81  MOV EDX,dword ptr [EBP + 0xffffff44]
005d3f87  CMP dword ptr [EDX + 0x88],0x0
005d3f8e  JZ 0x005d3fe5
005d3f90  MOV EAX,dword ptr [EBP + 0xffffff44]
005d3f96  MOV ECX,dword ptr [EAX + 0x88]
005d3f9c  CALL 0x005f54a0
005d3fa1  MOVZX ECX,AL
005d3fa4  TEST ECX,ECX
005d3fa6  JZ 0x005d3fe5
005d3fa8  LEA EDX,[EBP + 0xffffff5c]
005d3fae  PUSH EDX
005d3faf  MOV EAX,dword ptr [EBP + 0xffffff44]
005d3fb5  MOV ECX,dword ptr [EAX + 0x88]
005d3fbb  MOV EDX,dword ptr [EBP + 0xffffff44]
005d3fc1  MOV EAX,dword ptr [EDX + 0x88]
005d3fc7  MOV EDX,dword ptr [ECX]
005d3fc9  MOV ECX,EAX
005d3fcb  MOV EAX,dword ptr [EDX + 0xb8]
005d3fd1  CALL EAX
005d3fd3  PUSH EAX
005d3fd4  CALL 0x00686ec0
005d3fd9  ADD ESP,0x8
005d3fdc  TEST EAX,EAX
005d3fde  JNZ 0x005d3fe5
005d3fe0  JMP 0x005d41dd
005d3fe5  MOV ECX,dword ptr [EBP + 0xffffff44]
005d3feb  CMP dword ptr [ECX + 0x88],0x0
005d3ff2  JNZ 0x005d4059
005d3ff4  PUSH 0x1d4
005d3ff9  CALL 0x00686d82
005d3ffe  ADD ESP,0x4
005d4001  MOV dword ptr [EBP + 0xffffff48],EAX
005d4007  MOV dword ptr [EBP + -0x4],0x0
005d400e  CMP dword ptr [EBP + 0xffffff48],0x0
005d4015  JZ 0x005d402a
005d4017  MOV ECX,dword ptr [EBP + 0xffffff48]
005d401d  CALL 0x005cd360
005d4022  MOV dword ptr [EBP + 0xffffff40],EAX
005d4028  JMP 0x005d4034
005d402a  MOV dword ptr [EBP + 0xffffff40],0x0
005d4034  MOV EDX,dword ptr [EBP + 0xffffff40]
005d403a  MOV dword ptr [EBP + 0xffffff4c],EDX
005d4040  MOV dword ptr [EBP + -0x4],0xffffffff
005d4047  MOV EAX,dword ptr [EBP + 0xffffff44]
005d404d  MOV ECX,dword ptr [EBP + 0xffffff4c]
005d4053  MOV dword ptr [EAX + 0x88],ECX
005d4059  PUSH -0x1
005d405b  PUSH 0x30
005d405d  PUSH 0x1388
005d4062  PUSH 0x0
005d4064  PUSH 0x0
005d4066  PUSH 0xf
005d4068  PUSH 0x41
005d406a  PUSH 0x4
005d406c  LEA EDX,[EBP + 0xffffff5c]
005d4072  PUSH EDX
005d4073  MOV EAX,dword ptr [EBP + 0xffffff44]
005d4079  MOV ECX,dword ptr [EAX + 0x88]
005d407f  CALL 0x005ec8f0
005d4084  MOV ECX,dword ptr [EBP + 0xffffff44]
005d408a  MOV ECX,dword ptr [ECX + 0x88]
005d4090  CALL 0x005eef60
005d4095  ADD EAX,0xa
005d4098  MOV dword ptr [EBP + 0xffffff54],EAX
005d409e  MOV EDX,dword ptr [EBP + 0xffffff54]
005d40a4  PUSH EDX
005d40a5  MOV EAX,dword ptr [EBP + 0xffffff44]
005d40ab  MOV ECX,dword ptr [EAX + 0x88]
005d40b1  CALL 0x005ecc60
005d40b6  MOV ECX,dword ptr [EBP + 0xffffff44]
005d40bc  MOV ECX,dword ptr [ECX + 0x88]
005d40c2  CALL 0x005ef440
005d40c7  MOV dword ptr [EBP + -0x1c],EAX
005d40ca  MOV EDX,dword ptr [EBP + -0x1c]
005d40cd  PUSH EDX
005d40ce  MOV EAX,dword ptr [EBP + 0xffffff44]
005d40d4  MOV ECX,dword ptr [EAX + 0x88]
005d40da  CALL 0x005eccb0
005d40df  PUSH 0xff
005d40e4  PUSH 0xe6
005d40e9  PUSH 0xe6
005d40ee  MOV ECX,dword ptr [EBP + 0xffffff44]
005d40f4  MOV ECX,dword ptr [ECX + 0x88]
005d40fa  CALL 0x005ee8c0
005d40ff  MOV EDX,dword ptr [0x0162ee84]
005d4105  MOV ECX,dword ptr [EDX + 0x14]
005d4108  CALL 0x005f8930
005d410d  MOV dword ptr [EBP + -0x14],EAX
005d4110  MOV EAX,[0x0162ee84]
005d4115  MOV ECX,dword ptr [EAX + 0x14]
005d4118  CALL 0x005f8950
005d411d  MOV dword ptr [EBP + -0x10],EAX
005d4120  MOV ECX,dword ptr [EBP + -0x10]
005d4123  SUB ECX,dword ptr [EBP + -0x1c]
005d4126  ADD ECX,dword ptr [EBP + 0xffffff50]
005d412c  MOV dword ptr [EBP + -0x18],ECX
005d412f  JNS 0x005d4138
005d4131  MOV dword ptr [EBP + -0x18],0x0
005d4138  MOV EDX,dword ptr [EBP + -0x18]
005d413b  ADD EDX,dword ptr [EBP + -0x1c]
005d413e  CMP EDX,0x1e0
005d4144  JLE 0x005d4151
005d4146  MOV EAX,0x1e0
005d414b  SUB EAX,dword ptr [EBP + -0x1c]
005d414e  MOV dword ptr [EBP + -0x18],EAX
005d4151  MOV ECX,dword ptr [EBP + -0x14]
005d4154  MOV dword ptr [EBP + 0xffffff58],ECX
005d415a  CMP dword ptr [EBP + 0xffffff58],0x0
005d4161  JGE 0x005d416d
005d4163  MOV dword ptr [EBP + 0xffffff58],0x0
005d416d  MOV EDX,dword ptr [EBP + 0xffffff58]
005d4173  ADD EDX,dword ptr [EBP + 0xffffff54]
005d4179  CMP EDX,0x280
005d417f  JLE 0x005d4192
005d4181  MOV EAX,0x280
005d4186  SUB EAX,dword ptr [EBP + 0xffffff54]
005d418c  MOV dword ptr [EBP + 0xffffff58],EAX
005d4192  MOV ECX,dword ptr [EBP + -0x18]
005d4195  PUSH ECX
005d4196  MOV EDX,dword ptr [EBP + 0xffffff58]
005d419c  PUSH EDX
005d419d  MOV EAX,dword ptr [EBP + 0xffffff44]
005d41a3  MOV ECX,dword ptr [EAX + 0x88]
005d41a9  MOV EDX,dword ptr [EBP + 0xffffff44]
005d41af  MOV EAX,dword ptr [EDX + 0x88]
005d41b5  MOV EDX,dword ptr [ECX]
005d41b7  MOV ECX,EAX
005d41b9  MOV EAX,dword ptr [EDX + 0x44]
005d41bc  CALL EAX
005d41be  MOV ECX,dword ptr [EBP + 0xffffff44]
005d41c4  MOV EDX,dword ptr [ECX + 0x88]
005d41ca  MOV EAX,dword ptr [EBP + 0xffffff44]
005d41d0  MOV ECX,dword ptr [EAX + 0x88]
005d41d6  MOV EDX,dword ptr [EDX]
005d41d8  MOV EAX,dword ptr [EDX + 0x74]
005d41db  CALL EAX
005d41dd  MOV ECX,dword ptr [EBP + -0xc]
005d41e0  MOV dword ptr FS:[0x0],ECX
005d41e7  POP ECX
005d41e8  MOV ECX,dword ptr [EBP + -0x20]
005d41eb  XOR ECX,EBP
005d41ed  CALL 0x00686d72
005d41f2  MOV ESP,EBP
005d41f4  POP EBP
005d41f5  RET 0x4
