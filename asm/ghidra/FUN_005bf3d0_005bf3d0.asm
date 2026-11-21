; FUN_005bf3d0  005bf3d0
005bf3d0  PUSH EBP
005bf3d1  MOV EBP,ESP
005bf3d3  PUSH -0x1
005bf3d5  PUSH 0x6a82fc
005bf3da  MOV EAX,FS:[0x0]
005bf3e0  PUSH EAX
005bf3e1  SUB ESP,0x28
005bf3e4  MOV EAX,[0x00781870]
005bf3e9  XOR EAX,EBP
005bf3eb  PUSH EAX
005bf3ec  LEA EAX,[EBP + -0xc]
005bf3ef  MOV FS:[0x0],EAX
005bf3f5  MOV dword ptr [EBP + -0x34],ECX
005bf3f8  MOV EAX,dword ptr [EBP + -0x34]
005bf3fb  MOV dword ptr [EAX],0x6d1d04
005bf401  MOV dword ptr [EBP + -0x4],0x1
005bf408  MOV ECX,dword ptr [EBP + -0x34]
005bf40b  CMP dword ptr [ECX + 0xc],0x0
005bf40f  JZ 0x005bf441
005bf411  MOV dword ptr [EBP + -0x10],0x64
005bf418  JMP 0x005bf423
005bf41a  MOV EDX,dword ptr [EBP + -0x10]
005bf41d  ADD EDX,0x1
005bf420  MOV dword ptr [EBP + -0x10],EDX
005bf423  CMP dword ptr [EBP + -0x10],0xca
005bf42a  JG 0x005bf441
005bf42c  MOV EAX,dword ptr [EBP + -0x34]
005bf42f  MOV ECX,dword ptr [EAX + 0xc]
005bf432  PUSH ECX
005bf433  MOV EDX,dword ptr [EBP + -0x10]
005bf436  PUSH EDX
005bf437  CALL 0x006104c0
005bf43c  ADD ESP,0x8
005bf43f  JMP 0x005bf41a
005bf441  MOV byte ptr [EBP + -0x4],0x0
005bf445  MOV EAX,dword ptr [EBP + -0x34]
005bf448  ADD EAX,0x1c
005bf44b  MOV dword ptr [EBP + -0x30],EAX
005bf44e  MOV ECX,dword ptr [EBP + -0x30]
005bf451  CALL 0x005be450
005bf456  MOV dword ptr [EBP + -0x4],0xffffffff
005bf45d  MOV ECX,dword ptr [EBP + -0x34]
005bf460  CALL 0x005e9e40
005bf465  MOV ECX,dword ptr [EBP + -0xc]
005bf468  MOV dword ptr FS:[0x0],ECX
005bf46f  POP ECX
005bf470  MOV ESP,EBP
005bf472  POP EBP
005bf473  RET
