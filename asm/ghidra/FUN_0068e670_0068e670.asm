; FUN_0068e670  0068e670
0068e670  PUSH EBP
0068e671  MOV EBP,ESP
0068e673  PUSH -0x1
0068e675  PUSH 0x6ae20a
0068e67a  MOV EAX,FS:[0x0]
0068e680  PUSH EAX
0068e681  PUSH ECX
0068e682  SUB ESP,0x30
0068e685  PUSH EBX
0068e686  PUSH ESI
0068e687  PUSH EDI
0068e688  MOV EAX,[0x00781870]
0068e68d  XOR EAX,EBP
0068e68f  PUSH EAX
0068e690  LEA EAX,[EBP + -0xc]
0068e693  MOV FS:[0x0],EAX
0068e699  MOV dword ptr [EBP + -0x10],ESP
0068e69c  MOV dword ptr [EBP + -0x38],ECX
0068e69f  PUSH 0x0
0068e6a1  PUSH 0x1
0068e6a3  CALL 0x0068f9d0
0068e6a8  ADD ESP,0x8
0068e6ab  MOV dword ptr [EBP + -0x14],EAX
0068e6ae  MOV dword ptr [EBP + -0x4],0x0
0068e6b5  MOV EAX,dword ptr [EBP + -0x14]
0068e6b8  MOV dword ptr [EBP + -0x1c],EAX
0068e6bb  MOV byte ptr [EBP + -0x4],0x1
0068e6bf  CMP dword ptr [EBP + -0x1c],0x0
0068e6c3  JZ 0x0068e730
0068e6c5  MOV ECX,dword ptr [EBP + -0x1c]
0068e6c8  MOV EDX,dword ptr [EBP + 0x8]
0068e6cb  MOV dword ptr [ECX],EDX
0068e6cd  MOV EAX,dword ptr [EBP + -0x1c]
0068e6d0  MOV ECX,dword ptr [EBP + 0xc]
0068e6d3  MOV dword ptr [EAX + 0x4],ECX
0068e6d6  MOV EDX,dword ptr [EBP + -0x1c]
0068e6d9  MOV EAX,dword ptr [EBP + 0x10]
0068e6dc  MOV dword ptr [EDX + 0x8],EAX
0068e6df  MOV ECX,dword ptr [EBP + -0x1c]
0068e6e2  ADD ECX,0xc
0068e6e5  MOV dword ptr [EBP + -0x34],ECX
0068e6e8  MOV EDX,dword ptr [EBP + 0x14]
0068e6eb  PUSH EDX
0068e6ec  MOV ECX,dword ptr [EBP + -0x34]
0068e6ef  CALL dword ptr [0x006b20f8]
0068e6f5  MOV dword ptr [EBP + -0x3c],EAX
0068e6f8  MOV byte ptr [EBP + -0x4],0x2
0068e6fc  MOV EAX,dword ptr [EBP + -0x34]
0068e6ff  ADD EAX,0x1c
0068e702  MOV dword ptr [EBP + -0x30],EAX
0068e705  MOV ECX,dword ptr [EBP + 0x14]
0068e708  ADD ECX,0x1c
0068e70b  PUSH ECX
0068e70c  MOV ECX,dword ptr [EBP + -0x30]
0068e70f  CALL 0x0068d530
0068e714  MOV byte ptr [EBP + -0x4],0x1
0068e718  MOV EDX,dword ptr [EBP + -0x1c]
0068e71b  MOV AL,byte ptr [EBP + 0x18]
0068e71e  MOV byte ptr [EDX + 0x34],AL
0068e721  MOV ECX,dword ptr [EBP + -0x1c]
0068e724  MOV byte ptr [ECX + 0x35],0x0
0068e728  MOV EDX,dword ptr [EBP + -0x1c]
0068e72b  MOV dword ptr [EBP + -0x40],EDX
0068e72e  JMP 0x0068e737
0068e730  MOV dword ptr [EBP + -0x40],0x0
0068e737  MOV EAX,dword ptr [EBP + -0x40]
0068e73a  MOV dword ptr [EBP + -0x18],EAX
0068e73d  MOV byte ptr [EBP + -0x4],0x0
0068e741  JMP 0x0068e765
