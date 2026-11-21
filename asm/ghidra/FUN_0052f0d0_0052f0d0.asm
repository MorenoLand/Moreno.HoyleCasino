; FUN_0052f0d0  0052f0d0
0052f0d0  PUSH EBP
0052f0d1  MOV EBP,ESP
0052f0d3  SUB ESP,0x8
0052f0d6  MOV dword ptr [EBP + -0x8],ECX
0052f0d9  MOV EAX,dword ptr [EBP + -0x8]
0052f0dc  MOV ECX,dword ptr [EAX + 0x184]
0052f0e2  MOV EDX,dword ptr [EBP + -0x8]
0052f0e5  MOV EAX,dword ptr [EDX + 0x184]
0052f0eb  MOV EDX,dword ptr [ECX]
0052f0ed  MOV ECX,EAX
0052f0ef  MOV EAX,dword ptr [EDX + 0x70]
0052f0f2  CALL EAX
0052f0f4  MOV ECX,dword ptr [EBP + -0x8]
0052f0f7  MOV EDX,dword ptr [ECX + 0x188]
0052f0fd  MOV EAX,dword ptr [EBP + -0x8]
0052f100  MOV ECX,dword ptr [EAX + 0x188]
0052f106  MOV EDX,dword ptr [EDX]
0052f108  MOV EAX,dword ptr [EDX + 0x74]
0052f10b  CALL EAX
0052f10d  PUSH 0x2
0052f10f  MOV ECX,dword ptr [EBP + -0x8]
0052f112  MOV EDX,dword ptr [ECX + 0x1ac]
0052f118  PUSH EDX
0052f119  MOV ECX,dword ptr [0x0079338c]
0052f11f  CALL 0x00537880
0052f124  MOV dword ptr [EBP + -0x4],EAX
0052f127  MOV EAX,dword ptr [EBP + -0x8]
0052f12a  MOV ECX,dword ptr [EAX + 0x1ac]
0052f130  IMUL ECX,ECX,0x16
0052f133  ADD ECX,dword ptr [EBP + -0x4]
0052f136  MOV EDX,dword ptr [0x0079338c]
0052f13c  MOVSX EAX,byte ptr [EDX + ECX*0x1 + 0x15]
0052f141  CMP EAX,-0x1
0052f144  JNZ 0x0052f161
0052f146  MOV ECX,dword ptr [EBP + -0x8]
0052f149  MOV EDX,dword ptr [ECX + 0x18c]
0052f14f  MOV EAX,dword ptr [EBP + -0x8]
0052f152  MOV ECX,dword ptr [EAX + 0x18c]
0052f158  MOV EDX,dword ptr [EDX]
0052f15a  MOV EAX,dword ptr [EDX + 0x70]
0052f15d  CALL EAX
0052f15f  JMP 0x0052f17a
0052f161  MOV ECX,dword ptr [EBP + -0x8]
0052f164  MOV EDX,dword ptr [ECX + 0x18c]
0052f16a  MOV EAX,dword ptr [EBP + -0x8]
0052f16d  MOV ECX,dword ptr [EAX + 0x18c]
0052f173  MOV EDX,dword ptr [EDX]
0052f175  MOV EAX,dword ptr [EDX + 0x74]
0052f178  CALL EAX
0052f17a  MOV ECX,dword ptr [EBP + -0x8]
0052f17d  MOV EDX,dword ptr [ECX + 0x190]
0052f183  MOV EAX,dword ptr [EBP + -0x8]
0052f186  MOV ECX,dword ptr [EAX + 0x190]
0052f18c  MOV EDX,dword ptr [EDX]
0052f18e  MOV EAX,dword ptr [EDX + 0x74]
0052f191  CALL EAX
0052f193  MOV ECX,dword ptr [EBP + -0x8]
0052f196  MOV EDX,dword ptr [ECX + 0x194]
0052f19c  MOV EAX,dword ptr [EBP + -0x8]
0052f19f  MOV ECX,dword ptr [EAX + 0x194]
0052f1a5  MOV EDX,dword ptr [EDX]
0052f1a7  MOV EAX,dword ptr [EDX + 0x70]
0052f1aa  CALL EAX
0052f1ac  MOV ESP,EBP
0052f1ae  POP EBP
0052f1af  RET
