; FUN_00615c70  00615c70
00615c70  PUSH EBP
00615c71  MOV EBP,ESP
00615c73  PUSH ECX
00615c74  MOV dword ptr [EBP + -0x4],ECX
00615c77  MOV EAX,dword ptr [EBP + 0x8]
00615c7a  PUSH EAX
00615c7b  MOV ECX,dword ptr [EBP + -0x4]
00615c7e  CALL 0x005f4ed0
00615c83  MOV ECX,dword ptr [EBP + 0x8]
00615c86  MOV byte ptr [ECX + 0x4],0x1
00615c8a  MOV EDX,dword ptr [EBP + -0x4]
00615c8d  MOV ECX,dword ptr [EDX + 0x184]
00615c93  CALL 0x00615160
00615c98  MOVZX EAX,AL
00615c9b  TEST EAX,EAX
00615c9d  JZ 0x00615cbc
00615c9f  MOV ECX,dword ptr [EBP + -0x4]
00615ca2  MOV EDX,dword ptr [ECX]
00615ca4  MOV ECX,dword ptr [EBP + -0x4]
00615ca7  MOV EAX,dword ptr [EDX + 0x4c]
00615caa  CALL EAX
00615cac  MOV ECX,dword ptr [EBP + 0x8]
00615caf  MOV EDX,dword ptr [ECX + 0x8]
00615cb2  SUB EDX,EAX
00615cb4  MOV EAX,dword ptr [EBP + -0x4]
00615cb7  MOV dword ptr [EAX + 0x2c],EDX
00615cba  JMP 0x00615cd7
00615cbc  MOV ECX,dword ptr [EBP + -0x4]
00615cbf  MOV EDX,dword ptr [ECX]
00615cc1  MOV ECX,dword ptr [EBP + -0x4]
00615cc4  MOV EAX,dword ptr [EDX + 0x54]
00615cc7  CALL EAX
00615cc9  MOV ECX,dword ptr [EBP + 0x8]
00615ccc  MOV EDX,dword ptr [ECX + 0xc]
00615ccf  SUB EDX,EAX
00615cd1  MOV EAX,dword ptr [EBP + -0x4]
00615cd4  MOV dword ptr [EAX + 0x30],EDX
00615cd7  MOV ESP,EBP
00615cd9  POP EBP
00615cda  RET 0x4
