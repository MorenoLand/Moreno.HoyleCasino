; FUN_005dac90  005dac90
005dac90  PUSH EBP
005dac91  MOV EBP,ESP
005dac93  SUB ESP,0x38
005dac96  MOV dword ptr [EBP + -0x38],ECX
005dac99  MOV dword ptr [EBP + -0x4],0xffffffff
005daca0  MOV ECX,dword ptr [0x0162ee84]
005daca6  CALL 0x00636610
005dacab  MOV dword ptr [EBP + -0xc],EAX
005dacae  PUSH 0x0
005dacb0  PUSH 0x0
005dacb2  CALL 0x0064c8a0
005dacb7  ADD ESP,0x8
005dacba  MOV dword ptr [EBP + -0x1c],EAX
005dacbd  MOV dword ptr [EBP + -0x18],EDX
005dacc0  MOV EAX,dword ptr [EBP + -0x1c]
005dacc3  MOV dword ptr [EBP + -0x14],EAX
005dacc6  MOV ECX,dword ptr [EBP + -0x18]
005dacc9  MOV dword ptr [EBP + -0x10],ECX
005daccc  MOV ECX,dword ptr [EBP + -0x38]
005daccf  CALL 0x005daf50
005dacd4  CMP EAX,-0x1
005dacd7  JZ 0x005dace6
005dacd9  MOV ECX,dword ptr [EBP + -0x38]
005dacdc  CALL 0x005daf50
005dace1  JMP 0x005dad97
005dace6  MOV dword ptr [EBP + -0x8],0x0
005daced  JMP 0x005dacf8
005dacef  MOV EDX,dword ptr [EBP + -0x8]
005dacf2  ADD EDX,0x1
005dacf5  MOV dword ptr [EBP + -0x8],EDX
005dacf8  MOV EAX,dword ptr [EBP + -0x8]
005dacfb  CMP EAX,dword ptr [EBP + -0xc]
005dacfe  JGE 0x005dad94
005dad04  MOV ECX,dword ptr [EBP + -0x10]
005dad07  PUSH ECX
005dad08  MOV EDX,dword ptr [EBP + -0x14]
005dad0b  PUSH EDX
005dad0c  LEA EAX,[EBP + -0x24]
005dad0f  PUSH EAX
005dad10  MOV ECX,dword ptr [EBP + -0x8]
005dad13  PUSH ECX
005dad14  CALL 0x005dcb00
005dad19  ADD ESP,0x4
005dad1c  MOV ECX,EAX
005dad1e  CALL 0x005d5a90
005dad23  MOV ECX,EAX
005dad25  CALL 0x0064c6e0
005dad2a  MOVZX EDX,AL
005dad2d  TEST EDX,EDX
005dad2f  JZ 0x005dad5b
005dad31  LEA EAX,[EBP + -0x2c]
005dad34  PUSH EAX
005dad35  MOV ECX,dword ptr [EBP + -0x8]
005dad38  PUSH ECX
005dad39  CALL 0x005dcb00
005dad3e  ADD ESP,0x4
005dad41  MOV ECX,EAX
005dad43  CALL 0x005d5a90
005dad48  MOV EDX,dword ptr [EAX]
005dad4a  MOV EAX,dword ptr [EAX + 0x4]
005dad4d  MOV dword ptr [EBP + -0x14],EDX
005dad50  MOV dword ptr [EBP + -0x10],EAX
005dad53  MOV ECX,dword ptr [EBP + -0x8]
005dad56  MOV dword ptr [EBP + -0x4],ECX
005dad59  JMP 0x005dad8f
005dad5b  MOV EDX,dword ptr [EBP + -0x10]
005dad5e  PUSH EDX
005dad5f  MOV EAX,dword ptr [EBP + -0x14]
005dad62  PUSH EAX
005dad63  LEA ECX,[EBP + -0x34]
005dad66  PUSH ECX
005dad67  MOV EDX,dword ptr [EBP + -0x8]
005dad6a  PUSH EDX
005dad6b  CALL 0x005dcb00
005dad70  ADD ESP,0x4
005dad73  MOV ECX,EAX
005dad75  CALL 0x005d5a90
005dad7a  MOV ECX,EAX
005dad7c  CALL 0x0064c720
005dad81  MOVZX EAX,AL
005dad84  TEST EAX,EAX
005dad86  JZ 0x005dad8f
005dad88  MOV dword ptr [EBP + -0x4],0xffffffff
005dad8f  JMP 0x005dacef
005dad94  MOV EAX,dword ptr [EBP + -0x4]
005dad97  MOV ESP,EBP
005dad99  POP EBP
005dad9a  RET
