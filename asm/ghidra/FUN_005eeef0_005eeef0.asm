; FUN_005eeef0  005eeef0
005eeef0  PUSH EBP
005eeef1  MOV EBP,ESP
005eeef3  SUB ESP,0xc
005eeef6  MOV dword ptr [EBP + -0xc],ECX
005eeef9  MOV dword ptr [EBP + -0x8],0x0
005eef00  MOV dword ptr [EBP + -0x4],0x0
005eef07  JMP 0x005eef12
005eef09  MOV EAX,dword ptr [EBP + -0x4]
005eef0c  ADD EAX,0x1
005eef0f  MOV dword ptr [EBP + -0x4],EAX
005eef12  MOV ECX,dword ptr [EBP + -0xc]
005eef15  MOV EDX,dword ptr [ECX + 0x5c]
005eef18  MOV EAX,dword ptr [EBP + -0x4]
005eef1b  MOVZX ECX,byte ptr [EDX + EAX*0x1]
005eef1f  TEST ECX,ECX
005eef21  JZ 0x005eef40
005eef23  MOV EDX,dword ptr [EBP + -0xc]
005eef26  MOV EAX,dword ptr [EDX + 0x5c]
005eef29  MOV ECX,dword ptr [EBP + -0x4]
005eef2c  MOVZX EDX,byte ptr [EAX + ECX*0x1]
005eef30  CMP EDX,0xa
005eef33  JNZ 0x005eef3e
005eef35  MOV EAX,dword ptr [EBP + -0x8]
005eef38  ADD EAX,0x1
005eef3b  MOV dword ptr [EBP + -0x8],EAX
005eef3e  JMP 0x005eef09
005eef40  MOV ECX,dword ptr [EBP + -0xc]
005eef43  MOVSX EAX,word ptr [ECX + 0x96]
005eef4a  MOV EDX,dword ptr [EBP + -0xc]
005eef4d  MOVSX ECX,word ptr [EDX + 0x96]
005eef54  IMUL ECX,dword ptr [EBP + -0x8]
005eef58  ADD EAX,ECX
005eef5a  MOV ESP,EBP
005eef5c  POP EBP
005eef5d  RET
