; FUN_005bcf70  005bcf70
005bcf70  PUSH EBP
005bcf71  MOV EBP,ESP
005bcf73  PUSH -0x1
005bcf75  PUSH 0x6a81cc
005bcf7a  MOV EAX,FS:[0x0]
005bcf80  PUSH EAX
005bcf81  SUB ESP,0x20
005bcf84  MOV EAX,[0x00781870]
005bcf89  XOR EAX,EBP
005bcf8b  PUSH EAX
005bcf8c  LEA EAX,[EBP + -0xc]
005bcf8f  MOV FS:[0x0],EAX
005bcf95  MOV dword ptr [EBP + -0x28],ECX
005bcf98  LEA EAX,[EBP + -0x1c]
005bcf9b  PUSH EAX
005bcf9c  MOV ECX,dword ptr [EBP + 0xc]
005bcf9f  PUSH ECX
005bcfa0  MOV EDX,dword ptr [EBP + 0x8]
005bcfa3  PUSH EDX
005bcfa4  MOV ECX,dword ptr [EBP + -0x28]
005bcfa7  CALL 0x005bcee0
005bcfac  PUSH 0x190
005bcfb1  CALL 0x00686d82
005bcfb6  ADD ESP,0x4
005bcfb9  MOV dword ptr [EBP + -0x24],EAX
005bcfbc  MOV dword ptr [EBP + -0x4],0x0
005bcfc3  CMP dword ptr [EBP + -0x24],0x0
005bcfc7  JZ 0x005bcfd6
005bcfc9  MOV ECX,dword ptr [EBP + -0x24]
005bcfcc  CALL 0x005f5f50
005bcfd1  MOV dword ptr [EBP + -0x2c],EAX
005bcfd4  JMP 0x005bcfdd
005bcfd6  MOV dword ptr [EBP + -0x2c],0x0
005bcfdd  MOV EAX,dword ptr [EBP + -0x2c]
005bcfe0  MOV dword ptr [EBP + -0x20],EAX
005bcfe3  MOV dword ptr [EBP + -0x4],0xffffffff
005bcfea  MOV ECX,dword ptr [EBP + -0x20]
005bcfed  MOV dword ptr [EBP + -0x10],ECX
005bcff0  MOV EDX,dword ptr [EBP + 0x8]
005bcff3  ADD EDX,0x3158dc
005bcff9  PUSH EDX
005bcffa  PUSH 0x17
005bcffc  PUSH 0x0
005bcffe  PUSH 0x0
005bd000  MOV EAX,dword ptr [EBP + -0x1c]
005bd003  PUSH EAX
005bd004  MOV ECX,dword ptr [EBP + -0x10]
005bd007  CALL 0x005eae80
005bd00c  MOV ECX,dword ptr [EBP + -0x18]
005bd00f  PUSH ECX
005bd010  MOV ECX,dword ptr [EBP + -0x10]
005bd013  CALL 0x005eb000
005bd018  MOV EDX,dword ptr [EBP + -0x14]
005bd01b  PUSH EDX
005bd01c  MOV EAX,dword ptr [EBP + -0x10]
005bd01f  MOV EDX,dword ptr [EAX]
005bd021  MOV ECX,dword ptr [EBP + -0x10]
005bd024  MOV EAX,dword ptr [EDX + 0xb0]
005bd02a  CALL EAX
005bd02c  MOV ECX,dword ptr [EBP + -0x10]
005bd02f  MOV EDX,dword ptr [ECX]
005bd031  MOV ECX,dword ptr [EBP + -0x10]
005bd034  MOV EAX,dword ptr [EDX + 0x74]
005bd037  CALL EAX
005bd039  MOV EAX,dword ptr [EBP + -0x10]
005bd03c  MOV ECX,dword ptr [EBP + -0xc]
005bd03f  MOV dword ptr FS:[0x0],ECX
005bd046  POP ECX
005bd047  MOV ESP,EBP
005bd049  POP EBP
005bd04a  RET 0x8
