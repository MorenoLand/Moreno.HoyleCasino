; FUN_00585c90  00585c90
00585c90  PUSH EBP
00585c91  MOV EBP,ESP
00585c93  SUB ESP,0xc
00585c96  MOV dword ptr [EBP + -0x4],ECX
00585c99  MOVZX EAX,byte ptr [EBP + 0x8]
00585c9d  TEST EAX,EAX
00585c9f  JZ 0x00585d08
00585ca1  MOV ECX,dword ptr [EBP + -0x4]
00585ca4  MOV EDX,dword ptr [ECX + 0x4]
00585ca7  MOV byte ptr [EDX + 0x3],0x1
00585cab  MOV EAX,dword ptr [EBP + -0x4]
00585cae  MOV ECX,dword ptr [EAX + 0x4]
00585cb1  MOVSX EDX,byte ptr [ECX + 0x1]
00585cb5  MOV dword ptr [EBP + -0x8],EDX
00585cb8  MOV EAX,dword ptr [EBP + -0x8]
00585cbb  SUB EAX,0x1
00585cbe  MOV dword ptr [EBP + -0x8],EAX
00585cc1  CMP dword ptr [EBP + -0x8],0x13
00585cc5  JA 0x00585d06
00585cc7  MOV ECX,dword ptr [EBP + -0x8]
00585cca  MOVZX EDX,byte ptr [ECX + 0x585d90]
00585cd1  JMP dword ptr [EDX*0x4 + 0x585d7c]
00585cd8  MOV EAX,dword ptr [EBP + -0x4]
00585cdb  MOV ECX,dword ptr [EAX + 0x4]
00585cde  MOV byte ptr [ECX + 0x1],0x7
00585ce2  JMP 0x00585d06
00585ce4  MOV EDX,dword ptr [EBP + -0x4]
00585ce7  MOV EAX,dword ptr [EDX + 0x4]
00585cea  MOV byte ptr [EAX + 0x1],0xe
00585cee  JMP 0x00585d06
00585cf0  MOV ECX,dword ptr [EBP + -0x4]
00585cf3  MOV EDX,dword ptr [ECX + 0x4]
00585cf6  MOV byte ptr [EDX + 0x1],0x1c
00585cfa  JMP 0x00585d06
00585cfc  MOV EAX,dword ptr [EBP + -0x4]
00585cff  MOV ECX,dword ptr [EAX + 0x4]
00585d02  MOV byte ptr [ECX + 0x1],0x46
00585d06  JMP 0x00585d6d
00585d08  MOV EDX,dword ptr [EBP + -0x4]
00585d0b  MOV EAX,dword ptr [EDX + 0x4]
00585d0e  MOV byte ptr [EAX + 0x3],0x0
00585d12  MOV ECX,dword ptr [EBP + -0x4]
00585d15  MOV EDX,dword ptr [ECX + 0x4]
00585d18  MOVSX EAX,byte ptr [EDX + 0x1]
00585d1c  MOV dword ptr [EBP + -0xc],EAX
00585d1f  MOV ECX,dword ptr [EBP + -0xc]
00585d22  SUB ECX,0x7
00585d25  MOV dword ptr [EBP + -0xc],ECX
00585d28  CMP dword ptr [EBP + -0xc],0x3f
00585d2c  JA 0x00585d6d
00585d2e  MOV EDX,dword ptr [EBP + -0xc]
00585d31  MOVZX EAX,byte ptr [EDX + 0x585db8]
00585d38  JMP dword ptr [EAX*0x4 + 0x585da4]
00585d3f  MOV ECX,dword ptr [EBP + -0x4]
00585d42  MOV EDX,dword ptr [ECX + 0x4]
00585d45  MOV byte ptr [EDX + 0x1],0x1
00585d49  JMP 0x00585d6d
00585d4b  MOV EAX,dword ptr [EBP + -0x4]
00585d4e  MOV ECX,dword ptr [EAX + 0x4]
00585d51  MOV byte ptr [ECX + 0x1],0x5
00585d55  JMP 0x00585d6d
00585d57  MOV EDX,dword ptr [EBP + -0x4]
00585d5a  MOV EAX,dword ptr [EDX + 0x4]
00585d5d  MOV byte ptr [EAX + 0x1],0xa
00585d61  JMP 0x00585d6d
00585d63  MOV ECX,dword ptr [EBP + -0x4]
00585d66  MOV EDX,dword ptr [ECX + 0x4]
00585d69  MOV byte ptr [EDX + 0x1],0x14
00585d6d  MOV ECX,dword ptr [EBP + -0x4]
00585d70  CALL 0x00585830
00585d75  MOV ESP,EBP
00585d77  POP EBP
00585d78  RET 0x4
