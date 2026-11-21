; FUN_00606aa0  00606aa0
00606aa0  PUSH EBP
00606aa1  MOV EBP,ESP
00606aa3  SUB ESP,0xc
00606aa6  MOV dword ptr [EBP + -0xc],ECX
00606aa9  MOV EAX,dword ptr [EBP + -0xc]
00606aac  MOVZX ECX,byte ptr [EAX + 0xc]
00606ab0  TEST ECX,ECX
00606ab2  JNZ 0x00606ab9
00606ab4  JMP 0x00606bad
00606ab9  MOV ECX,dword ptr [0x015e55e8]
00606abf  CALL 0x005f3e50
00606ac4  MOV EDX,dword ptr [EBP + -0xc]
00606ac7  SUB EAX,dword ptr [EDX + 0x28]
00606aca  PUSH EAX
00606acb  CALL 0x00686eba
00606ad0  ADD ESP,0x4
00606ad3  MOV ECX,dword ptr [EBP + -0xc]
00606ad6  MOV EDX,dword ptr [ECX + 0x4]
00606ad9  CMP EAX,dword ptr [EDX + 0x184]
00606adf  JL 0x00606bad
00606ae5  MOV ECX,dword ptr [0x015e55e8]
00606aeb  CALL 0x005f3e50
00606af0  MOV ECX,dword ptr [EBP + -0xc]
00606af3  MOV dword ptr [ECX + 0x28],EAX
00606af6  MOV EDX,dword ptr [EBP + -0xc]
00606af9  MOVZX EAX,byte ptr [EDX + 0xc]
00606afd  TEST EAX,EAX
00606aff  JZ 0x00606bad
00606b05  MOV ECX,dword ptr [EBP + -0xc]
00606b08  FLD float ptr [ECX + 0x18]
00606b0b  MOV EDX,dword ptr [EBP + -0xc]
00606b0e  FADD float ptr [EDX + 0x20]
00606b11  MOV EAX,dword ptr [EBP + -0xc]
00606b14  FSTP float ptr [EAX + 0x18]
00606b17  MOV ECX,dword ptr [EBP + -0xc]
00606b1a  FLD float ptr [ECX + 0x1c]
00606b1d  MOV EDX,dword ptr [EBP + -0xc]
00606b20  FADD float ptr [EDX + 0x24]
00606b23  MOV EAX,dword ptr [EBP + -0xc]
00606b26  FSTP float ptr [EAX + 0x1c]
00606b29  MOV ECX,dword ptr [EBP + -0xc]
00606b2c  FLD float ptr [ECX + 0x18]
00606b2f  CALL 0x00686cc0
00606b34  MOV dword ptr [EBP + -0x8],EAX
00606b37  MOV EDX,dword ptr [EBP + -0xc]
00606b3a  FLD float ptr [EDX + 0x1c]
00606b3d  CALL 0x00686cc0
00606b42  MOV dword ptr [EBP + -0x4],EAX
00606b45  MOV EAX,dword ptr [EBP + -0x4]
00606b48  PUSH EAX
00606b49  MOV ECX,dword ptr [EBP + -0x8]
00606b4c  PUSH ECX
00606b4d  MOV EDX,dword ptr [EBP + -0xc]
00606b50  MOV EAX,dword ptr [EDX + 0x4]
00606b53  MOV ECX,dword ptr [EBP + -0xc]
00606b56  MOV ECX,dword ptr [ECX + 0x4]
00606b59  MOV EDX,dword ptr [EAX]
00606b5b  MOV EAX,dword ptr [EDX + 0x44]
00606b5e  CALL EAX
00606b60  MOV ECX,dword ptr [EBP + -0xc]
00606b63  MOV EDX,dword ptr [EBP + -0x8]
00606b66  SUB EDX,dword ptr [ECX + 0x10]
00606b69  PUSH EDX
00606b6a  CALL 0x00686eba
00606b6f  ADD ESP,0x4
00606b72  MOV ECX,dword ptr [EBP + -0xc]
00606b75  MOV EDX,dword ptr [ECX + 0x4]
00606b78  CMP EAX,dword ptr [EDX + 0x188]
00606b7e  JGE 0x00606bad
00606b80  MOV EAX,dword ptr [EBP + -0xc]
00606b83  MOV ECX,dword ptr [EBP + -0x4]
00606b86  SUB ECX,dword ptr [EAX + 0x14]
00606b89  PUSH ECX
00606b8a  CALL 0x00686eba
00606b8f  ADD ESP,0x4
00606b92  MOV EDX,dword ptr [EBP + -0xc]
00606b95  MOV ECX,dword ptr [EDX + 0x4]
00606b98  CMP EAX,dword ptr [ECX + 0x188]
00606b9e  JGE 0x00606bad
00606ba0  MOV EDX,dword ptr [EBP + -0xc]
00606ba3  MOV EAX,dword ptr [EDX]
00606ba5  MOV ECX,dword ptr [EBP + -0xc]
00606ba8  MOV EDX,dword ptr [EAX + 0x10]
00606bab  CALL EDX
00606bad  MOV ESP,EBP
00606baf  POP EBP
00606bb0  RET
