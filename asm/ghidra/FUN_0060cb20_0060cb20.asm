; FUN_0060cb20  0060cb20
0060cb20  PUSH EBP
0060cb21  MOV EBP,ESP
0060cb23  SUB ESP,0x8
0060cb26  MOV dword ptr [EBP + -0x8],ECX
0060cb29  MOV EAX,dword ptr [EBP + 0x8]
0060cb2c  PUSH EAX
0060cb2d  MOV ECX,dword ptr [EBP + -0x8]
0060cb30  CALL 0x0060cac0
0060cb35  MOV dword ptr [EBP + -0x4],EAX
0060cb38  CMP dword ptr [EBP + -0x4],-0x1
0060cb3c  JLE 0x0060cba9
0060cb3e  MOV ECX,dword ptr [EBP + -0x8]
0060cb41  MOV EDX,dword ptr [EBP + -0x8]
0060cb44  MOV EAX,dword ptr [ECX + 0x4]
0060cb47  CMP EAX,dword ptr [EDX + 0x8]
0060cb4a  JNZ 0x0060cb54
0060cb4c  MOV ECX,dword ptr [EBP + -0x8]
0060cb4f  CALL 0x0060c720
0060cb54  MOV ECX,dword ptr [EBP + -0x8]
0060cb57  MOV EDX,dword ptr [ECX + 0x4]
0060cb5a  SUB EDX,dword ptr [EBP + -0x4]
0060cb5d  LEA EAX,[EDX*0x4 + 0xfffffffc]
0060cb64  PUSH EAX
0060cb65  MOV ECX,dword ptr [EBP + -0x8]
0060cb68  MOV EDX,dword ptr [ECX + 0xc]
0060cb6b  MOV EAX,dword ptr [EBP + -0x4]
0060cb6e  LEA ECX,[EDX + EAX*0x4 + 0x4]
0060cb72  PUSH ECX
0060cb73  MOV EDX,dword ptr [EBP + -0x8]
0060cb76  MOV EAX,dword ptr [EDX + 0xc]
0060cb79  MOV ECX,dword ptr [EBP + -0x4]
0060cb7c  LEA EDX,[EAX + ECX*0x4 + 0x8]
0060cb80  PUSH EDX
0060cb81  CALL dword ptr [0x006b22d8]
0060cb87  ADD ESP,0xc
0060cb8a  MOV EAX,dword ptr [EBP + -0x8]
0060cb8d  MOV ECX,dword ptr [EAX + 0xc]
0060cb90  MOV EDX,dword ptr [EBP + -0x4]
0060cb93  MOV EAX,dword ptr [EBP + 0xc]
0060cb96  MOV dword ptr [ECX + EDX*0x4 + 0x4],EAX
0060cb9a  MOV ECX,dword ptr [EBP + -0x8]
0060cb9d  MOV EDX,dword ptr [ECX + 0x4]
0060cba0  ADD EDX,0x1
0060cba3  MOV EAX,dword ptr [EBP + -0x8]
0060cba6  MOV dword ptr [EAX + 0x4],EDX
0060cba9  MOV ESP,EBP
0060cbab  POP EBP
0060cbac  RET 0x8
