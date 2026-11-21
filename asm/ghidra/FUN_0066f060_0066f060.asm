; FUN_0066f060  0066f060
0066f060  PUSH EBP
0066f061  MOV EBP,ESP
0066f063  SUB ESP,0x8
0066f066  MOV dword ptr [EBP + -0x8],ECX
0066f069  MOV dword ptr [EBP + -0x4],0x0
0066f070  JMP 0x0066f07b
0066f072  MOV EAX,dword ptr [EBP + -0x4]
0066f075  ADD EAX,0x1
0066f078  MOV dword ptr [EBP + -0x4],EAX
0066f07b  CMP dword ptr [EBP + -0x4],0xa
0066f07f  JGE 0x0066f0e6
0066f081  MOV ECX,dword ptr [EBP + -0x4]
0066f084  MOV EDX,dword ptr [EBP + -0x8]
0066f087  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x178]
0066f08e  MOV ECX,dword ptr [EBP + -0x4]
0066f091  MOV EDX,dword ptr [EBP + -0x8]
0066f094  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x178]
0066f09b  MOV EAX,dword ptr [EAX]
0066f09d  MOV EDX,dword ptr [EAX + 0x70]
0066f0a0  CALL EDX
0066f0a2  MOV EAX,dword ptr [EBP + -0x4]
0066f0a5  MOV ECX,dword ptr [EBP + -0x8]
0066f0a8  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x1a0]
0066f0af  MOV EAX,dword ptr [EBP + -0x4]
0066f0b2  MOV ECX,dword ptr [EBP + -0x8]
0066f0b5  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1a0]
0066f0bc  MOV EDX,dword ptr [EDX]
0066f0be  MOV EAX,dword ptr [EDX + 0x70]
0066f0c1  CALL EAX
0066f0c3  MOV ECX,dword ptr [EBP + -0x4]
0066f0c6  MOV EDX,dword ptr [EBP + -0x8]
0066f0c9  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1c8]
0066f0d0  MOV ECX,dword ptr [EBP + -0x4]
0066f0d3  MOV EDX,dword ptr [EBP + -0x8]
0066f0d6  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1c8]
0066f0dd  MOV EAX,dword ptr [EAX]
0066f0df  MOV EDX,dword ptr [EAX + 0x70]
0066f0e2  CALL EDX
0066f0e4  JMP 0x0066f072
0066f0e6  MOV EAX,dword ptr [EBP + -0x8]
0066f0e9  MOV ECX,dword ptr [EAX + 0x1f0]
0066f0ef  MOV EDX,dword ptr [EBP + -0x8]
0066f0f2  MOV EAX,dword ptr [EDX + 0x1f0]
0066f0f8  MOV EDX,dword ptr [ECX]
0066f0fa  MOV ECX,EAX
0066f0fc  MOV EAX,dword ptr [EDX + 0x70]
0066f0ff  CALL EAX
0066f101  MOV ECX,dword ptr [EBP + -0x8]
0066f104  MOV EDX,dword ptr [ECX + 0x1f4]
0066f10a  MOV EAX,dword ptr [EBP + -0x8]
0066f10d  MOV ECX,dword ptr [EAX + 0x1f4]
0066f113  MOV EDX,dword ptr [EDX]
0066f115  MOV EAX,dword ptr [EDX + 0x70]
0066f118  CALL EAX
0066f11a  MOV ECX,dword ptr [EBP + -0x8]
0066f11d  MOV EDX,dword ptr [ECX + 0x1f8]
0066f123  MOV EAX,dword ptr [EBP + -0x8]
0066f126  MOV ECX,dword ptr [EAX + 0x1f8]
0066f12c  MOV EDX,dword ptr [EDX]
0066f12e  MOV EAX,dword ptr [EDX + 0x70]
0066f131  CALL EAX
0066f133  MOV ECX,dword ptr [EBP + -0x8]
0066f136  MOV EDX,dword ptr [ECX + 0x1fc]
0066f13c  MOV EAX,dword ptr [EBP + -0x8]
0066f13f  MOV ECX,dword ptr [EAX + 0x1fc]
0066f145  MOV EDX,dword ptr [EDX]
0066f147  MOV EAX,dword ptr [EDX + 0x70]
0066f14a  CALL EAX
0066f14c  MOV ECX,dword ptr [EBP + -0x8]
0066f14f  MOV EDX,dword ptr [ECX + 0x200]
0066f155  MOV EAX,dword ptr [EBP + -0x8]
0066f158  MOV ECX,dword ptr [EAX + 0x200]
0066f15e  MOV EDX,dword ptr [EDX]
0066f160  MOV EAX,dword ptr [EDX + 0x70]
0066f163  CALL EAX
0066f165  MOV ECX,dword ptr [EBP + -0x8]
0066f168  MOV EDX,dword ptr [ECX + 0x204]
0066f16e  MOV EAX,dword ptr [EBP + -0x8]
0066f171  MOV ECX,dword ptr [EAX + 0x204]
0066f177  MOV EDX,dword ptr [EDX]
0066f179  MOV EAX,dword ptr [EDX + 0x70]
0066f17c  CALL EAX
0066f17e  PUSH 0x1
0066f180  MOV ECX,dword ptr [EBP + -0x8]
0066f183  MOV EDX,dword ptr [ECX + 0x20c]
0066f189  MOV ECX,dword ptr [EDX + 0x20]
0066f18c  CALL 0x00646c20
0066f191  MOV ECX,dword ptr [EBP + -0x8]
0066f194  CALL 0x005eb5a0
0066f199  MOV ESP,EBP
0066f19b  POP EBP
0066f19c  RET
