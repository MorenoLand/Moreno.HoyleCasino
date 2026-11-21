; FUN_0060db40  0060db40
0060db40  PUSH EBP
0060db41  MOV EBP,ESP
0060db43  SUB ESP,0x8
0060db46  MOV dword ptr [EBP + -0x8],ECX
0060db49  MOV EAX,dword ptr [EBP + -0x8]
0060db4c  MOV EDX,dword ptr [EAX]
0060db4e  MOV ECX,dword ptr [EBP + -0x8]
0060db51  MOV EAX,dword ptr [EDX + 0x2c]
0060db54  CALL EAX
0060db56  MOVZX ECX,AL
0060db59  TEST ECX,ECX
0060db5b  JNZ 0x0060db74
0060db5d  PUSH 0x6
0060db5f  MOV EDX,dword ptr [EBP + -0x8]
0060db62  MOV EAX,dword ptr [EDX + 0x8c]
0060db68  PUSH EAX
0060db69  CALL dword ptr [0x006b23dc]
0060db6f  JMP 0x0060dbf8
0060db74  PUSH 0x0
0060db76  PUSH 0x75ee04
0060db7b  PUSH 0x75edec
0060db80  PUSH 0x0
0060db82  MOV ECX,dword ptr [0x007960d8]
0060db88  MOV EDX,dword ptr [ECX + 0x10]
0060db8b  PUSH EDX
0060db8c  CALL 0x00686ede
0060db91  ADD ESP,0x14
0060db94  MOV dword ptr [EBP + -0x4],EAX
0060db97  MOV EAX,dword ptr [EBP + -0x4]
0060db9a  MOV EDX,dword ptr [EAX]
0060db9c  MOV ECX,dword ptr [EBP + -0x4]
0060db9f  MOV EAX,dword ptr [EDX + 0x30]
0060dba2  CALL EAX
0060dba4  MOVZX ECX,AL
0060dba7  TEST ECX,ECX
0060dba9  JZ 0x0060dbbc
0060dbab  PUSH 0x1
0060dbad  MOV EDX,dword ptr [EBP + -0x4]
0060dbb0  MOV EAX,dword ptr [EDX]
0060dbb2  MOV ECX,dword ptr [EBP + -0x4]
0060dbb5  MOV EDX,dword ptr [EAX + 0x24]
0060dbb8  CALL EDX
0060dbba  JMP 0x0060dbf8
0060dbbc  MOV EAX,dword ptr [EBP + -0x4]
0060dbbf  MOV ECX,dword ptr [EAX + 0x8c]
0060dbc5  PUSH ECX
0060dbc6  CALL 0x0060dc00
0060dbcb  ADD ESP,0x4
0060dbce  MOVZX EDX,AL
0060dbd1  TEST EDX,EDX
0060dbd3  JZ 0x0060dbe9
0060dbd5  MOV EAX,dword ptr [EBP + -0x4]
0060dbd8  MOV ECX,dword ptr [EAX + 0x8c]
0060dbde  PUSH ECX
0060dbdf  CALL 0x0060dc50
0060dbe4  ADD ESP,0x4
0060dbe7  JMP 0x0060dbeb
0060dbe9  JMP 0x0060dbf8
0060dbeb  MOV EDX,dword ptr [EBP + -0x4]
0060dbee  MOV EAX,dword ptr [EDX]
0060dbf0  MOV ECX,dword ptr [EBP + -0x4]
0060dbf3  MOV EDX,dword ptr [EAX + 0x20]
0060dbf6  CALL EDX
0060dbf8  MOV ESP,EBP
0060dbfa  POP EBP
0060dbfb  RET
