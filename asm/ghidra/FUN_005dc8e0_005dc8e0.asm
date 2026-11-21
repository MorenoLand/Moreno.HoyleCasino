; FUN_005dc8e0  005dc8e0
005dc8e0  PUSH EBP
005dc8e1  MOV EBP,ESP
005dc8e3  PUSH -0x1
005dc8e5  PUSH 0x6a94b1
005dc8ea  MOV EAX,FS:[0x0]
005dc8f0  PUSH EAX
005dc8f1  SUB ESP,0x14
005dc8f4  MOV EAX,[0x00781870]
005dc8f9  XOR EAX,EBP
005dc8fb  PUSH EAX
005dc8fc  LEA EAX,[EBP + -0xc]
005dc8ff  MOV FS:[0x0],EAX
005dc905  MOV dword ptr [EBP + -0x1c],ECX
005dc908  MOVZX EAX,byte ptr [0x00795f94]
005dc90f  TEST EAX,EAX
005dc911  JNZ 0x005dc91e
005dc913  MOVZX ECX,byte ptr [0x00795f95]
005dc91a  TEST ECX,ECX
005dc91c  JZ 0x005dc923
005dc91e  JMP 0x005dc9b6
005dc923  MOV EDX,dword ptr [EBP + -0x1c]
005dc926  CMP dword ptr [EDX + 0x5c],0x0
005dc92a  JZ 0x005dc945
005dc92c  MOV EAX,dword ptr [EBP + -0x1c]
005dc92f  MOV ECX,dword ptr [EAX + 0x5c]
005dc932  MOV DL,byte ptr [ECX + 0x190]
005dc938  MOV byte ptr [EBP + -0x15],DL
005dc93b  MOVZX EAX,byte ptr [EBP + -0x15]
005dc93f  TEST EAX,EAX
005dc941  JZ 0x005dc945
005dc943  JMP 0x005dc9b6
005dc945  MOV ECX,dword ptr [EBP + -0x1c]
005dc948  CMP dword ptr [ECX + 0x5c],0x0
005dc94c  JNZ 0x005dc9ab
005dc94e  PUSH 0x194
005dc953  CALL 0x00686d82
005dc958  ADD ESP,0x4
005dc95b  MOV dword ptr [EBP + -0x14],EAX
005dc95e  MOV dword ptr [EBP + -0x4],0x0
005dc965  CMP dword ptr [EBP + -0x14],0x0
005dc969  JZ 0x005dc98e
005dc96b  MOV ECX,dword ptr [EBP + -0x14]
005dc96e  CALL 0x005f5f50
005dc973  MOV EDX,dword ptr [EBP + -0x14]
005dc976  MOV dword ptr [EDX],0x6d458c
005dc97c  MOV EAX,dword ptr [EBP + -0x14]
005dc97f  MOV byte ptr [EAX + 0x190],0x1
005dc986  MOV ECX,dword ptr [EBP + -0x14]
005dc989  MOV dword ptr [EBP + -0x20],ECX
005dc98c  JMP 0x005dc995
005dc98e  MOV dword ptr [EBP + -0x20],0x0
005dc995  MOV EDX,dword ptr [EBP + -0x20]
005dc998  MOV dword ptr [EBP + -0x10],EDX
005dc99b  MOV dword ptr [EBP + -0x4],0xffffffff
005dc9a2  MOV EAX,dword ptr [EBP + -0x1c]
005dc9a5  MOV ECX,dword ptr [EBP + -0x10]
005dc9a8  MOV dword ptr [EAX + 0x5c],ECX
005dc9ab  MOV EDX,dword ptr [EBP + -0x1c]
005dc9ae  MOV ECX,dword ptr [EDX + 0x5c]
005dc9b1  CALL 0x005e85d0
005dc9b6  MOV ECX,dword ptr [EBP + -0xc]
005dc9b9  MOV dword ptr FS:[0x0],ECX
005dc9c0  POP ECX
005dc9c1  MOV ESP,EBP
005dc9c3  POP EBP
005dc9c4  RET
