; FUN_00600e30  00600e30
00600e30  PUSH EBP
00600e31  MOV EBP,ESP
00600e33  SUB ESP,0x8
00600e36  MOV dword ptr [EBP + -0x8],ECX
00600e39  MOV EAX,dword ptr [EBP + -0x8]
00600e3c  MOVZX ECX,byte ptr [EAX + 0x18]
00600e40  TEST ECX,ECX
00600e42  JNZ 0x00600e46
00600e44  JMP 0x00600ec2
00600e46  MOV EDX,dword ptr [EBP + -0x8]
00600e49  MOV EAX,dword ptr [EDX]
00600e4b  MOV ECX,dword ptr [EBP + -0x8]
00600e4e  MOV EDX,dword ptr [EAX + 0x10]
00600e51  CALL EDX
00600e53  MOV dword ptr [EBP + -0x4],EAX
00600e56  MOV EAX,dword ptr [EBP + -0x8]
00600e59  MOV ECX,dword ptr [EAX + 0x4]
00600e5c  CALL 0x005eb220
00600e61  CMP EAX,dword ptr [EBP + -0x4]
00600e64  JZ 0x00600ec2
00600e66  MOV ECX,dword ptr [EBP + -0x8]
00600e69  MOV EDX,dword ptr [EBP + -0x4]
00600e6c  CMP EDX,dword ptr [ECX + 0x1c]
00600e6f  JZ 0x00600e7a
00600e71  MOV EAX,dword ptr [EBP + -0x8]
00600e74  CMP dword ptr [EAX + 0x1c],-0x1
00600e78  JNZ 0x00600ea8
00600e7a  MOV ECX,dword ptr [EBP + -0x8]
00600e7d  MOV EDX,dword ptr [ECX + 0x1c]
00600e80  PUSH EDX
00600e81  MOV EAX,dword ptr [EBP + -0x8]
00600e84  MOV ECX,dword ptr [EAX + 0x4]
00600e87  MOV EDX,dword ptr [EBP + -0x8]
00600e8a  MOV EAX,dword ptr [EDX + 0x4]
00600e8d  MOV EDX,dword ptr [ECX]
00600e8f  MOV ECX,EAX
00600e91  MOV EAX,dword ptr [EDX + 0xb0]
00600e97  CALL EAX
00600e99  MOV ECX,dword ptr [EBP + -0x8]
00600e9c  MOV EDX,dword ptr [ECX]
00600e9e  MOV ECX,dword ptr [EBP + -0x8]
00600ea1  MOV EAX,dword ptr [EDX + 0x14]
00600ea4  CALL EAX
00600ea6  JMP 0x00600ec2
00600ea8  MOV ECX,dword ptr [EBP + -0x4]
00600eab  PUSH ECX
00600eac  MOV EDX,dword ptr [EBP + -0x8]
00600eaf  MOV EAX,dword ptr [EDX + 0x4]
00600eb2  MOV ECX,dword ptr [EBP + -0x8]
00600eb5  MOV ECX,dword ptr [ECX + 0x4]
00600eb8  MOV EDX,dword ptr [EAX]
00600eba  MOV EAX,dword ptr [EDX + 0xb0]
00600ec0  CALL EAX
00600ec2  MOV ESP,EBP
00600ec4  POP EBP
00600ec5  RET
