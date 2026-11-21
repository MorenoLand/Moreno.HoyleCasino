; FUN_005f62f0  005f62f0
005f62f0  PUSH EBP
005f62f1  MOV EBP,ESP
005f62f3  SUB ESP,0x38
005f62f6  MOV dword ptr [EBP + -0x38],ECX
005f62f9  MOV EAX,dword ptr [EBP + -0x38]
005f62fc  MOVZX ECX,byte ptr [EAX + 0x50]
005f6300  MOVZX EDX,byte ptr [EBP + 0x8]
005f6304  CMP ECX,EDX
005f6306  JNZ 0x005f630d
005f6308  JMP 0x005f63dc
005f630d  MOV EAX,dword ptr [EBP + -0x38]
005f6310  MOV CL,byte ptr [EBP + 0x8]
005f6313  MOV byte ptr [EAX + 0x50],CL
005f6316  MOV EDX,dword ptr [EBP + -0x38]
005f6319  CMP dword ptr [EDX + 0x28],0x0
005f631d  JZ 0x005f63dc
005f6323  MOV ECX,dword ptr [EBP + -0x38]
005f6326  CALL 0x005f54a0
005f632b  MOVZX EAX,AL
005f632e  TEST EAX,EAX
005f6330  JZ 0x005f63dc
005f6336  MOV ECX,dword ptr [EBP + -0x38]
005f6339  MOV DL,byte ptr [ECX + 0x58]
005f633c  MOV byte ptr [EBP + -0x11],DL
005f633f  MOVZX EAX,byte ptr [EBP + -0x11]
005f6343  TEST EAX,EAX
005f6345  JZ 0x005f6391
005f6347  MOV ECX,dword ptr [EBP + -0x38]
005f634a  MOV EDX,dword ptr [ECX + 0x1c]
005f634d  ADD EDX,0x1
005f6350  MOV dword ptr [EBP + -0x24],EDX
005f6353  MOV EAX,dword ptr [EBP + -0x38]
005f6356  MOV ECX,dword ptr [EAX + 0x18]
005f6359  ADD ECX,0x1
005f635c  MOV dword ptr [EBP + -0x20],ECX
005f635f  MOV EDX,dword ptr [EBP + -0x38]
005f6362  MOV EAX,dword ptr [EDX + 0x14]
005f6365  SUB EAX,0x1
005f6368  MOV dword ptr [EBP + -0x1c],EAX
005f636b  MOV ECX,dword ptr [EBP + -0x38]
005f636e  MOV EDX,dword ptr [ECX + 0x10]
005f6371  SUB EDX,0x1
005f6374  MOV dword ptr [EBP + -0x18],EDX
005f6377  MOV EAX,dword ptr [EBP + -0x18]
005f637a  MOV dword ptr [EBP + -0x10],EAX
005f637d  MOV ECX,dword ptr [EBP + -0x1c]
005f6380  MOV dword ptr [EBP + -0xc],ECX
005f6383  MOV EDX,dword ptr [EBP + -0x20]
005f6386  MOV dword ptr [EBP + -0x8],EDX
005f6389  MOV EAX,dword ptr [EBP + -0x24]
005f638c  MOV dword ptr [EBP + -0x4],EAX
005f638f  JMP 0x005f63cd
005f6391  MOV ECX,dword ptr [EBP + -0x38]
005f6394  MOV EDX,dword ptr [ECX + 0x1c]
005f6397  MOV dword ptr [EBP + -0x34],EDX
005f639a  MOV EAX,dword ptr [EBP + -0x38]
005f639d  MOV ECX,dword ptr [EAX + 0x18]
005f63a0  MOV dword ptr [EBP + -0x30],ECX
005f63a3  MOV EDX,dword ptr [EBP + -0x38]
005f63a6  MOV EAX,dword ptr [EDX + 0x14]
005f63a9  MOV dword ptr [EBP + -0x2c],EAX
005f63ac  MOV ECX,dword ptr [EBP + -0x38]
005f63af  MOV EDX,dword ptr [ECX + 0x10]
005f63b2  MOV dword ptr [EBP + -0x28],EDX
005f63b5  MOV EAX,dword ptr [EBP + -0x28]
005f63b8  MOV dword ptr [EBP + -0x10],EAX
005f63bb  MOV ECX,dword ptr [EBP + -0x2c]
005f63be  MOV dword ptr [EBP + -0xc],ECX
005f63c1  MOV EDX,dword ptr [EBP + -0x30]
005f63c4  MOV dword ptr [EBP + -0x8],EDX
005f63c7  MOV EAX,dword ptr [EBP + -0x34]
005f63ca  MOV dword ptr [EBP + -0x4],EAX
005f63cd  LEA ECX,[EBP + -0x10]
005f63d0  PUSH ECX
005f63d1  MOV EDX,dword ptr [EBP + -0x38]
005f63d4  MOV ECX,dword ptr [EDX + 0x4]
005f63d7  CALL 0x005f9500
005f63dc  MOV ESP,EBP
005f63de  POP EBP
005f63df  RET 0x4
