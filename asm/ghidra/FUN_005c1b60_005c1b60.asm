; FUN_005c1b60  005c1b60
005c1b60  PUSH EBP
005c1b61  MOV EBP,ESP
005c1b63  SUB ESP,0x4c
005c1b66  MOV dword ptr [EBP + -0x44],ECX
005c1b69  MOV EAX,dword ptr [EBP + -0x44]
005c1b6c  MOV EDX,dword ptr [EAX]
005c1b6e  MOV ECX,dword ptr [EBP + -0x44]
005c1b71  MOV EAX,dword ptr [EDX + 0x28]
005c1b74  CALL EAX
005c1b76  MOV byte ptr [EBP + -0x9],AL
005c1b79  MOV ECX,dword ptr [0x007960d8]
005c1b7f  MOV EDX,dword ptr [ECX + 0xc]
005c1b82  MOV EAX,[0x007960d8]
005c1b87  MOV ECX,dword ptr [EAX + 0xc]
005c1b8a  MOV EDX,dword ptr [EDX]
005c1b8c  MOV EAX,dword ptr [EDX + 0x8]
005c1b8f  CALL EAX
005c1b91  MOV dword ptr [EBP + -0x8],EAX
005c1b94  MOV ECX,dword ptr [EBP + -0x44]
005c1b97  MOV EDX,dword ptr [ECX]
005c1b99  MOV ECX,dword ptr [EBP + -0x44]
005c1b9c  MOV EAX,dword ptr [EDX + 0x24]
005c1b9f  CALL EAX
005c1ba1  MOVZX ECX,AL
005c1ba4  TEST ECX,ECX
005c1ba6  JNZ 0x005c1bb8
005c1ba8  MOV EDX,dword ptr [EBP + -0x44]
005c1bab  MOV ECX,dword ptr [EDX + 0x4]
005c1bae  CALL 0x005be3f0
005c1bb3  MOV dword ptr [EBP + -0x48],EAX
005c1bb6  JMP 0x005c1bbf
005c1bb8  MOV dword ptr [EBP + -0x48],0x1
005c1bbf  MOV EAX,dword ptr [EBP + -0x48]
005c1bc2  MOV dword ptr [EBP + -0x18],EAX
005c1bc5  MOV dword ptr [EBP + -0x14],0x0
005c1bcc  MOV dword ptr [EBP + -0x4],0x3e8
005c1bd3  MOV ECX,dword ptr [EBP + -0x18]
005c1bd6  ADD ECX,0x1
005c1bd9  IMUL ECX,dword ptr [EBP + -0x4]
005c1bdd  MOV dword ptr [EBP + -0x10],ECX
005c1be0  MOV dword ptr [EBP + -0x1c],0x1
005c1be7  JMP 0x005c1bf2
005c1be9  MOV EDX,dword ptr [EBP + -0x1c]
005c1bec  ADD EDX,0x1
005c1bef  MOV dword ptr [EBP + -0x1c],EDX
005c1bf2  MOV EAX,dword ptr [EBP + -0x44]
005c1bf5  MOV ECX,dword ptr [EAX + 0x4]
005c1bf8  MOV EDX,dword ptr [ECX + 0x10]
005c1bfb  MOV EAX,dword ptr [EDX + 0x8]
005c1bfe  MOV dword ptr [EBP + -0x30],EAX
005c1c01  MOV ECX,dword ptr [EBP + -0x1c]
005c1c04  CMP ECX,dword ptr [EBP + -0x30]
005c1c07  JG 0x005c1d50
005c1c0d  MOV byte ptr [EBP + -0x21],0x0
005c1c11  MOV EDX,dword ptr [EBP + -0x44]
005c1c14  MOV EAX,dword ptr [EDX]
005c1c16  MOV ECX,dword ptr [EBP + -0x44]
005c1c19  MOV EDX,dword ptr [EAX + 0x30]
005c1c1c  CALL EDX
005c1c1e  MOVZX EAX,AL
005c1c21  TEST EAX,EAX
005c1c23  JZ 0x005c1c3b
005c1c25  MOV ECX,dword ptr [EBP + -0x44]
005c1c28  MOV EDX,dword ptr [ECX + 0x4]
005c1c2b  MOV EAX,dword ptr [EBP + -0x1c]
005c1c2e  XOR ECX,ECX
005c1c30  CMP EAX,dword ptr [EDX + 0xc]
005c1c33  SETLE CL
005c1c36  MOV byte ptr [EBP + -0x21],CL
005c1c39  JMP 0x005c1cae
005c1c3b  MOV EDX,dword ptr [EBP + -0x44]
005c1c3e  MOV EAX,dword ptr [EDX]
005c1c40  MOV ECX,dword ptr [EBP + -0x44]
005c1c43  MOV EDX,dword ptr [EAX + 0x28]
005c1c46  CALL EDX
005c1c48  MOVZX EAX,AL
005c1c4b  TEST EAX,EAX
005c1c4d  JZ 0x005c1cae
005c1c4f  MOV ECX,dword ptr [EBP + -0x44]
005c1c52  MOV EDX,dword ptr [ECX]
005c1c54  MOV ECX,dword ptr [EBP + -0x44]
005c1c57  MOV EAX,dword ptr [EDX + 0x24]
005c1c5a  CALL EAX
005c1c5c  MOVZX ECX,AL
005c1c5f  TEST ECX,ECX
005c1c61  JNZ 0x005c1cae
005c1c63  MOV EDX,dword ptr [EBP + -0x44]
005c1c66  MOV EAX,dword ptr [EDX + 0x4]
005c1c69  MOV dword ptr [EBP + -0x34],EAX
005c1c6c  MOV ECX,dword ptr [EBP + -0x34]
005c1c6f  CALL 0x005c9140
005c1c74  MOV ECX,dword ptr [EBP + -0x34]
005c1c77  ADD ECX,dword ptr [EBP + -0x1c]
005c1c7a  MOV DL,byte ptr [ECX + 0x33]
005c1c7d  MOV byte ptr [EBP + -0x35],DL
005c1c80  MOVZX EAX,byte ptr [EBP + -0x35]
005c1c84  TEST EAX,EAX
005c1c86  JZ 0x005c1cae
005c1c88  MOV EAX,dword ptr [EBP + -0x14]
005c1c8b  IMUL EAX,dword ptr [EBP + -0x10]
005c1c8f  CDQ
005c1c90  IDIV dword ptr [EBP + -0x18]
005c1c93  ADD EAX,dword ptr [EBP + -0x8]
005c1c96  CDQ
005c1c97  IDIV dword ptr [EBP + -0x10]
005c1c9a  XOR ECX,ECX
005c1c9c  CMP EDX,dword ptr [EBP + -0x4]
005c1c9f  SETL CL
005c1ca2  MOV byte ptr [EBP + -0x21],CL
005c1ca5  MOV EDX,dword ptr [EBP + -0x14]
005c1ca8  ADD EDX,0x1
005c1cab  MOV dword ptr [EBP + -0x14],EDX
005c1cae  MOV EAX,dword ptr [EBP + -0x1c]
005c1cb1  SUB EAX,0x1
005c1cb4  MOV dword ptr [EBP + -0x40],EAX
005c1cb7  MOV ECX,dword ptr [EBP + -0x44]
005c1cba  ADD ECX,0x28
005c1cbd  MOV dword ptr [EBP + -0x3c],ECX
005c1cc0  MOV EDX,dword ptr [EBP + -0x3c]
005c1cc3  CMP dword ptr [EDX + 0x4],0x0
005c1cc7  JNZ 0x005c1cd2
005c1cc9  MOV dword ptr [EBP + -0x4c],0x0
005c1cd0  JMP 0x005c1ce4
005c1cd2  MOV EAX,dword ptr [EBP + -0x3c]
005c1cd5  MOV ECX,dword ptr [EBP + -0x3c]
005c1cd8  MOV EDX,dword ptr [EAX + 0x8]
005c1cdb  SUB EDX,dword ptr [ECX + 0x4]
005c1cde  SAR EDX,0x2
005c1ce1  MOV dword ptr [EBP + -0x4c],EDX
005c1ce4  MOV EAX,dword ptr [EBP + -0x40]
005c1ce7  CMP EAX,dword ptr [EBP + -0x4c]
005c1cea  JC 0x005c1cf2
005c1cec  CALL dword ptr [0x006b2274]
005c1cf2  MOV ECX,dword ptr [EBP + -0x3c]
005c1cf5  MOV EDX,dword ptr [ECX + 0x4]
005c1cf8  MOV EAX,dword ptr [EBP + -0x40]
005c1cfb  MOV ECX,dword ptr [EDX + EAX*0x4]
005c1cfe  MOV dword ptr [EBP + -0x20],ECX
005c1d01  MOV ECX,dword ptr [EBP + -0x20]
005c1d04  CALL 0x005f54e0
005c1d09  MOVZX EDX,AL
005c1d0c  TEST EDX,EDX
005c1d0e  JZ 0x005c1d27
005c1d10  MOVZX EAX,byte ptr [EBP + -0x21]
005c1d14  TEST EAX,EAX
005c1d16  JNZ 0x005c1d27
005c1d18  MOV ECX,dword ptr [EBP + -0x20]
005c1d1b  MOV EDX,dword ptr [ECX]
005c1d1d  MOV ECX,dword ptr [EBP + -0x20]
005c1d20  MOV EAX,dword ptr [EDX + 0x70]
005c1d23  CALL EAX
005c1d25  JMP 0x005c1d4b
005c1d27  MOV ECX,dword ptr [EBP + -0x20]
005c1d2a  CALL 0x005f54e0
005c1d2f  MOVZX ECX,AL
005c1d32  TEST ECX,ECX
005c1d34  JNZ 0x005c1d4b
005c1d36  MOVZX EDX,byte ptr [EBP + -0x21]
005c1d3a  TEST EDX,EDX
005c1d3c  JZ 0x005c1d4b
005c1d3e  MOV EAX,dword ptr [EBP + -0x20]
005c1d41  MOV EDX,dword ptr [EAX]
005c1d43  MOV ECX,dword ptr [EBP + -0x20]
005c1d46  MOV EAX,dword ptr [EDX + 0x74]
005c1d49  CALL EAX
005c1d4b  JMP 0x005c1be9
005c1d50  MOV ESP,EBP
005c1d52  POP EBP
005c1d53  RET
