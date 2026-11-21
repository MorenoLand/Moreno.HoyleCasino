; FUN_0053ff40  0053ff40
0053ff40  PUSH EBP
0053ff41  MOV EBP,ESP
0053ff43  SUB ESP,0x18
0053ff46  MOV dword ptr [EBP + -0x18],ECX
0053ff49  PUSH 0xf
0053ff4b  MOV ECX,dword ptr [EBP + 0x8]
0053ff4e  CALL 0x0063aae0
0053ff53  MOV dword ptr [EBP + -0x4],EAX
0053ff56  MOV EAX,dword ptr [EBP + -0x4]
0053ff59  MOV ECX,dword ptr [EAX + 0x4]
0053ff5c  MOV EDX,dword ptr [EBP + -0x4]
0053ff5f  ADD ECX,dword ptr [EDX + 0xc]
0053ff62  MOV EAX,dword ptr [EBP + 0xc]
0053ff65  ADD ECX,dword ptr [EAX]
0053ff67  MOV EDX,dword ptr [EBP + 0xc]
0053ff6a  MOV dword ptr [EDX],ECX
0053ff6c  MOV EAX,dword ptr [EBP + 0xc]
0053ff6f  MOV ECX,dword ptr [EAX + 0x4]
0053ff72  MOV EDX,dword ptr [EBP + -0x4]
0053ff75  ADD ECX,dword ptr [EDX + 0x8]
0053ff78  MOV EAX,dword ptr [EBP + 0xc]
0053ff7b  MOV dword ptr [EAX + 0x4],ECX
0053ff7e  MOV ECX,dword ptr [EBP + 0x10]
0053ff81  MOV EDX,dword ptr [ECX]
0053ff83  MOV EAX,dword ptr [EBP + -0x4]
0053ff86  ADD EDX,dword ptr [EAX + 0x4]
0053ff89  MOV ECX,dword ptr [EBP + 0x10]
0053ff8c  MOV dword ptr [ECX],EDX
0053ff8e  MOV EDX,dword ptr [EBP + 0x10]
0053ff91  MOV EAX,dword ptr [EDX + 0x4]
0053ff94  MOV ECX,dword ptr [EBP + -0x4]
0053ff97  ADD EAX,dword ptr [ECX + 0x8]
0053ff9a  MOV EDX,dword ptr [EBP + 0x10]
0053ff9d  MOV dword ptr [EDX + 0x4],EAX
0053ffa0  MOV EAX,dword ptr [EBP + 0x14]
0053ffa3  MOV ECX,dword ptr [EAX]
0053ffa5  MOV EDX,dword ptr [EBP + -0x4]
0053ffa8  ADD ECX,dword ptr [EDX + 0xc]
0053ffab  MOV EAX,dword ptr [EBP + 0x14]
0053ffae  MOV dword ptr [EAX],ECX
0053ffb0  MOV ECX,dword ptr [EBP + 0x14]
0053ffb3  MOV EDX,dword ptr [ECX + 0x4]
0053ffb6  MOV EAX,dword ptr [EBP + -0x4]
0053ffb9  ADD EDX,dword ptr [EAX + 0x10]
0053ffbc  MOV ECX,dword ptr [EBP + 0x14]
0053ffbf  MOV dword ptr [ECX + 0x4],EDX
0053ffc2  PUSH -0x1
0053ffc4  MOV EDX,dword ptr [0x007947e0]
0053ffca  MOV EAX,dword ptr [EDX]
0053ffcc  MOV ECX,dword ptr [0x007947e0]
0053ffd2  MOV EDX,dword ptr [EAX + 0x33c]
0053ffd8  CALL EDX
0053ffda  MOVZX EAX,AL
0053ffdd  TEST EAX,EAX
0053ffdf  JZ 0x0054005f
0053ffe1  MOV ECX,dword ptr [0x0162ee84]
0053ffe7  CALL 0x005f3bf0
0053ffec  CMP EAX,0xf
0053ffef  JNZ 0x0054005f
0053fff1  LEA ECX,[EBP + -0xc]
0053fff4  PUSH ECX
0053fff5  LEA EDX,[EBP + -0x14]
0053fff8  PUSH EDX
0053fff9  MOV EAX,dword ptr [EBP + 0x8]
0053fffc  PUSH EAX
0053fffd  MOV ECX,dword ptr [0x007947e0]
00540003  CALL 0x005e0c40
00540008  MOV ECX,dword ptr [EBP + -0x14]
0054000b  ADD ECX,dword ptr [EBP + -0xc]
0054000e  MOV EDX,dword ptr [EBP + 0xc]
00540011  ADD ECX,dword ptr [EDX]
00540013  MOV EAX,dword ptr [EBP + 0xc]
00540016  MOV dword ptr [EAX],ECX
00540018  MOV ECX,dword ptr [EBP + 0xc]
0054001b  MOV EDX,dword ptr [ECX + 0x4]
0054001e  ADD EDX,dword ptr [EBP + -0x10]
00540021  MOV EAX,dword ptr [EBP + 0xc]
00540024  MOV dword ptr [EAX + 0x4],EDX
00540027  MOV ECX,dword ptr [EBP + 0x10]
0054002a  MOV EDX,dword ptr [ECX]
0054002c  ADD EDX,dword ptr [EBP + -0x14]
0054002f  MOV EAX,dword ptr [EBP + 0x10]
00540032  MOV dword ptr [EAX],EDX
00540034  MOV ECX,dword ptr [EBP + 0x10]
00540037  MOV EDX,dword ptr [ECX + 0x4]
0054003a  ADD EDX,dword ptr [EBP + -0x10]
0054003d  MOV EAX,dword ptr [EBP + 0x10]
00540040  MOV dword ptr [EAX + 0x4],EDX
00540043  MOV ECX,dword ptr [EBP + 0x14]
00540046  MOV EDX,dword ptr [ECX]
00540048  ADD EDX,dword ptr [EBP + -0xc]
0054004b  MOV EAX,dword ptr [EBP + 0x14]
0054004e  MOV dword ptr [EAX],EDX
00540050  MOV ECX,dword ptr [EBP + 0x14]
00540053  MOV EDX,dword ptr [ECX + 0x4]
00540056  ADD EDX,dword ptr [EBP + -0x8]
00540059  MOV EAX,dword ptr [EBP + 0x14]
0054005c  MOV dword ptr [EAX + 0x4],EDX
0054005f  MOV ESP,EBP
00540061  POP EBP
00540062  RET 0x10
