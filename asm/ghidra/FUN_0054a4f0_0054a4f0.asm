; FUN_0054a4f0  0054a4f0
0054a4f0  PUSH EBP
0054a4f1  MOV EBP,ESP
0054a4f3  SUB ESP,0x30
0054a4f6  MOV dword ptr [EBP + -0x2c],ECX
0054a4f9  MOV EAX,dword ptr [EBP + 0x8]
0054a4fc  PUSH EAX
0054a4fd  MOV ECX,dword ptr [EBP + -0x2c]
0054a500  CALL 0x0054a180
0054a505  MOV dword ptr [EBP + -0x14],EAX
0054a508  MOV dword ptr [EBP + -0xc],0x0
0054a50f  MOV dword ptr [EBP + -0x10],0x0
0054a516  MOV ECX,dword ptr [EBP + -0x14]
0054a519  PUSH ECX
0054a51a  MOV ECX,dword ptr [EBP + -0x2c]
0054a51d  CALL 0x0054a660
0054a522  FSTP double ptr [EBP + -0x8]
0054a525  MOV byte ptr [EBP + -0x15],0x0
0054a529  MOV EDX,dword ptr [EBP + 0x8]
0054a52c  MOV EAX,dword ptr [EBP + -0x2c]
0054a52f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x50]
0054a533  MOV dword ptr [EBP + -0x10],ECX
0054a536  CMP dword ptr [EBP + -0x14],0x4
0054a53a  JNZ 0x0054a544
0054a53c  MOV EAX,dword ptr [EBP + -0x10]
0054a53f  JMP 0x0054a5fd
0054a544  CMP dword ptr [EBP + -0x14],0x5
0054a548  JZ 0x0054a559
0054a54a  CMP dword ptr [EBP + -0x14],0x3
0054a54e  JZ 0x0054a559
0054a550  MOV dword ptr [EBP + -0x30],0x0
0054a557  JMP 0x0054a560
0054a559  MOV dword ptr [EBP + -0x30],0x1
0054a560  MOV DL,byte ptr [EBP + -0x30]
0054a563  MOV byte ptr [EBP + -0x15],DL
0054a566  MOVZX EAX,byte ptr [EBP + -0x15]
0054a56a  TEST EAX,EAX
0054a56c  JNZ 0x0054a5ab
0054a56e  FILD dword ptr [EBP + -0x10]
0054a571  FMUL double ptr [EBP + -0x8]
0054a574  CALL 0x00686cc0
0054a579  ADD EAX,dword ptr [EBP + -0x10]
0054a57c  MOV dword ptr [EBP + -0xc],EAX
0054a57f  FLD double ptr [0x006c70b8]
0054a585  FCOMP double ptr [EBP + -0x8]
0054a588  FNSTSW AX
0054a58a  TEST AH,0x44
0054a58d  JP 0x0054a5ab
0054a58f  MOV ECX,dword ptr [EBP + -0x10]
0054a592  AND ECX,0x80000001
0054a598  JNS 0x0054a59f
0054a59a  DEC ECX
0054a59b  OR ECX,0xfffffffe
0054a59e  INC ECX
0054a59f  TEST ECX,ECX
0054a5a1  JZ 0x0054a5ab
0054a5a3  MOV ECX,dword ptr [EBP + -0x2c]
0054a5a6  CALL 0x0054a480
0054a5ab  CMP dword ptr [EBP + 0x8],0x1
0054a5af  JNZ 0x0054a5fa
0054a5b1  PUSH 0x0
0054a5b3  MOV ECX,dword ptr [EBP + -0x2c]
0054a5b6  CALL 0x0054a6c0
0054a5bb  MOVZX EDX,AL
0054a5be  TEST EDX,EDX
0054a5c0  JZ 0x0054a5fa
0054a5c2  MOV EAX,dword ptr [EBP + -0x2c]
0054a5c5  MOVZX ECX,byte ptr [EAX + 0x25]
0054a5c9  TEST ECX,ECX
0054a5cb  JZ 0x0054a5fa
0054a5cd  MOV EDX,dword ptr [EBP + -0x10]
0054a5d0  MOV dword ptr [EBP + -0xc],EDX
0054a5d3  LEA EAX,[EBP + -0x28]
0054a5d6  PUSH EAX
0054a5d7  MOV ECX,dword ptr [EBP + -0x2c]
0054a5da  CALL 0x00548ef0
0054a5df  MOV ECX,dword ptr [EAX]
0054a5e1  MOV EDX,dword ptr [EAX + 0x4]
0054a5e4  MOV dword ptr [EBP + -0x20],ECX
0054a5e7  MOV dword ptr [EBP + -0x1c],EDX
0054a5ea  MOV EAX,dword ptr [EBP + -0x1c]
0054a5ed  PUSH EAX
0054a5ee  MOV ECX,dword ptr [EBP + -0x20]
0054a5f1  PUSH ECX
0054a5f2  MOV ECX,dword ptr [EBP + -0x2c]
0054a5f5  CALL 0x005d1420
0054a5fa  MOV EAX,dword ptr [EBP + -0xc]
0054a5fd  MOV ESP,EBP
0054a5ff  POP EBP
0054a600  RET 0x4
