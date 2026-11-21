; FUN_005ced60  005ced60
005ced60  PUSH EBP
005ced61  MOV EBP,ESP
005ced63  PUSH ECX
005ced64  MOV dword ptr [EBP + -0x4],ECX
005ced67  MOV ECX,dword ptr [EBP + -0x4]
005ced6a  CALL 0x005f88f0
005ced6f  MOVZX EAX,AL
005ced72  TEST EAX,EAX
005ced74  JNZ 0x005ced81
005ced76  MOV ECX,dword ptr [EBP + 0x8]
005ced79  MOVZX EDX,byte ptr [ECX + 0x4]
005ced7d  TEST EDX,EDX
005ced7f  JZ 0x005ced86
005ced81  JMP 0x005cee0c
005ced86  MOV EAX,dword ptr [EBP + 0x8]
005ced89  CMP dword ptr [EAX + 0x18],0x4
005ced8d  JNZ 0x005ceda5
005ced8f  MOV ECX,dword ptr [EBP + 0x8]
005ced92  MOVSX EDX,byte ptr [ECX + 0x14]
005ced96  CMP EDX,0x1b
005ced99  JNZ 0x005ceda5
005ced9b  MOV EAX,dword ptr [EBP + -0x4]
005ced9e  MOV byte ptr [EAX + 0x1bc],0x1
005ceda5  MOV ECX,dword ptr [EBP + 0x8]
005ceda8  CMP dword ptr [ECX + 0x18],0x2
005cedac  JNZ 0x005cedb8
005cedae  MOV EDX,dword ptr [EBP + -0x4]
005cedb1  MOV byte ptr [EDX + 0x1bc],0x1
005cedb8  MOV EAX,dword ptr [EBP + -0x4]
005cedbb  MOVZX ECX,byte ptr [EAX + 0x1bc]
005cedc2  TEST ECX,ECX
005cedc4  JZ 0x005cee0c
005cedc6  MOV EDX,dword ptr [EBP + 0x8]
005cedc9  MOV byte ptr [EDX + 0x4],0x1
005cedcd  MOV ECX,dword ptr [0x007947e4]
005cedd3  CALL 0x005dc0a0
005cedd8  MOV ECX,dword ptr [0x007947e4]
005cedde  CALL 0x005dbf30
005cede3  MOV EAX,[0x0162ee84]
005cede8  MOV EDX,dword ptr [EAX]
005cedea  MOV ECX,dword ptr [0x0162ee84]
005cedf0  MOV EAX,dword ptr [EDX + 0x258]
005cedf6  CALL EAX
005cedf8  PUSH EAX
005cedf9  MOV ECX,dword ptr [0x0162ee84]
005cedff  MOV EDX,dword ptr [ECX]
005cee01  MOV ECX,dword ptr [0x0162ee84]
005cee07  MOV EAX,dword ptr [EDX + 0x34]
005cee0a  CALL EAX
005cee0c  MOV ESP,EBP
005cee0e  POP EBP
005cee0f  RET 0x4
