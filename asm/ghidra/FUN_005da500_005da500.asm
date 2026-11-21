; FUN_005da500  005da500
005da500  PUSH EBP
005da501  MOV EBP,ESP
005da503  SUB ESP,0x81c
005da509  MOV EAX,[0x00781870]
005da50e  XOR EAX,EBP
005da510  MOV dword ptr [EBP + -0x4],EAX
005da513  MOV dword ptr [EBP + 0xfffff7e4],ECX
005da519  MOV dword ptr [EBP + 0xfffffbf4],0x12
005da523  MOV dword ptr [EBP + 0xfffffbe8],0xf
005da52d  MOV ECX,dword ptr [EBP + 0x8]
005da530  CALL 0x0063aac0
005da535  ADD EAX,0x4
005da538  PUSH EAX
005da539  LEA EAX,[EBP + 0xfffffbd4]
005da53f  PUSH EAX
005da540  CALL 0x00686d8e
005da545  ADD ESP,0x8
005da548  MOV word ptr [EBP + 0xfffffbf0],0x0
005da551  JMP 0x005da565
005da553  MOV CX,word ptr [EBP + 0xfffffbf0]
005da55a  ADD CX,0x1
005da55e  MOV word ptr [EBP + 0xfffffbf0],CX
005da565  MOVSX EDX,word ptr [EBP + 0xfffffbf0]
005da56c  CMP EDX,0x3e8
005da572  JGE 0x005da585
005da574  MOVSX EAX,word ptr [EBP + 0xfffffbf0]
005da57b  MOV byte ptr [EBP + EAX*0x1 + 0xfffff7e8],0x0
005da583  JMP 0x005da553
005da585  MOV byte ptr [EBP + 0xfffffbf8],0x0
005da58c  PUSH 0x3ff
005da591  PUSH 0x0
005da593  LEA ECX,[EBP + 0xfffffbf9]
005da599  PUSH ECX
005da59a  CALL 0x00686fa2
005da59f  ADD ESP,0xc
005da5a2  PUSH 0x6d2f54
005da5a7  LEA EDX,[EBP + 0xfffffbf8]
005da5ad  PUSH EDX
005da5ae  CALL 0x00686ec6
005da5b3  ADD ESP,0x8
005da5b6  PUSH 0x6c2d28
005da5bb  LEA EAX,[EBP + 0xfffffbf8]
005da5c1  PUSH EAX
005da5c2  CALL 0x005ea9c0
005da5c7  ADD ESP,0x8
005da5ca  MOV dword ptr [EBP + 0xfffffbec],EAX
005da5d0  CMP dword ptr [EBP + 0xfffffbec],0x0
005da5d7  JZ 0x005da607
005da5d9  MOV ECX,dword ptr [EBP + 0xfffffbec]
005da5df  PUSH ECX
005da5e0  PUSH 0x1
005da5e2  PUSH 0x3e8
005da5e7  LEA EDX,[EBP + 0xfffff7e8]
005da5ed  PUSH EDX
005da5ee  CALL dword ptr [0x006b225c]
005da5f4  ADD ESP,0x10
005da5f7  MOV EAX,dword ptr [EBP + 0xfffffbec]
005da5fd  PUSH EAX
005da5fe  CALL dword ptr [0x006b2258]
005da604  ADD ESP,0x4
005da607  MOV word ptr [EBP + 0xfffffbf0],0x0
005da610  JMP 0x005da624
005da612  MOV CX,word ptr [EBP + 0xfffffbf0]
005da619  ADD CX,0x1
005da61d  MOV word ptr [EBP + 0xfffffbf0],CX
005da624  MOVSX EDX,word ptr [EBP + 0xfffffbf0]
005da62b  CMP EDX,0x12
005da62e  JGE 0x005da651
005da630  MOVSX EAX,word ptr [EBP + 0xfffffbf0]
005da637  MOV CL,byte ptr [EBP + EAX*0x1 + 0xfffffbd4]
005da63e  SUB CL,0x1
005da641  MOVSX EDX,word ptr [EBP + 0xfffffbf0]
005da648  MOV byte ptr [EBP + EDX*0x1 + 0xfffffbd4],CL
005da64f  JMP 0x005da612
005da651  MOV word ptr [EBP + 0xfffffbf0],0x0
005da65a  JMP 0x005da66e
005da65c  MOV AX,word ptr [EBP + 0xfffffbf0]
005da663  ADD AX,0x1
005da667  MOV word ptr [EBP + 0xfffffbf0],AX
005da66e  MOVSX ECX,word ptr [EBP + 0xfffffbf0]
005da675  CMP ECX,0xe
005da678  JGE 0x005da694
005da67a  MOVSX EDX,word ptr [EBP + 0xfffffbf0]
005da681  IMUL EDX,EDX,0x12
005da684  MOVSX EAX,byte ptr [EBP + EDX*0x1 + 0xfffff7e8]
005da68c  TEST EAX,EAX
005da68e  JNZ 0x005da692
005da690  JMP 0x005da694
005da692  JMP 0x005da65c
005da694  PUSH 0x12
005da696  LEA ECX,[EBP + 0xfffffbd4]
005da69c  PUSH ECX
005da69d  MOVSX EDX,word ptr [EBP + 0xfffffbf0]
005da6a4  IMUL EDX,EDX,0x12
005da6a7  LEA EAX,[EBP + EDX*0x1 + 0xfffff7e8]
005da6ae  PUSH EAX
005da6af  CALL 0x00686fde
005da6b4  ADD ESP,0xc
005da6b7  PUSH 0x6c2d2c
005da6bc  LEA ECX,[EBP + 0xfffffbf8]
005da6c2  PUSH ECX
005da6c3  CALL 0x005ea9c0
005da6c8  ADD ESP,0x8
005da6cb  MOV dword ptr [EBP + 0xfffffbec],EAX
005da6d1  CMP dword ptr [EBP + 0xfffffbec],0x0
005da6d8  JZ 0x005da70a
005da6da  MOV EDX,dword ptr [EBP + 0xfffffbec]
005da6e0  PUSH EDX
005da6e1  PUSH 0x1
005da6e3  PUSH 0x3e8
005da6e8  LEA EAX,[EBP + 0xfffff7e8]
005da6ee  PUSH EAX
005da6ef  CALL dword ptr [0x006b2260]
005da6f5  ADD ESP,0x10
005da6f8  MOV ECX,dword ptr [EBP + 0xfffffbec]
005da6fe  PUSH ECX
005da6ff  CALL dword ptr [0x006b2258]
005da705  ADD ESP,0x4
005da708  JMP 0x005da730
005da70a  PUSH 0x0
005da70c  PUSH 0x6d4478
005da711  CALL 0x00630f40
005da716  ADD ESP,0x4
005da719  PUSH EAX
005da71a  PUSH 0x6d444c
005da71f  CALL 0x00630f40
005da724  ADD ESP,0x4
005da727  PUSH EAX
005da728  CALL 0x0062ff10
005da72d  ADD ESP,0xc
005da730  MOV ECX,dword ptr [EBP + -0x4]
005da733  XOR ECX,EBP
005da735  CALL 0x00686d72
005da73a  MOV ESP,EBP
005da73c  POP EBP
005da73d  RET 0x4
