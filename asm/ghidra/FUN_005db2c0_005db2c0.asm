; FUN_005db2c0  005db2c0
005db2c0  PUSH EBP
005db2c1  MOV EBP,ESP
005db2c3  PUSH -0x1
005db2c5  PUSH 0x6a9221
005db2ca  MOV EAX,FS:[0x0]
005db2d0  PUSH EAX
005db2d1  SUB ESP,0x28
005db2d4  MOV EAX,[0x00781870]
005db2d9  XOR EAX,EBP
005db2db  PUSH EAX
005db2dc  LEA EAX,[EBP + -0xc]
005db2df  MOV FS:[0x0],EAX
005db2e5  MOV dword ptr [EBP + -0x2c],ECX
005db2e8  PUSH -0x1
005db2ea  MOV EAX,[0x0162ee84]
005db2ef  MOV EDX,dword ptr [EAX]
005db2f1  MOV ECX,dword ptr [0x0162ee84]
005db2f7  MOV EAX,dword ptr [EDX + 0x33c]
005db2fd  CALL EAX
005db2ff  MOVZX ECX,AL
005db302  TEST ECX,ECX
005db304  JZ 0x005db336
005db306  MOV EDX,dword ptr [0x0162ee84]
005db30c  MOV EAX,dword ptr [EDX]
005db30e  MOV ECX,dword ptr [0x0162ee84]
005db314  MOV EDX,dword ptr [EAX + 0xe8]
005db31a  CALL EDX
005db31c  MOV dword ptr [EBP + -0x30],EAX
005db31f  MOV EAX,dword ptr [EBP + -0x30]
005db322  MOV EDX,dword ptr [EAX]
005db324  MOV ECX,dword ptr [EBP + -0x30]
005db327  MOV EAX,dword ptr [EDX + 0x94]
005db32d  CALL EAX
005db32f  MOVZX ECX,AL
005db332  TEST ECX,ECX
005db334  JNZ 0x005db33b
005db336  JMP 0x005db435
005db33b  CMP dword ptr [0x00793578],0x0
005db342  JNZ 0x005db3d3
005db348  PUSH 0x19e4
005db34d  CALL 0x00686d82
005db352  ADD ESP,0x4
005db355  MOV dword ptr [EBP + -0x20],EAX
005db358  MOV dword ptr [EBP + -0x4],0x0
005db35f  CMP dword ptr [EBP + -0x20],0x0
005db363  JZ 0x005db372
005db365  MOV ECX,dword ptr [EBP + -0x20]
005db368  CALL 0x0057a790
005db36d  MOV dword ptr [EBP + -0x34],EAX
005db370  JMP 0x005db379
005db372  MOV dword ptr [EBP + -0x34],0x0
005db379  MOV EDX,dword ptr [EBP + -0x34]
005db37c  MOV dword ptr [EBP + -0x1c],EDX
005db37f  MOV dword ptr [EBP + -0x4],0xffffffff
005db386  MOV EAX,dword ptr [EBP + -0x1c]
005db389  MOV [0x00793578],EAX
005db38e  MOV ECX,dword ptr [0x00793578]
005db394  MOV EDX,dword ptr [ECX]
005db396  MOV ECX,dword ptr [0x00793578]
005db39c  MOV EAX,dword ptr [EDX + 0x3c]
005db39f  CALL EAX
005db3a1  LEA ECX,[EBP + -0x28]
005db3a4  PUSH ECX
005db3a5  MOV EDX,dword ptr [EBP + -0x2c]
005db3a8  MOV EAX,dword ptr [EDX]
005db3aa  MOV ECX,dword ptr [EBP + -0x2c]
005db3ad  MOV EDX,dword ptr [EAX + 0x2dc]
005db3b3  CALL EDX
005db3b5  MOV ECX,dword ptr [EAX]
005db3b7  MOV EDX,dword ptr [EAX + 0x4]
005db3ba  MOV dword ptr [EBP + -0x14],ECX
005db3bd  MOV dword ptr [EBP + -0x10],EDX
005db3c0  MOV EAX,dword ptr [EBP + -0x10]
005db3c3  PUSH EAX
005db3c4  MOV ECX,dword ptr [EBP + -0x14]
005db3c7  PUSH ECX
005db3c8  MOV ECX,dword ptr [0x00793578]
005db3ce  CALL 0x005f7320
005db3d3  PUSH -0x1
005db3d5  MOV ECX,dword ptr [0x007947e0]
005db3db  CALL 0x005df700
005db3e0  MOV byte ptr [EBP + -0x15],AL
005db3e3  MOVZX EDX,byte ptr [EBP + -0x15]
005db3e7  TEST EDX,EDX
005db3e9  JZ 0x005db410
005db3eb  PUSH 0x139b
005db3f0  MOV ECX,dword ptr [EBP + -0x2c]
005db3f3  CALL 0x005f2cb0
005db3f8  MOV ECX,dword ptr [0x00793578]
005db3fe  CALL 0x005f85d0
005db403  MOV ECX,dword ptr [0x00793578]
005db409  CALL 0x0057b1b0
005db40e  JMP 0x005db435
005db410  PUSH 0x139b
005db415  MOV ECX,dword ptr [EBP + -0x2c]
005db418  CALL 0x005f2ce0
005db41d  PUSH 0x1391
005db422  MOV ECX,dword ptr [EBP + -0x2c]
005db425  CALL 0x005f2ba0
005db42a  MOV ECX,dword ptr [0x00793578]
005db430  CALL 0x0057b720
005db435  MOV ECX,dword ptr [EBP + -0xc]
005db438  MOV dword ptr FS:[0x0],ECX
005db43f  POP ECX
005db440  MOV ESP,EBP
005db442  POP EBP
005db443  RET
