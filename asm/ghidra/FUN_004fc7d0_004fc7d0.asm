; FUN_004fc7d0  004fc7d0
004fc7d0  PUSH EBP
004fc7d1  MOV EBP,ESP
004fc7d3  PUSH -0x1
004fc7d5  PUSH 0x6a27b3
004fc7da  MOV EAX,FS:[0x0]
004fc7e0  PUSH EAX
004fc7e1  SUB ESP,0x1c
004fc7e4  MOV EAX,[0x00781870]
004fc7e9  XOR EAX,EBP
004fc7eb  PUSH EAX
004fc7ec  LEA EAX,[EBP + -0xc]
004fc7ef  MOV FS:[0x0],EAX
004fc7f5  MOV dword ptr [EBP + -0x24],ECX
004fc7f8  MOV EAX,dword ptr [EBP + -0x24]
004fc7fb  CMP dword ptr [EAX + 0x84],0x0
004fc802  JNZ 0x004fc8ba
004fc808  PUSH 0x1d4
004fc80d  CALL 0x00686d82
004fc812  ADD ESP,0x4
004fc815  MOV dword ptr [EBP + -0x14],EAX
004fc818  MOV dword ptr [EBP + -0x4],0x0
004fc81f  CMP dword ptr [EBP + -0x14],0x0
004fc823  JZ 0x004fc832
004fc825  MOV ECX,dword ptr [EBP + -0x14]
004fc828  CALL 0x0051cc80
004fc82d  MOV dword ptr [EBP + -0x28],EAX
004fc830  JMP 0x004fc839
004fc832  MOV dword ptr [EBP + -0x28],0x0
004fc839  MOV ECX,dword ptr [EBP + -0x28]
004fc83c  MOV dword ptr [EBP + -0x10],ECX
004fc83f  MOV dword ptr [EBP + -0x4],0xffffffff
004fc846  MOV EDX,dword ptr [EBP + -0x24]
004fc849  MOV EAX,dword ptr [EBP + -0x10]
004fc84c  MOV dword ptr [EDX + 0x84],EAX
004fc852  MOV ECX,dword ptr [EBP + -0x24]
004fc855  MOV EDX,dword ptr [ECX + 0x84]
004fc85b  MOV dword ptr [EBP + -0x18],EDX
004fc85e  MOV EAX,dword ptr [EBP + -0x18]
004fc861  MOV byte ptr [EAX + 0x1c0],0x1
004fc868  MOV ECX,dword ptr [0x00791364]
004fc86e  MOV EDX,dword ptr [ECX + 0xf4]
004fc874  MOV dword ptr [EBP + -0x1c],EDX
004fc877  MOV EAX,dword ptr [EBP + -0x24]
004fc87a  MOV ECX,dword ptr [EAX + 0x84]
004fc880  MOV dword ptr [EBP + -0x20],ECX
004fc883  MOV EDX,dword ptr [EBP + -0x20]
004fc886  MOV EAX,dword ptr [EBP + -0x1c]
004fc889  MOV dword ptr [EDX + 0x1bc],EAX
004fc88f  MOV ECX,dword ptr [EBP + -0x24]
004fc892  MOV EDX,dword ptr [ECX + 0x84]
004fc898  MOV EAX,dword ptr [EBP + -0x24]
004fc89b  MOV ECX,dword ptr [EAX + 0x84]
004fc8a1  MOV EDX,dword ptr [EDX]
004fc8a3  MOV EAX,dword ptr [EDX + 0x3c]
004fc8a6  CALL EAX
004fc8a8  PUSH 0x0
004fc8aa  PUSH 0x0
004fc8ac  MOV ECX,dword ptr [EBP + -0x24]
004fc8af  MOV ECX,dword ptr [ECX + 0x84]
004fc8b5  CALL 0x005f7340
004fc8ba  MOV EDX,dword ptr [EBP + -0x24]
004fc8bd  MOV ECX,dword ptr [EDX + 0x84]
004fc8c3  CALL 0x005f85d0
004fc8c8  MOV ECX,dword ptr [EBP + -0xc]
004fc8cb  MOV dword ptr FS:[0x0],ECX
004fc8d2  POP ECX
004fc8d3  MOV ESP,EBP
004fc8d5  POP EBP
004fc8d6  RET
