; FUN_005fa980  005fa980
005fa980  PUSH EBP
005fa981  MOV EBP,ESP
005fa983  PUSH -0x1
005fa985  PUSH 0x6aa458
005fa98a  MOV EAX,FS:[0x0]
005fa990  PUSH EAX
005fa991  SUB ESP,0x14
005fa994  MOV EAX,[0x00781870]
005fa999  XOR EAX,EBP
005fa99b  PUSH EAX
005fa99c  LEA EAX,[EBP + -0xc]
005fa99f  MOV FS:[0x0],EAX
005fa9a5  MOV dword ptr [EBP + -0x1c],ECX
005fa9a8  CMP dword ptr [EBP + 0x8],0x0
005fa9ac  JNZ 0x005fa9ef
005fa9ae  PUSH 0x60
005fa9b0  CALL 0x00686d82
005fa9b5  ADD ESP,0x4
005fa9b8  MOV dword ptr [EBP + -0x14],EAX
005fa9bb  MOV dword ptr [EBP + -0x4],0x0
005fa9c2  CMP dword ptr [EBP + -0x14],0x0
005fa9c6  JZ 0x005fa9d5
005fa9c8  MOV ECX,dword ptr [EBP + -0x14]
005fa9cb  CALL 0x00627090
005fa9d0  MOV dword ptr [EBP + -0x20],EAX
005fa9d3  JMP 0x005fa9dc
005fa9d5  MOV dword ptr [EBP + -0x20],0x0
005fa9dc  MOV EAX,dword ptr [EBP + -0x20]
005fa9df  MOV dword ptr [EBP + -0x10],EAX
005fa9e2  MOV dword ptr [EBP + -0x4],0xffffffff
005fa9e9  MOV ECX,dword ptr [EBP + -0x10]
005fa9ec  MOV dword ptr [EBP + 0x8],ECX
005fa9ef  MOV EDX,dword ptr [EBP + 0x8]
005fa9f2  PUSH EDX
005fa9f3  MOV ECX,dword ptr [EBP + -0x1c]
005fa9f6  ADD ECX,0xc4
005fa9fc  CALL 0x0060c840
005faa01  MOV EAX,dword ptr [EBP + 0x8]
005faa04  MOV ECX,dword ptr [EBP + -0x1c]
005faa07  MOV dword ptr [EAX + 0x4],ECX
005faa0a  MOV EDX,dword ptr [EBP + 0xc]
005faa0d  PUSH EDX
005faa0e  MOV EAX,dword ptr [EBP + 0x20]
005faa11  PUSH EAX
005faa12  MOV ECX,dword ptr [EBP + 0x1c]
005faa15  PUSH ECX
005faa16  MOV EDX,dword ptr [EBP + 0x18]
005faa19  PUSH EDX
005faa1a  MOV EAX,dword ptr [EBP + 0x14]
005faa1d  PUSH EAX
005faa1e  MOV ECX,dword ptr [EBP + 0x10]
005faa21  PUSH ECX
005faa22  MOV EDX,dword ptr [EBP + 0x8]
005faa25  MOV EAX,dword ptr [EDX]
005faa27  MOV ECX,dword ptr [EBP + 0x8]
005faa2a  MOV EDX,dword ptr [EAX + 0xb0]
005faa30  CALL EDX
005faa32  MOV AL,byte ptr [EBP + 0x2c]
005faa35  PUSH EAX
005faa36  MOV CL,byte ptr [EBP + 0x28]
005faa39  PUSH ECX
005faa3a  MOV DL,byte ptr [EBP + 0x24]
005faa3d  PUSH EDX
005faa3e  LEA EAX,[EBP + -0x17]
005faa41  PUSH EAX
005faa42  MOV ECX,dword ptr [EBP + 0x8]
005faa45  CALL 0x00627520
005faa4a  MOV CL,byte ptr [EBP + 0x30]
005faa4d  PUSH ECX
005faa4e  MOV ECX,dword ptr [EBP + 0x8]
005faa51  CALL 0x00627620
005faa56  MOV EDX,dword ptr [EBP + 0x34]
005faa59  PUSH EDX
005faa5a  MOV ECX,dword ptr [EBP + 0x8]
005faa5d  CALL 0x00627680
005faa62  MOV EAX,dword ptr [EBP + 0x8]
005faa65  MOV EDX,dword ptr [EAX]
005faa67  MOV ECX,dword ptr [EBP + 0x8]
005faa6a  MOV EAX,dword ptr [EDX + 0x74]
005faa6d  CALL EAX
005faa6f  MOV EAX,dword ptr [EBP + 0x8]
005faa72  MOV ECX,dword ptr [EBP + -0xc]
005faa75  MOV dword ptr FS:[0x0],ECX
005faa7c  POP ECX
005faa7d  MOV ESP,EBP
005faa7f  POP EBP
005faa80  RET 0x30
