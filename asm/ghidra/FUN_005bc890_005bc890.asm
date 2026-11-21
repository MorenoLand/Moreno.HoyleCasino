; FUN_005bc890  005bc890
005bc890  PUSH EBP
005bc891  MOV EBP,ESP
005bc893  PUSH -0x1
005bc895  PUSH 0x6a815c
005bc89a  MOV EAX,FS:[0x0]
005bc8a0  PUSH EAX
005bc8a1  SUB ESP,0x34
005bc8a4  MOV EAX,[0x00781870]
005bc8a9  XOR EAX,EBP
005bc8ab  PUSH EAX
005bc8ac  LEA EAX,[EBP + -0xc]
005bc8af  MOV FS:[0x0],EAX
005bc8b5  MOV dword ptr [EBP + -0x3c],ECX
005bc8b8  MOV EAX,dword ptr [EBP + -0x3c]
005bc8bb  MOV dword ptr [EAX],0x6d1c18
005bc8c1  MOV dword ptr [EBP + -0x4],0x1
005bc8c8  MOV ECX,dword ptr [EBP + -0x3c]
005bc8cb  CMP dword ptr [ECX + 0x50],0x0
005bc8cf  JZ 0x005bc8e5
005bc8d1  PUSH 0x0
005bc8d3  MOV EDX,dword ptr [EBP + -0x3c]
005bc8d6  MOV EAX,dword ptr [EDX + 0x50]
005bc8d9  ADD EAX,0x68
005bc8dc  PUSH EAX
005bc8dd  CALL 0x006110a0
005bc8e2  ADD ESP,0x8
005bc8e5  PUSH 0x0
005bc8e7  MOV ECX,dword ptr [0x007947e0]
005bc8ed  CALL 0x005dd400
005bc8f2  MOV ECX,dword ptr [EBP + -0x3c]
005bc8f5  CMP dword ptr [ECX + 0x6c],0x0
005bc8f9  JZ 0x005bc92a
005bc8fb  MOV EDX,dword ptr [EBP + -0x3c]
005bc8fe  MOV EAX,dword ptr [EDX + 0x6c]
005bc901  MOV dword ptr [EBP + -0x18],EAX
005bc904  MOV ECX,dword ptr [EBP + -0x18]
005bc907  MOV dword ptr [EBP + -0x14],ECX
005bc90a  CMP dword ptr [EBP + -0x14],0x0
005bc90e  JZ 0x005bc923
005bc910  PUSH 0x1
005bc912  MOV EDX,dword ptr [EBP + -0x14]
005bc915  MOV EAX,dword ptr [EDX]
005bc917  MOV ECX,dword ptr [EBP + -0x14]
005bc91a  MOV EDX,dword ptr [EAX]
005bc91c  CALL EDX
005bc91e  MOV dword ptr [EBP + -0x40],EAX
005bc921  JMP 0x005bc92a
005bc923  MOV dword ptr [EBP + -0x40],0x0
005bc92a  MOV byte ptr [EBP + -0x4],0x0
005bc92e  MOV EAX,dword ptr [EBP + -0x3c]
005bc931  ADD EAX,0x58
005bc934  MOV dword ptr [EBP + -0x38],EAX
005bc937  MOV ECX,dword ptr [EBP + -0x38]
005bc93a  CALL 0x005be450
005bc93f  MOV dword ptr [EBP + -0x4],0xffffffff
005bc946  MOV ECX,dword ptr [EBP + -0x3c]
005bc949  CALL 0x005c0b40
005bc94e  MOV ECX,dword ptr [EBP + -0xc]
005bc951  MOV dword ptr FS:[0x0],ECX
005bc958  POP ECX
005bc959  MOV ESP,EBP
005bc95b  POP EBP
005bc95c  RET
