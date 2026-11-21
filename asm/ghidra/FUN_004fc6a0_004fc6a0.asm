; FUN_004fc6a0  004fc6a0
004fc6a0  PUSH EBP
004fc6a1  MOV EBP,ESP
004fc6a3  PUSH -0x1
004fc6a5  PUSH 0x6a278d
004fc6aa  MOV EAX,FS:[0x0]
004fc6b0  PUSH EAX
004fc6b1  SUB ESP,0x10
004fc6b4  MOV EAX,[0x00781870]
004fc6b9  XOR EAX,EBP
004fc6bb  PUSH EAX
004fc6bc  LEA EAX,[EBP + -0xc]
004fc6bf  MOV FS:[0x0],EAX
004fc6c5  MOV dword ptr [EBP + -0x18],ECX
004fc6c8  MOV EAX,dword ptr [EBP + -0x18]
004fc6cb  CMP dword ptr [EAX + 0x80],0x0
004fc6d2  JNZ 0x004fc749
004fc6d4  PUSH 0x1bc
004fc6d9  CALL 0x00686d82
004fc6de  ADD ESP,0x4
004fc6e1  MOV dword ptr [EBP + -0x14],EAX
004fc6e4  MOV dword ptr [EBP + -0x4],0x0
004fc6eb  CMP dword ptr [EBP + -0x14],0x0
004fc6ef  JZ 0x004fc6fe
004fc6f1  MOV ECX,dword ptr [EBP + -0x14]
004fc6f4  CALL 0x0051cad0
004fc6f9  MOV dword ptr [EBP + -0x1c],EAX
004fc6fc  JMP 0x004fc705
004fc6fe  MOV dword ptr [EBP + -0x1c],0x0
004fc705  MOV ECX,dword ptr [EBP + -0x1c]
004fc708  MOV dword ptr [EBP + -0x10],ECX
004fc70b  MOV dword ptr [EBP + -0x4],0xffffffff
004fc712  MOV EDX,dword ptr [EBP + -0x18]
004fc715  MOV EAX,dword ptr [EBP + -0x10]
004fc718  MOV dword ptr [EDX + 0x80],EAX
004fc71e  MOV ECX,dword ptr [EBP + -0x18]
004fc721  MOV EDX,dword ptr [ECX + 0x80]
004fc727  MOV EAX,dword ptr [EBP + -0x18]
004fc72a  MOV ECX,dword ptr [EAX + 0x80]
004fc730  MOV EDX,dword ptr [EDX]
004fc732  MOV EAX,dword ptr [EDX + 0x3c]
004fc735  CALL EAX
004fc737  PUSH 0x0
004fc739  PUSH 0x0
004fc73b  MOV ECX,dword ptr [EBP + -0x18]
004fc73e  MOV ECX,dword ptr [ECX + 0x80]
004fc744  CALL 0x005f7320
004fc749  MOV EDX,dword ptr [EBP + -0x18]
004fc74c  MOV ECX,dword ptr [EDX + 0x80]
004fc752  CALL 0x0051cba0
004fc757  MOV EAX,dword ptr [EBP + -0x18]
004fc75a  MOV ECX,dword ptr [EAX + 0x80]
004fc760  CALL 0x005f88f0
004fc765  MOVZX ECX,AL
004fc768  TEST ECX,ECX
004fc76a  JZ 0x004fc77a
004fc76c  MOV EDX,dword ptr [EBP + -0x18]
004fc76f  MOV ECX,dword ptr [EDX + 0x80]
004fc775  CALL 0x005f85d0
004fc77a  MOV ECX,dword ptr [EBP + -0xc]
004fc77d  MOV dword ptr FS:[0x0],ECX
004fc784  POP ECX
004fc785  MOV ESP,EBP
004fc787  POP EBP
004fc788  RET
