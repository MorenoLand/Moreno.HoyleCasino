; FUN_005c0790  005c0790
005c0790  PUSH EBP
005c0791  MOV EBP,ESP
005c0793  SUB ESP,0x64
005c0796  MOV dword ptr [EBP + -0x64],ECX
005c0799  MOV EAX,dword ptr [EBP + -0x64]
005c079c  MOV ECX,dword ptr [EAX + 0x4]
005c079f  MOV dword ptr [EBP + -0x1c],ECX
005c07a2  MOV dword ptr [EBP + -0x8],0x0
005c07a9  CMP dword ptr [EBP + -0x64],0x0
005c07ad  JZ 0x005c07c5
005c07af  MOV EDX,dword ptr [EBP + -0x64]
005c07b2  MOV EAX,dword ptr [EDX + 0x4]
005c07b5  CMP EAX,dword ptr [EBP + -0x1c]
005c07b8  JA 0x005c07c5
005c07ba  MOV ECX,dword ptr [EBP + -0x64]
005c07bd  MOV EDX,dword ptr [EBP + -0x1c]
005c07c0  CMP EDX,dword ptr [ECX + 0x8]
005c07c3  JBE 0x005c07cb
005c07c5  CALL dword ptr [0x006b2274]
005c07cb  MOV EAX,dword ptr [EBP + -0x64]
005c07ce  MOV dword ptr [EBP + -0x8],EAX
005c07d1  MOV ECX,dword ptr [EBP + -0x1c]
005c07d4  MOV dword ptr [EBP + -0x4],ECX
005c07d7  MOV EDX,dword ptr [EBP + -0x8]
005c07da  MOV EAX,dword ptr [EBP + -0x4]
005c07dd  MOV dword ptr [EBP + -0x24],EDX
005c07e0  MOV dword ptr [EBP + -0x20],EAX
005c07e3  MOV ECX,dword ptr [EBP + 0x8]
005c07e6  PUSH ECX
005c07e7  LEA ECX,[EBP + -0x24]
005c07ea  CALL 0x005beeb0
005c07ef  MOV EDX,dword ptr [EBP + -0x24]
005c07f2  MOV EAX,dword ptr [EBP + -0x20]
005c07f5  MOV dword ptr [EBP + -0x10],EDX
005c07f8  MOV dword ptr [EBP + -0xc],EAX
005c07fb  MOV ECX,dword ptr [EBP + -0x10]
005c07fe  MOV dword ptr [EBP + -0x60],ECX
005c0801  MOV EDX,dword ptr [EBP + -0xc]
005c0804  MOV dword ptr [EBP + -0x5c],EDX
005c0807  MOV EAX,dword ptr [EBP + -0x5c]
005c080a  PUSH EAX
005c080b  MOV ECX,dword ptr [EBP + -0x64]
005c080e  MOV EDX,dword ptr [ECX + 0x8]
005c0811  PUSH EDX
005c0812  MOV EAX,dword ptr [EBP + -0x5c]
005c0815  ADD EAX,0x4
005c0818  PUSH EAX
005c0819  CALL 0x005c0980
005c081e  ADD ESP,0xc
005c0821  MOV ECX,dword ptr [EBP + -0x64]
005c0824  MOV EDX,dword ptr [ECX + 0x8]
005c0827  MOV dword ptr [EBP + -0x58],EDX
005c082a  MOV EAX,dword ptr [EBP + -0x64]
005c082d  MOV ECX,dword ptr [EAX + 0x8]
005c0830  SUB ECX,0x4
005c0833  MOV dword ptr [EBP + -0x54],ECX
005c0836  MOV EDX,dword ptr [EBP + -0x58]
005c0839  MOV dword ptr [EBP + -0x50],EDX
005c083c  MOV EAX,dword ptr [EBP + -0x54]
005c083f  MOV dword ptr [EBP + -0x4c],EAX
005c0842  MOV CL,byte ptr [EBP + -0x48]
005c0845  MOV byte ptr [EBP + -0x47],CL
005c0848  MOV EDX,dword ptr [EBP + -0x64]
005c084b  MOV EAX,dword ptr [EDX + 0x8]
005c084e  SUB EAX,0x4
005c0851  MOV ECX,dword ptr [EBP + -0x64]
005c0854  MOV dword ptr [ECX + 0x8],EAX
005c0857  MOV EDX,dword ptr [EBP + -0x60]
005c085a  MOV dword ptr [EBP + -0x18],EDX
005c085d  MOV EAX,dword ptr [EBP + -0x5c]
005c0860  MOV dword ptr [EBP + -0x14],EAX
005c0863  MOV ESP,EBP
005c0865  POP EBP
005c0866  RET 0x4
