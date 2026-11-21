; FUN_005daec0  005daec0
005daec0  PUSH EBP
005daec1  MOV EBP,ESP
005daec3  SUB ESP,0x10
005daec6  PUSH ESI
005daec7  MOV dword ptr [EBP + -0x10],ECX
005daeca  MOV dword ptr [EBP + -0xc],0x0
005daed1  MOV ECX,dword ptr [0x0162ee84]
005daed7  CALL 0x00636610
005daedc  MOV dword ptr [EBP + -0x8],EAX
005daedf  MOV dword ptr [EBP + -0x4],0x0
005daee6  JMP 0x005daef1
005daee8  MOV EAX,dword ptr [EBP + -0x4]
005daeeb  ADD EAX,0x1
005daeee  MOV dword ptr [EBP + -0x4],EAX
005daef1  MOV ECX,dword ptr [EBP + -0x4]
005daef4  CMP ECX,dword ptr [EBP + -0x8]
005daef7  JGE 0x005daf44
005daef9  MOV EDX,dword ptr [EBP + -0x4]
005daefc  PUSH EDX
005daefd  CALL 0x005dcb00
005daf02  ADD ESP,0x4
005daf05  MOV ECX,EAX
005daf07  CALL 0x005d5a50
005daf0c  TEST EAX,EAX
005daf0e  JLE 0x005daf42
005daf10  MOV EAX,dword ptr [EBP + -0x4]
005daf13  PUSH EAX
005daf14  CALL 0x005dcb00
005daf19  ADD ESP,0x4
005daf1c  MOV ECX,EAX
005daf1e  CALL 0x005d5a50
005daf23  MOV ESI,EAX
005daf25  MOV ECX,dword ptr [EBP + -0x10]
005daf28  MOV EDX,dword ptr [ECX]
005daf2a  MOV ECX,dword ptr [EBP + -0x10]
005daf2d  MOV EAX,dword ptr [EDX + 0x2b0]
005daf33  CALL EAX
005daf35  CMP ESI,EAX
005daf37  JL 0x005daf42
005daf39  MOV ECX,dword ptr [EBP + -0xc]
005daf3c  ADD ECX,0x1
005daf3f  MOV dword ptr [EBP + -0xc],ECX
005daf42  JMP 0x005daee8
005daf44  MOV EAX,dword ptr [EBP + -0xc]
005daf47  POP ESI
005daf48  MOV ESP,EBP
005daf4a  POP EBP
005daf4b  RET
