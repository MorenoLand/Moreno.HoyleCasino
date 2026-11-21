; FUN_004fd930  004fd930
004fd930  PUSH EBP
004fd931  MOV EBP,ESP
004fd933  PUSH ECX
004fd934  MOV dword ptr [EBP + -0x4],ECX
004fd937  CMP dword ptr [EBP + 0x8],0x0
004fd93b  JNZ 0x004fd941
004fd93d  XOR AL,AL
004fd93f  JMP 0x004fd9a0
004fd941  MOV ECX,dword ptr [0x00791364]
004fd947  CALL 0x0047f950
004fd94c  MOV ECX,dword ptr [EBP + 0x8]
004fd94f  MOV dword ptr [ECX],EAX
004fd951  MOV EDX,dword ptr [EBP + 0x8]
004fd954  MOV dword ptr [EDX + 0x4],0x1
004fd95b  MOV ECX,dword ptr [0x00791364]
004fd961  CALL 0x0047f950
004fd966  MOV ECX,dword ptr [EBP + 0x8]
004fd969  MOV dword ptr [ECX + 0x8],EAX
004fd96c  MOV EDX,dword ptr [EBP + 0x8]
004fd96f  MOV dword ptr [EDX + 0xc],0x1
004fd976  MOV EAX,dword ptr [EBP + 0x8]
004fd979  MOV dword ptr [EAX + 0x10],0x1
004fd980  MOV ECX,dword ptr [EBP + 0x8]
004fd983  MOV dword ptr [ECX + 0x14],0x0
004fd98a  MOV ECX,dword ptr [0x00791364]
004fd990  CALL 0x0047f950
004fd995  SUB EAX,0x1
004fd998  MOV EDX,dword ptr [EBP + 0x8]
004fd99b  MOV dword ptr [EDX + 0x18],EAX
004fd99e  MOV AL,0x1
004fd9a0  MOV ESP,EBP
004fd9a2  POP EBP
004fd9a3  RET 0x8
