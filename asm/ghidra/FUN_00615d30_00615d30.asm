; FUN_00615d30  00615d30
00615d30  PUSH EBP
00615d31  MOV EBP,ESP
00615d33  PUSH ECX
00615d34  MOV dword ptr [EBP + -0x4],ECX
00615d37  MOV EAX,dword ptr [EBP + -0x4]
00615d3a  MOV EDX,dword ptr [EAX]
00615d3c  MOV ECX,dword ptr [EBP + -0x4]
00615d3f  MOV EAX,dword ptr [EDX + 0xa8]
00615d45  CALL EAX
00615d47  MOVZX ECX,AL
00615d4a  TEST ECX,ECX
00615d4c  JZ 0x00615e72
00615d52  MOV EDX,dword ptr [EBP + -0x4]
00615d55  MOV ECX,dword ptr [EDX + 0x184]
00615d5b  CALL 0x00615160
00615d60  MOVZX EAX,AL
00615d63  TEST EAX,EAX
00615d65  JZ 0x00615de3
00615d67  MOV ECX,dword ptr [EBP + 0x8]
00615d6a  MOV EDX,dword ptr [EBP + -0x4]
00615d6d  MOV EAX,dword ptr [ECX + 0x8]
00615d70  SUB EAX,dword ptr [EDX + 0x2c]
00615d73  MOV ECX,dword ptr [EBP + -0x4]
00615d76  CMP EAX,dword ptr [ECX + 0x188]
00615d7c  JGE 0x00615d97
00615d7e  MOV EDX,dword ptr [EBP + -0x4]
00615d81  MOV EAX,dword ptr [EDX + 0x188]
00615d87  PUSH EAX
00615d88  MOV ECX,dword ptr [EBP + -0x4]
00615d8b  MOV EDX,dword ptr [ECX]
00615d8d  MOV ECX,dword ptr [EBP + -0x4]
00615d90  MOV EAX,dword ptr [EDX + 0x48]
00615d93  CALL EAX
00615d95  JMP 0x00615de1
00615d97  MOV ECX,dword ptr [EBP + 0x8]
00615d9a  MOV EDX,dword ptr [EBP + -0x4]
00615d9d  MOV EAX,dword ptr [ECX + 0x8]
00615da0  SUB EAX,dword ptr [EDX + 0x2c]
00615da3  MOV ECX,dword ptr [EBP + -0x4]
00615da6  CMP EAX,dword ptr [ECX + 0x18c]
00615dac  JLE 0x00615dc7
00615dae  MOV EDX,dword ptr [EBP + -0x4]
00615db1  MOV EAX,dword ptr [EDX + 0x18c]
00615db7  PUSH EAX
00615db8  MOV ECX,dword ptr [EBP + -0x4]
00615dbb  MOV EDX,dword ptr [ECX]
00615dbd  MOV ECX,dword ptr [EBP + -0x4]
00615dc0  MOV EAX,dword ptr [EDX + 0x48]
00615dc3  CALL EAX
00615dc5  JMP 0x00615de1
00615dc7  MOV ECX,dword ptr [EBP + 0x8]
00615dca  MOV EDX,dword ptr [EBP + -0x4]
00615dcd  MOV EAX,dword ptr [ECX + 0x8]
00615dd0  SUB EAX,dword ptr [EDX + 0x2c]
00615dd3  PUSH EAX
00615dd4  MOV ECX,dword ptr [EBP + -0x4]
00615dd7  MOV EDX,dword ptr [ECX]
00615dd9  MOV ECX,dword ptr [EBP + -0x4]
00615ddc  MOV EAX,dword ptr [EDX + 0x48]
00615ddf  CALL EAX
00615de1  JMP 0x00615e5d
00615de3  MOV ECX,dword ptr [EBP + 0x8]
00615de6  MOV EDX,dword ptr [EBP + -0x4]
00615de9  MOV EAX,dword ptr [ECX + 0xc]
00615dec  SUB EAX,dword ptr [EDX + 0x30]
00615def  MOV ECX,dword ptr [EBP + -0x4]
00615df2  CMP EAX,dword ptr [ECX + 0x188]
00615df8  JGE 0x00615e13
00615dfa  MOV EDX,dword ptr [EBP + -0x4]
00615dfd  MOV EAX,dword ptr [EDX + 0x188]
00615e03  PUSH EAX
00615e04  MOV ECX,dword ptr [EBP + -0x4]
00615e07  MOV EDX,dword ptr [ECX]
00615e09  MOV ECX,dword ptr [EBP + -0x4]
00615e0c  MOV EAX,dword ptr [EDX + 0x50]
00615e0f  CALL EAX
00615e11  JMP 0x00615e5d
00615e13  MOV ECX,dword ptr [EBP + 0x8]
00615e16  MOV EDX,dword ptr [EBP + -0x4]
00615e19  MOV EAX,dword ptr [ECX + 0xc]
00615e1c  SUB EAX,dword ptr [EDX + 0x30]
00615e1f  MOV ECX,dword ptr [EBP + -0x4]
00615e22  CMP EAX,dword ptr [ECX + 0x18c]
00615e28  JLE 0x00615e43
00615e2a  MOV EDX,dword ptr [EBP + -0x4]
00615e2d  MOV EAX,dword ptr [EDX + 0x18c]
00615e33  PUSH EAX
00615e34  MOV ECX,dword ptr [EBP + -0x4]
00615e37  MOV EDX,dword ptr [ECX]
00615e39  MOV ECX,dword ptr [EBP + -0x4]
00615e3c  MOV EAX,dword ptr [EDX + 0x50]
00615e3f  CALL EAX
00615e41  JMP 0x00615e5d
00615e43  MOV ECX,dword ptr [EBP + 0x8]
00615e46  MOV EDX,dword ptr [EBP + -0x4]
00615e49  MOV EAX,dword ptr [ECX + 0xc]
00615e4c  SUB EAX,dword ptr [EDX + 0x30]
00615e4f  PUSH EAX
00615e50  MOV ECX,dword ptr [EBP + -0x4]
00615e53  MOV EDX,dword ptr [ECX]
00615e55  MOV ECX,dword ptr [EBP + -0x4]
00615e58  MOV EAX,dword ptr [EDX + 0x50]
00615e5b  CALL EAX
00615e5d  MOV ECX,dword ptr [EBP + -0x4]
00615e60  MOV ECX,dword ptr [ECX + 0x184]
00615e66  CALL 0x00615740
00615e6b  MOV EDX,dword ptr [EBP + 0x8]
00615e6e  MOV byte ptr [EDX + 0x4],0x1
00615e72  MOV ESP,EBP
00615e74  POP EBP
00615e75  RET 0x4
