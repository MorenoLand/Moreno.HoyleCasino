; FUN_00612e20  00612e20
00612e20  PUSH EBP
00612e21  MOV EBP,ESP
00612e23  SUB ESP,0x44
00612e26  MOV dword ptr [EBP + -0x44],ECX
00612e29  MOV EAX,dword ptr [EBP + -0x44]
00612e2c  CMP dword ptr [EAX + 0x4],0x0
00612e30  JZ 0x00612ecb
00612e36  MOV ECX,dword ptr [EBP + -0x44]
00612e39  MOV EDX,dword ptr [ECX + 0x8]
00612e3c  MOV dword ptr [EBP + -0x38],EDX
00612e3f  MOV EAX,dword ptr [EBP + -0x44]
00612e42  MOV ECX,dword ptr [EAX + 0x4]
00612e45  MOV dword ptr [EBP + -0x34],ECX
00612e48  MOV EDX,dword ptr [EBP + -0x38]
00612e4b  MOV dword ptr [EBP + -0x30],EDX
00612e4e  MOV EAX,dword ptr [EBP + -0x34]
00612e51  MOV dword ptr [EBP + -0x2c],EAX
00612e54  MOV CL,byte ptr [EBP + -0x2]
00612e57  MOV byte ptr [EBP + -0x1],CL
00612e5a  MOV EDX,dword ptr [EBP + -0x30]
00612e5d  MOV dword ptr [EBP + -0x28],EDX
00612e60  MOV EAX,dword ptr [EBP + -0x2c]
00612e63  MOV dword ptr [EBP + -0x24],EAX
00612e66  JMP 0x00612e71
00612e68  MOV ECX,dword ptr [EBP + -0x24]
00612e6b  ADD ECX,0x48
00612e6e  MOV dword ptr [EBP + -0x24],ECX
00612e71  MOV EDX,dword ptr [EBP + -0x24]
00612e74  CMP EDX,dword ptr [EBP + -0x28]
00612e77  JZ 0x00612e9f
00612e79  MOV EAX,dword ptr [EBP + -0x24]
00612e7c  ADD EAX,0x20
00612e7f  MOV dword ptr [EBP + -0x20],EAX
00612e82  MOV ECX,dword ptr [EBP + -0x20]
00612e85  CALL 0x005be450
00612e8a  XOR ECX,ECX
00612e8c  AND ECX,0x1
00612e8f  JZ 0x00612e9d
00612e91  MOV EDX,dword ptr [EBP + -0x24]
00612e94  PUSH EDX
00612e95  CALL 0x00686cae
00612e9a  ADD ESP,0x4
00612e9d  JMP 0x00612e68
00612e9f  MOV EAX,dword ptr [EBP + -0x44]
00612ea2  MOV ECX,dword ptr [EBP + -0x44]
00612ea5  MOV EAX,dword ptr [EAX + 0xc]
00612ea8  SUB EAX,dword ptr [ECX + 0x4]
00612eab  CDQ
00612eac  MOV ECX,0x48
00612eb1  IDIV ECX
00612eb3  MOV dword ptr [EBP + -0x40],EAX
00612eb6  MOV EDX,dword ptr [EBP + -0x44]
00612eb9  MOV EAX,dword ptr [EDX + 0x4]
00612ebc  MOV dword ptr [EBP + -0x3c],EAX
00612ebf  MOV ECX,dword ptr [EBP + -0x3c]
00612ec2  PUSH ECX
00612ec3  CALL 0x00686cae
00612ec8  ADD ESP,0x4
00612ecb  MOV EDX,dword ptr [EBP + -0x44]
00612ece  MOV dword ptr [EDX + 0x4],0x0
00612ed5  MOV EAX,dword ptr [EBP + -0x44]
00612ed8  MOV dword ptr [EAX + 0x8],0x0
00612edf  MOV ECX,dword ptr [EBP + -0x44]
00612ee2  MOV dword ptr [ECX + 0xc],0x0
00612ee9  MOV ESP,EBP
00612eeb  POP EBP
00612eec  RET
