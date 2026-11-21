; FUN_005daf50  005daf50
005daf50  PUSH EBP
005daf51  MOV EBP,ESP
005daf53  SUB ESP,0x14
005daf56  PUSH ESI
005daf57  MOV dword ptr [EBP + -0x14],ECX
005daf5a  MOV dword ptr [EBP + -0x8],0x0
005daf61  MOV dword ptr [EBP + -0x10],0xffffffff
005daf68  MOV ECX,dword ptr [0x0162ee84]
005daf6e  CALL 0x00636610
005daf73  MOV dword ptr [EBP + -0xc],EAX
005daf76  MOV dword ptr [EBP + -0x4],0x0
005daf7d  JMP 0x005daf88
005daf7f  MOV EAX,dword ptr [EBP + -0x4]
005daf82  ADD EAX,0x1
005daf85  MOV dword ptr [EBP + -0x4],EAX
005daf88  MOV ECX,dword ptr [EBP + -0x4]
005daf8b  CMP ECX,dword ptr [EBP + -0xc]
005daf8e  JGE 0x005dafe1
005daf90  MOV EDX,dword ptr [EBP + -0x4]
005daf93  PUSH EDX
005daf94  CALL 0x005dcb00
005daf99  ADD ESP,0x4
005daf9c  MOV ECX,EAX
005daf9e  CALL 0x005d5a50
005dafa3  TEST EAX,EAX
005dafa5  JLE 0x005dafdf
005dafa7  MOV EAX,dword ptr [EBP + -0x4]
005dafaa  PUSH EAX
005dafab  CALL 0x005dcb00
005dafb0  ADD ESP,0x4
005dafb3  MOV ECX,EAX
005dafb5  CALL 0x005d5a50
005dafba  MOV ESI,EAX
005dafbc  MOV ECX,dword ptr [EBP + -0x14]
005dafbf  MOV EDX,dword ptr [ECX]
005dafc1  MOV ECX,dword ptr [EBP + -0x14]
005dafc4  MOV EAX,dword ptr [EDX + 0x2b0]
005dafca  CALL EAX
005dafcc  CMP ESI,EAX
005dafce  JL 0x005dafdf
005dafd0  MOV ECX,dword ptr [EBP + -0x8]
005dafd3  ADD ECX,0x1
005dafd6  MOV dword ptr [EBP + -0x8],ECX
005dafd9  MOV EDX,dword ptr [EBP + -0x4]
005dafdc  MOV dword ptr [EBP + -0x10],EDX
005dafdf  JMP 0x005daf7f
005dafe1  CMP dword ptr [EBP + -0x8],0x1
005dafe5  JNZ 0x005dafec
005dafe7  MOV EAX,dword ptr [EBP + -0x10]
005dafea  JMP 0x005dafef
005dafec  OR EAX,0xffffffff
005dafef  POP ESI
005daff0  MOV ESP,EBP
005daff2  POP EBP
005daff3  RET
