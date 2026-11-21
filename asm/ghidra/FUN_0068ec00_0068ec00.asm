; FUN_0068ec00  0068ec00
0068ec00  PUSH EBP
0068ec01  MOV EBP,ESP
0068ec03  SUB ESP,0xc
0068ec06  MOV dword ptr [EBP + -0xc],ECX
0068ec09  MOV EAX,dword ptr [EBP + 0x8]
0068ec0c  MOV ECX,dword ptr [EAX]
0068ec0e  MOV dword ptr [EBP + -0x4],ECX
0068ec11  MOV EDX,dword ptr [EBP + 0x8]
0068ec14  MOV EAX,dword ptr [EBP + -0x4]
0068ec17  MOV ECX,dword ptr [EAX + 0x8]
0068ec1a  MOV dword ptr [EDX],ECX
0068ec1c  MOV EDX,dword ptr [EBP + -0x4]
0068ec1f  MOV EAX,dword ptr [EDX + 0x8]
0068ec22  MOVSX ECX,byte ptr [EAX + 0x45]
0068ec26  TEST ECX,ECX
0068ec28  JNZ 0x0068ec36
0068ec2a  MOV EDX,dword ptr [EBP + -0x4]
0068ec2d  MOV EAX,dword ptr [EDX + 0x8]
0068ec30  MOV ECX,dword ptr [EBP + 0x8]
0068ec33  MOV dword ptr [EAX + 0x4],ECX
0068ec36  MOV EDX,dword ptr [EBP + -0x4]
0068ec39  MOV EAX,dword ptr [EBP + 0x8]
0068ec3c  MOV ECX,dword ptr [EAX + 0x4]
0068ec3f  MOV dword ptr [EDX + 0x4],ECX
0068ec42  MOV EDX,dword ptr [EBP + -0xc]
0068ec45  MOV EAX,dword ptr [EDX + 0x4]
0068ec48  MOV ECX,dword ptr [EBP + 0x8]
0068ec4b  CMP ECX,dword ptr [EAX + 0x4]
0068ec4e  JNZ 0x0068ec5e
0068ec50  MOV EDX,dword ptr [EBP + -0xc]
0068ec53  MOV EAX,dword ptr [EDX + 0x4]
0068ec56  MOV ECX,dword ptr [EBP + -0x4]
0068ec59  MOV dword ptr [EAX + 0x4],ECX
0068ec5c  JMP 0x0068ec8b
0068ec5e  MOV EDX,dword ptr [EBP + 0x8]
0068ec61  MOV EAX,dword ptr [EDX + 0x4]
0068ec64  MOV ECX,dword ptr [EBP + 0x8]
0068ec67  CMP ECX,dword ptr [EAX + 0x8]
0068ec6a  JNZ 0x0068ec7a
0068ec6c  MOV EDX,dword ptr [EBP + 0x8]
0068ec6f  MOV EAX,dword ptr [EDX + 0x4]
0068ec72  MOV ECX,dword ptr [EBP + -0x4]
0068ec75  MOV dword ptr [EAX + 0x8],ECX
0068ec78  JMP 0x0068ec8b
0068ec7a  MOV EDX,dword ptr [EBP + 0x8]
0068ec7d  MOV EAX,dword ptr [EDX + 0x4]
0068ec80  MOV dword ptr [EBP + -0x8],EAX
0068ec83  MOV ECX,dword ptr [EBP + -0x8]
0068ec86  MOV EDX,dword ptr [EBP + -0x4]
0068ec89  MOV dword ptr [ECX],EDX
0068ec8b  MOV EAX,dword ptr [EBP + -0x4]
0068ec8e  MOV ECX,dword ptr [EBP + 0x8]
0068ec91  MOV dword ptr [EAX + 0x8],ECX
0068ec94  MOV EDX,dword ptr [EBP + 0x8]
0068ec97  MOV EAX,dword ptr [EBP + -0x4]
0068ec9a  MOV dword ptr [EDX + 0x4],EAX
0068ec9d  MOV ESP,EBP
0068ec9f  POP EBP
0068eca0  RET 0x4
