; FUN_0058def0  0058def0
0058def0  PUSH EBP
0058def1  MOV EBP,ESP
0058def3  PUSH ECX
0058def4  MOV dword ptr [EBP + -0x4],ECX
0058def7  MOV EAX,dword ptr [EBP + -0x4]
0058defa  MOV byte ptr [EAX + 0x49],0x0
0058defe  MOV ECX,dword ptr [EBP + -0x4]
0058df01  MOV byte ptr [ECX + 0x48],0x0
0058df05  MOV EDX,dword ptr [EBP + -0x4]
0058df08  MOV EAX,dword ptr [EDX + 0x60]
0058df0b  MOV ECX,dword ptr [EBP + -0x4]
0058df0e  MOV ECX,dword ptr [ECX + 0x60]
0058df11  MOV EDX,dword ptr [EAX]
0058df13  MOV EAX,dword ptr [EDX + 0x70]
0058df16  CALL EAX
0058df18  MOV ECX,dword ptr [EBP + -0x4]
0058df1b  MOV EDX,dword ptr [ECX + 0x60]
0058df1e  MOV EAX,dword ptr [EBP + -0x4]
0058df21  MOV ECX,dword ptr [EAX + 0x60]
0058df24  MOV EDX,dword ptr [EDX]
0058df26  MOV EAX,dword ptr [EDX + 0xd0]
0058df2c  CALL EAX
0058df2e  MOV ECX,dword ptr [EBP + -0x4]
0058df31  MOV EDX,dword ptr [ECX + 0x5c]
0058df34  MOV EAX,dword ptr [EBP + -0x4]
0058df37  MOV ECX,dword ptr [EAX + 0x5c]
0058df3a  MOV EDX,dword ptr [EDX]
0058df3c  MOV EAX,dword ptr [EDX + 0x70]
0058df3f  CALL EAX
0058df41  MOV ECX,dword ptr [EBP + -0x4]
0058df44  MOV EDX,dword ptr [ECX + 0x5c]
0058df47  MOV EAX,dword ptr [EBP + -0x4]
0058df4a  MOV ECX,dword ptr [EAX + 0x5c]
0058df4d  MOV EDX,dword ptr [EDX]
0058df4f  MOV EAX,dword ptr [EDX + 0xd0]
0058df55  CALL EAX
0058df57  MOV ESP,EBP
0058df59  POP EBP
0058df5a  RET
