; FUN_005d8d60  005d8d60
005d8d60  PUSH EBP
005d8d61  MOV EBP,ESP
005d8d63  SUB ESP,0x48
005d8d66  MOV dword ptr [EBP + -0x3c],ECX
005d8d69  CMP dword ptr [EBP + 0xc],0x0
005d8d6d  JZ 0x005d8e92
005d8d73  MOV EAX,[0x0162ee84]
005d8d78  MOV ECX,dword ptr [EAX + 0x58]
005d8d7b  MOV EDX,dword ptr [EBP + 0x8]
005d8d7e  MOV EAX,dword ptr [ECX + EDX*0x4]
005d8d81  MOV dword ptr [EBP + -0xc],EAX
005d8d84  MOV ECX,dword ptr [EBP + -0xc]
005d8d87  CALL 0x0063aac0
005d8d8c  MOV ECX,dword ptr [EAX]
005d8d8e  MOV dword ptr [EBP + -0x8],ECX
005d8d91  MOV ECX,dword ptr [EBP + 0xc]
005d8d94  CALL 0x0063aac0
005d8d99  MOV EDX,dword ptr [EAX]
005d8d9b  MOV dword ptr [EBP + -0x10],EDX
005d8d9e  XOR EAX,EAX
005d8da0  CMP dword ptr [EBP + -0x8],0x0
005d8da4  SETZ AL
005d8da7  MOVZX ECX,AL
005d8daa  XOR EDX,EDX
005d8dac  CMP dword ptr [EBP + -0x10],0x0
005d8db0  SETZ DL
005d8db3  MOVZX EAX,DL
005d8db6  CMP ECX,EAX
005d8db8  JNZ 0x005d8e92
005d8dbe  MOV ECX,dword ptr [EBP + 0xc]
005d8dc1  CALL 0x0063aac0
005d8dc6  ADD EAX,0x4
005d8dc9  MOV dword ptr [EBP + -0x14],EAX
005d8dcc  MOV ECX,dword ptr [0x0162ee84]
005d8dd2  MOV EDX,dword ptr [ECX + 0x58]
005d8dd5  MOV EAX,dword ptr [EBP + 0x8]
005d8dd8  MOV ECX,dword ptr [EDX + EAX*0x4]
005d8ddb  MOV dword ptr [EBP + -0x18],ECX
005d8dde  MOV ECX,dword ptr [EBP + -0x18]
005d8de1  CALL 0x0063aac0
005d8de6  ADD EAX,0x4
005d8de9  MOV dword ptr [EBP + -0x1c],EAX
005d8dec  MOV EDX,dword ptr [EBP + -0x14]
005d8def  PUSH EDX
005d8df0  MOV EAX,dword ptr [EBP + -0x1c]
005d8df3  PUSH EAX
005d8df4  CALL 0x00686ec0
005d8df9  ADD ESP,0x8
005d8dfc  TEST EAX,EAX
005d8dfe  JNZ 0x005d8e92
005d8e04  MOV ECX,dword ptr [0x0162ee84]
005d8e0a  MOV EDX,dword ptr [ECX + 0x58]
005d8e0d  MOV EAX,dword ptr [EBP + 0x8]
005d8e10  MOV ECX,dword ptr [EDX + EAX*0x4]
005d8e13  MOV dword ptr [EBP + -0x28],ECX
005d8e16  MOV ECX,dword ptr [EBP + -0x28]
005d8e19  CALL 0x0063aac0
005d8e1e  MOV EDX,dword ptr [EAX]
005d8e20  MOV dword ptr [EBP + -0x20],EDX
005d8e23  CMP dword ptr [EBP + -0x20],0x2
005d8e27  JZ 0x005d8e45
005d8e29  MOV ECX,dword ptr [EBP + -0x28]
005d8e2c  CALL 0x0063aac0
005d8e31  MOV EAX,dword ptr [EAX]
005d8e33  MOV dword ptr [EBP + -0x24],EAX
005d8e36  CMP dword ptr [EBP + -0x24],0x3
005d8e3a  JZ 0x005d8e45
005d8e3c  MOV dword ptr [EBP + -0x40],0x0
005d8e43  JMP 0x005d8e4c
005d8e45  MOV dword ptr [EBP + -0x40],0x1
005d8e4c  MOV ECX,dword ptr [EBP + 0xc]
005d8e4f  CALL 0x0063aac0
005d8e54  MOV ECX,dword ptr [EAX]
005d8e56  MOV dword ptr [EBP + -0x2c],ECX
005d8e59  CMP dword ptr [EBP + -0x2c],0x2
005d8e5d  JZ 0x005d8e7b
005d8e5f  MOV ECX,dword ptr [EBP + 0xc]
005d8e62  CALL 0x0063aac0
005d8e67  MOV EDX,dword ptr [EAX]
005d8e69  MOV dword ptr [EBP + -0x30],EDX
005d8e6c  CMP dword ptr [EBP + -0x30],0x3
005d8e70  JZ 0x005d8e7b
005d8e72  MOV dword ptr [EBP + -0x44],0x0
005d8e79  JMP 0x005d8e82
005d8e7b  MOV dword ptr [EBP + -0x44],0x1
005d8e82  MOVZX EAX,byte ptr [EBP + -0x40]
005d8e86  MOVZX ECX,byte ptr [EBP + -0x44]
005d8e8a  CMP EAX,ECX
005d8e8c  JZ 0x005d8f3b
005d8e92  MOV EDX,dword ptr [EBP + -0x3c]
005d8e95  MOV byte ptr [EDX + 0x7c],0x1
005d8e99  MOV dword ptr [EBP + -0x4],0x0
005d8ea0  JMP 0x005d8eab
005d8ea2  MOV EAX,dword ptr [EBP + -0x4]
005d8ea5  ADD EAX,0x1
005d8ea8  MOV dword ptr [EBP + -0x4],EAX
005d8eab  CMP dword ptr [EBP + -0x4],0x4
005d8eaf  JGE 0x005d8ec7
005d8eb1  MOV ECX,dword ptr [EBP + -0x4]
005d8eb4  PUSH ECX
005d8eb5  MOV EDX,dword ptr [EBP + -0x3c]
005d8eb8  MOV EAX,dword ptr [EDX]
005d8eba  MOV ECX,dword ptr [EBP + -0x3c]
005d8ebd  MOV EDX,dword ptr [EAX + 0x290]
005d8ec3  CALL EDX
005d8ec5  JMP 0x005d8ea2
005d8ec7  CMP dword ptr [0x0163068c],0x0
005d8ece  JZ 0x005d8f21
005d8ed0  MOV ECX,dword ptr [EBP + 0xc]
005d8ed3  CALL 0x0063aac0
005d8ed8  MOV EAX,dword ptr [EAX]
005d8eda  MOV dword ptr [EBP + -0x34],EAX
005d8edd  CMP dword ptr [EBP + -0x34],0x2
005d8ee1  JZ 0x005d8eff
005d8ee3  MOV ECX,dword ptr [EBP + 0xc]
005d8ee6  CALL 0x0063aac0
005d8eeb  MOV ECX,dword ptr [EAX]
005d8eed  MOV dword ptr [EBP + -0x38],ECX
005d8ef0  CMP dword ptr [EBP + -0x38],0x3
005d8ef4  JZ 0x005d8eff
005d8ef6  MOV dword ptr [EBP + -0x48],0x0
005d8efd  JMP 0x005d8f06
005d8eff  MOV dword ptr [EBP + -0x48],0x1
005d8f06  MOVZX EDX,byte ptr [EBP + -0x48]
005d8f0a  TEST EDX,EDX
005d8f0c  JZ 0x005d8f21
005d8f0e  MOV ECX,dword ptr [EBP + -0x3c]
005d8f11  CALL 0x005da830
005d8f16  MOVZX EAX,AL
005d8f19  TEST EAX,EAX
005d8f1b  JZ 0x005d8f21
005d8f1d  MOV AL,0x1
005d8f1f  JMP 0x005d8f3d
005d8f21  CMP dword ptr [EBP + 0xc],0x0
005d8f25  JZ 0x005d8f3b
005d8f27  MOV ECX,dword ptr [EBP + 0xc]
005d8f2a  PUSH ECX
005d8f2b  MOV EDX,dword ptr [EBP + -0x3c]
005d8f2e  MOV EAX,dword ptr [EDX]
005d8f30  MOV ECX,dword ptr [EBP + -0x3c]
005d8f33  MOV EDX,dword ptr [EAX + 0x264]
005d8f39  CALL EDX
005d8f3b  MOV AL,0x1
005d8f3d  MOV ESP,EBP
005d8f3f  POP EBP
005d8f40  RET 0xc
