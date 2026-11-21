; FUN_0044eca0  0044eca0
0044eca0  PUSH EBP
0044eca1  MOV EBP,ESP
0044eca3  SUB ESP,0x28
0044eca6  MOV dword ptr [EBP + -0x24],ECX
0044eca9  FLDZ
0044ecab  FSTP double ptr [EBP + -0x10]
0044ecae  LEA EAX,[EBP + -0x18]
0044ecb1  PUSH EAX
0044ecb2  MOV ECX,dword ptr [0x00790734]
0044ecb8  CALL 0x005daa20
0044ecbd  FILD dword ptr [EAX]
0044ecbf  FSTP double ptr [EBP + -0x8]
0044ecc2  MOV ECX,dword ptr [EBP + 0x8]
0044ecc5  PUSH ECX
0044ecc6  CALL 0x005dcb00
0044eccb  ADD ESP,0x4
0044ecce  MOV ECX,EAX
0044ecd0  CALL 0x005d5a50
0044ecd5  MOV dword ptr [EBP + -0x28],EAX
0044ecd8  FILD dword ptr [EBP + -0x28]
0044ecdb  FCOMP double ptr [EBP + -0x8]
0044ecde  FNSTSW AX
0044ece0  TEST AH,0x1
0044ece3  JNZ 0x0044ed10
0044ece5  LEA EDX,[EBP + -0x20]
0044ece8  PUSH EDX
0044ece9  MOV ECX,dword ptr [0x00790734]
0044ecef  CALL 0x005daae0
0044ecf4  FILD dword ptr [EAX]
0044ecf6  FSTP double ptr [EBP + -0x10]
0044ecf9  FLD double ptr [EBP + -0x10]
0044ecfc  FDIV double ptr [EBP + -0x8]
0044ecff  FCOMP double ptr [0x006b3e40]
0044ed05  FNSTSW AX
0044ed07  TEST AH,0x1
0044ed0a  JNZ 0x0044ed10
0044ed0c  MOV AL,0x1
0044ed0e  JMP 0x0044ed12
0044ed10  XOR AL,AL
0044ed12  MOV ESP,EBP
0044ed14  POP EBP
0044ed15  RET 0x4
