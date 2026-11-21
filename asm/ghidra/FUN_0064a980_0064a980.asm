; FUN_0064a980  0064a980
0064a980  PUSH EBP
0064a981  MOV EBP,ESP
0064a983  PUSH ECX
0064a984  MOV dword ptr [EBP + -0x4],ECX
0064a987  MOV EAX,dword ptr [EBP + -0x4]
0064a98a  MOVZX ECX,byte ptr [EAX + 0x18]
0064a98e  TEST ECX,ECX
0064a990  JNZ 0x0064a997
0064a992  JMP 0x0064aa40
0064a997  MOV EDX,dword ptr [EBP + -0x4]
0064a99a  MOV EAX,dword ptr [EDX]
0064a99c  MOV ECX,dword ptr [EBP + -0x4]
0064a99f  MOV EDX,dword ptr [EAX + 0xc]
0064a9a2  CALL EDX
0064a9a4  MOVZX EAX,AL
0064a9a7  TEST EAX,EAX
0064a9a9  JZ 0x0064aa40
0064a9af  MOV ECX,dword ptr [EBP + -0x4]
0064a9b2  MOV EDX,dword ptr [ECX + 0x428]
0064a9b8  ADD EDX,0x1
0064a9bb  MOV EAX,dword ptr [EBP + -0x4]
0064a9be  MOV dword ptr [EAX + 0x428],EDX
0064a9c4  MOV ECX,dword ptr [EBP + -0x4]
0064a9c7  MOV EDX,dword ptr [EBP + -0x4]
0064a9ca  MOV EAX,dword ptr [ECX + 0x428]
0064a9d0  CMP EAX,dword ptr [EDX + 0x424]
0064a9d6  JL 0x0064a9e7
0064a9d8  MOV ECX,dword ptr [EBP + -0x4]
0064a9db  MOV EDX,dword ptr [ECX]
0064a9dd  MOV ECX,dword ptr [EBP + -0x4]
0064a9e0  MOV EAX,dword ptr [EDX + 0x14]
0064a9e3  CALL EAX
0064a9e5  JMP 0x0064aa40
0064a9e7  MOV ECX,dword ptr [EBP + -0x4]
0064a9ea  MOV EDX,dword ptr [ECX + 0x1c]
0064a9ed  MOV byte ptr [EDX + 0x5c],0x1
0064a9f1  MOV EAX,dword ptr [EBP + -0x4]
0064a9f4  MOV ECX,dword ptr [EAX + 0x428]
0064a9fa  MOV EDX,dword ptr [EBP + -0x4]
0064a9fd  MOVZX EAX,byte ptr [EDX + ECX*0x2 + 0x24]
0064aa02  PUSH EAX
0064aa03  MOV ECX,dword ptr [EBP + -0x4]
0064aa06  MOV EDX,dword ptr [ECX + 0x4]
0064aa09  MOV EAX,dword ptr [EBP + -0x4]
0064aa0c  MOV ECX,dword ptr [EAX + 0x4]
0064aa0f  MOV EDX,dword ptr [EDX]
0064aa11  MOV EAX,dword ptr [EDX + 0xb0]
0064aa17  CALL EAX
0064aa19  MOV ECX,dword ptr [0x015e55e8]
0064aa1f  CALL 0x005f3e50
0064aa24  MOV ECX,dword ptr [EBP + -0x4]
0064aa27  MOV EDX,dword ptr [ECX + 0x428]
0064aa2d  MOV ECX,dword ptr [EBP + -0x4]
0064aa30  MOVZX EDX,byte ptr [ECX + EDX*0x2 + 0x25]
0064aa35  ADD EAX,EDX
0064aa37  MOV ECX,dword ptr [EBP + -0x4]
0064aa3a  MOV dword ptr [ECX + 0x438],EAX
0064aa40  MOV ESP,EBP
0064aa42  POP EBP
0064aa43  RET
