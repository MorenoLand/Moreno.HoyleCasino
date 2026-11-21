; FUN_005ef050  005ef050
005ef050  PUSH EBP
005ef051  MOV EBP,ESP
005ef053  SUB ESP,0x18
005ef056  MOV dword ptr [EBP + -0x10],ECX
005ef059  MOV dword ptr [EBP + -0x8],0x0
005ef060  MOV dword ptr [EBP + -0x4],0x0
005ef067  JMP 0x005ef072
005ef069  MOV EAX,dword ptr [EBP + -0x4]
005ef06c  ADD EAX,0x1
005ef06f  MOV dword ptr [EBP + -0x4],EAX
005ef072  MOV ECX,dword ptr [EBP + -0x10]
005ef075  MOV EDX,dword ptr [ECX + 0x5c]
005ef078  MOV EAX,dword ptr [EBP + -0x4]
005ef07b  MOVZX ECX,byte ptr [EDX + EAX*0x1]
005ef07f  TEST ECX,ECX
005ef081  JZ 0x005ef120
005ef087  MOV EDX,dword ptr [EBP + -0x10]
005ef08a  MOV EAX,dword ptr [EDX + 0x5c]
005ef08d  MOV ECX,dword ptr [EBP + -0x4]
005ef090  MOVZX EDX,byte ptr [EAX + ECX*0x1]
005ef094  CMP EDX,0xa
005ef097  JNZ 0x005ef0a2
005ef099  MOV dword ptr [EBP + -0x14],0x20
005ef0a0  JMP 0x005ef0b2
005ef0a2  MOV EAX,dword ptr [EBP + -0x10]
005ef0a5  MOV ECX,dword ptr [EAX + 0x5c]
005ef0a8  MOV EDX,dword ptr [EBP + -0x4]
005ef0ab  MOVZX EAX,byte ptr [ECX + EDX*0x1]
005ef0af  MOV dword ptr [EBP + -0x14],EAX
005ef0b2  MOV CL,byte ptr [EBP + -0x14]
005ef0b5  MOV byte ptr [EBP + -0x9],CL
005ef0b8  MOV EDX,dword ptr [EBP + -0x10]
005ef0bb  MOV EAX,dword ptr [EDX + 0x5c]
005ef0be  MOV ECX,dword ptr [EBP + -0x4]
005ef0c1  MOVZX EDX,byte ptr [EAX + ECX*0x1 + 0x1]
005ef0c6  TEST EDX,EDX
005ef0c8  JZ 0x005ef0dd
005ef0ca  MOV EAX,dword ptr [EBP + -0x10]
005ef0cd  MOV ECX,dword ptr [EAX + 0x5c]
005ef0d0  MOV EDX,dword ptr [EBP + -0x4]
005ef0d3  MOVZX EAX,byte ptr [ECX + EDX*0x1 + 0x1]
005ef0d8  MOV dword ptr [EBP + -0x18],EAX
005ef0db  JMP 0x005ef0e4
005ef0dd  MOV dword ptr [EBP + -0x18],0xffffffff
005ef0e4  MOV ECX,dword ptr [EBP + -0x18]
005ef0e7  PUSH ECX
005ef0e8  MOV DL,byte ptr [EBP + -0x9]
005ef0eb  PUSH EDX
005ef0ec  MOV ECX,dword ptr [EBP + -0x10]
005ef0ef  CALL 0x005ee950
005ef0f4  MOV ECX,dword ptr [EBP + -0x10]
005ef0f7  MOVZX EDX,word ptr [ECX + 0x90]
005ef0fe  SUB EAX,EDX
005ef100  MOV ECX,dword ptr [EBP + -0x10]
005ef103  MOVSX EDX,word ptr [ECX + 0x94]
005ef10a  ADD EAX,EDX
005ef10c  MOV ECX,dword ptr [EBP + -0x10]
005ef10f  ADD EAX,dword ptr [ECX + 0xa8]
005ef115  ADD EAX,dword ptr [EBP + -0x8]
005ef118  MOV dword ptr [EBP + -0x8],EAX
005ef11b  JMP 0x005ef069
005ef120  MOV EAX,dword ptr [EBP + -0x8]
005ef123  MOV ESP,EBP
005ef125  POP EBP
005ef126  RET
