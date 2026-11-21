; FUN_00584e60  00584e60
00584e60  PUSH EBP
00584e61  MOV EBP,ESP
00584e63  PUSH ECX
00584e64  MOV dword ptr [EBP + -0x4],ECX
00584e67  MOV EAX,dword ptr [EBP + 0x8]
00584e6a  PUSH EAX
00584e6b  MOV ECX,dword ptr [EBP + -0x4]
00584e6e  CALL 0x005f5300
00584e73  MOV ECX,dword ptr [EBP + 0x8]
00584e76  ADD ECX,0x1
00584e79  PUSH ECX
00584e7a  MOV EDX,dword ptr [EBP + -0x4]
00584e7d  MOV EAX,dword ptr [EDX + 0x5c]
00584e80  MOV ECX,dword ptr [EBP + -0x4]
00584e83  MOV ECX,dword ptr [ECX + 0x5c]
00584e86  MOV EDX,dword ptr [EAX]
00584e88  MOV EAX,dword ptr [EDX + 0x6c]
00584e8b  CALL EAX
00584e8d  MOV ECX,dword ptr [EBP + 0x8]
00584e90  ADD ECX,0x1
00584e93  PUSH ECX
00584e94  MOV EDX,dword ptr [EBP + -0x4]
00584e97  MOV EAX,dword ptr [EDX + 0x60]
00584e9a  MOV ECX,dword ptr [EBP + -0x4]
00584e9d  MOV ECX,dword ptr [ECX + 0x60]
00584ea0  MOV EDX,dword ptr [EAX]
00584ea2  MOV EAX,dword ptr [EDX + 0x6c]
00584ea5  CALL EAX
00584ea7  MOV ECX,dword ptr [EBP + 0x8]
00584eaa  ADD ECX,0x1
00584ead  PUSH ECX
00584eae  MOV EDX,dword ptr [EBP + -0x4]
00584eb1  MOV EAX,dword ptr [EDX + 0x64]
00584eb4  MOV ECX,dword ptr [EBP + -0x4]
00584eb7  MOV ECX,dword ptr [ECX + 0x64]
00584eba  MOV EDX,dword ptr [EAX]
00584ebc  MOV EAX,dword ptr [EDX + 0x6c]
00584ebf  CALL EAX
00584ec1  MOV ESP,EBP
00584ec3  POP EBP
00584ec4  RET 0x4
