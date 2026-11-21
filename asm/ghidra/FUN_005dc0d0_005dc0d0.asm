; FUN_005dc0d0  005dc0d0
005dc0d0  PUSH EBP
005dc0d1  MOV EBP,ESP
005dc0d3  PUSH -0x1
005dc0d5  PUSH 0x6a93cd
005dc0da  MOV EAX,FS:[0x0]
005dc0e0  PUSH EAX
005dc0e1  SUB ESP,0x10
005dc0e4  MOV EAX,[0x00781870]
005dc0e9  XOR EAX,EBP
005dc0eb  PUSH EAX
005dc0ec  LEA EAX,[EBP + -0xc]
005dc0ef  MOV FS:[0x0],EAX
005dc0f5  MOV dword ptr [EBP + -0x18],ECX
005dc0f8  CMP dword ptr [0x007947c8],0x0
005dc0ff  JNZ 0x005dc16a
005dc101  PUSH 0x1c4
005dc106  CALL 0x00686d82
005dc10b  ADD ESP,0x4
005dc10e  MOV dword ptr [EBP + -0x14],EAX
005dc111  MOV dword ptr [EBP + -0x4],0x0
005dc118  CMP dword ptr [EBP + -0x14],0x0
005dc11c  JZ 0x005dc12b
005dc11e  MOV ECX,dword ptr [EBP + -0x14]
005dc121  CALL 0x005cefb0
005dc126  MOV dword ptr [EBP + -0x1c],EAX
005dc129  JMP 0x005dc132
005dc12b  MOV dword ptr [EBP + -0x1c],0x0
005dc132  MOV EAX,dword ptr [EBP + -0x1c]
005dc135  MOV dword ptr [EBP + -0x10],EAX
005dc138  MOV dword ptr [EBP + -0x4],0xffffffff
005dc13f  MOV ECX,dword ptr [EBP + -0x10]
005dc142  MOV dword ptr [0x007947c8],ECX
005dc148  MOV EDX,dword ptr [0x007947c8]
005dc14e  MOV EAX,dword ptr [EDX]
005dc150  MOV ECX,dword ptr [0x007947c8]
005dc156  MOV EDX,dword ptr [EAX + 0x3c]
005dc159  CALL EDX
005dc15b  PUSH 0x0
005dc15d  PUSH 0x0
005dc15f  MOV ECX,dword ptr [0x007947c8]
005dc165  CALL 0x005f7340
005dc16a  MOV ECX,dword ptr [0x007947c8]
005dc170  CALL 0x005cf3e0
005dc175  MOV ECX,dword ptr [EBP + -0xc]
005dc178  MOV dword ptr FS:[0x0],ECX
005dc17f  POP ECX
005dc180  MOV ESP,EBP
005dc182  POP EBP
005dc183  RET
