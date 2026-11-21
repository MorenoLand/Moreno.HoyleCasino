; FUN_0068eb50  0068eb50
0068eb50  PUSH EBP
0068eb51  MOV EBP,ESP
0068eb53  SUB ESP,0x10
0068eb56  MOV dword ptr [EBP + -0x10],ECX
0068eb59  MOV EAX,dword ptr [EBP + 0x8]
0068eb5c  MOV ECX,dword ptr [EAX + 0x8]
0068eb5f  MOV dword ptr [EBP + -0x4],ECX
0068eb62  MOV EDX,dword ptr [EBP + 0x8]
0068eb65  MOV EAX,dword ptr [EBP + -0x4]
0068eb68  MOV ECX,dword ptr [EAX]
0068eb6a  MOV dword ptr [EDX + 0x8],ECX
0068eb6d  MOV EDX,dword ptr [EBP + -0x4]
0068eb70  MOV EAX,dword ptr [EDX]
0068eb72  MOVSX ECX,byte ptr [EAX + 0x45]
0068eb76  TEST ECX,ECX
0068eb78  JNZ 0x0068eb85
0068eb7a  MOV EDX,dword ptr [EBP + -0x4]
0068eb7d  MOV EAX,dword ptr [EDX]
0068eb7f  MOV ECX,dword ptr [EBP + 0x8]
0068eb82  MOV dword ptr [EAX + 0x4],ECX
0068eb85  MOV EDX,dword ptr [EBP + -0x4]
0068eb88  MOV EAX,dword ptr [EBP + 0x8]
0068eb8b  MOV ECX,dword ptr [EAX + 0x4]
0068eb8e  MOV dword ptr [EDX + 0x4],ECX
0068eb91  MOV EDX,dword ptr [EBP + -0x10]
0068eb94  MOV EAX,dword ptr [EDX + 0x4]
0068eb97  MOV ECX,dword ptr [EBP + 0x8]
0068eb9a  CMP ECX,dword ptr [EAX + 0x4]
0068eb9d  JNZ 0x0068ebad
0068eb9f  MOV EDX,dword ptr [EBP + -0x10]
0068eba2  MOV EAX,dword ptr [EDX + 0x4]
0068eba5  MOV ECX,dword ptr [EBP + -0x4]
0068eba8  MOV dword ptr [EAX + 0x4],ECX
0068ebab  JMP 0x0068ebdf
0068ebad  MOV EDX,dword ptr [EBP + 0x8]
0068ebb0  MOV EAX,dword ptr [EDX + 0x4]
0068ebb3  MOV dword ptr [EBP + -0x8],EAX
0068ebb6  MOV ECX,dword ptr [EBP + -0x8]
0068ebb9  MOV EDX,dword ptr [EBP + 0x8]
0068ebbc  CMP EDX,dword ptr [ECX]
0068ebbe  JNZ 0x0068ebd3
0068ebc0  MOV EAX,dword ptr [EBP + 0x8]
0068ebc3  MOV ECX,dword ptr [EAX + 0x4]
0068ebc6  MOV dword ptr [EBP + -0xc],ECX
0068ebc9  MOV EDX,dword ptr [EBP + -0xc]
0068ebcc  MOV EAX,dword ptr [EBP + -0x4]
0068ebcf  MOV dword ptr [EDX],EAX
0068ebd1  JMP 0x0068ebdf
0068ebd3  MOV ECX,dword ptr [EBP + 0x8]
0068ebd6  MOV EDX,dword ptr [ECX + 0x4]
0068ebd9  MOV EAX,dword ptr [EBP + -0x4]
0068ebdc  MOV dword ptr [EDX + 0x8],EAX
0068ebdf  MOV ECX,dword ptr [EBP + -0x4]
0068ebe2  MOV EDX,dword ptr [EBP + 0x8]
0068ebe5  MOV dword ptr [ECX],EDX
0068ebe7  MOV EAX,dword ptr [EBP + 0x8]
0068ebea  MOV ECX,dword ptr [EBP + -0x4]
0068ebed  MOV dword ptr [EAX + 0x4],ECX
0068ebf0  MOV ESP,EBP
0068ebf2  POP EBP
0068ebf3  RET 0x4
