; FUN_0068f690  0068f690
0068f690  PUSH EBP
0068f691  MOV EBP,ESP
0068f693  PUSH -0x1
0068f695  PUSH 0x6ae2c0
0068f69a  MOV EAX,FS:[0x0]
0068f6a0  PUSH EAX
0068f6a1  PUSH ECX
0068f6a2  SUB ESP,0x50
0068f6a5  PUSH EBX
0068f6a6  PUSH ESI
0068f6a7  PUSH EDI
0068f6a8  MOV EAX,[0x00781870]
0068f6ad  XOR EAX,EBP
0068f6af  PUSH EAX
0068f6b0  LEA EAX,[EBP + -0xc]
0068f6b3  MOV FS:[0x0],EAX
0068f6b9  MOV dword ptr [EBP + -0x10],ESP
0068f6bc  MOV dword ptr [EBP + -0x54],ECX
0068f6bf  PUSH 0x1
0068f6c1  MOV ECX,dword ptr [EBP + -0x54]
0068f6c4  ADD ECX,0x1
0068f6c7  CALL 0x0068f7e0
0068f6cc  MOV dword ptr [EBP + -0x18],EAX
0068f6cf  MOV dword ptr [EBP + -0x14],0x0
0068f6d6  MOV dword ptr [EBP + -0x4],0x0
0068f6dd  MOV dword ptr [EBP + -0x1c],0x0
0068f6e4  MOV EAX,dword ptr [EBP + -0x18]
0068f6e7  MOV dword ptr [EBP + -0x3c],EAX
0068f6ea  MOV ECX,dword ptr [EBP + -0x3c]
0068f6ed  MOV dword ptr [EBP + -0x40],ECX
0068f6f0  CMP dword ptr [EBP + -0x40],0x0
0068f6f4  JZ 0x0068f706
0068f6f6  MOV EDX,dword ptr [EBP + -0x40]
0068f6f9  MOV EAX,dword ptr [EBP + -0x1c]
0068f6fc  MOV dword ptr [EDX],EAX
0068f6fe  MOV ECX,dword ptr [EBP + -0x40]
0068f701  MOV dword ptr [EBP + -0x58],ECX
0068f704  JMP 0x0068f70d
0068f706  MOV dword ptr [EBP + -0x58],0x0
0068f70d  MOV EDX,dword ptr [EBP + -0x14]
0068f710  ADD EDX,0x1
0068f713  MOV dword ptr [EBP + -0x14],EDX
0068f716  MOV dword ptr [EBP + -0x20],0x0
0068f71d  MOV EAX,dword ptr [EBP + -0x18]
0068f720  ADD EAX,0x4
0068f723  MOV dword ptr [EBP + -0x44],EAX
0068f726  MOV ECX,dword ptr [EBP + -0x44]
0068f729  MOV dword ptr [EBP + -0x48],ECX
0068f72c  CMP dword ptr [EBP + -0x48],0x0
0068f730  JZ 0x0068f742
0068f732  MOV EDX,dword ptr [EBP + -0x48]
0068f735  MOV EAX,dword ptr [EBP + -0x20]
0068f738  MOV dword ptr [EDX],EAX
0068f73a  MOV ECX,dword ptr [EBP + -0x48]
0068f73d  MOV dword ptr [EBP + -0x5c],ECX
0068f740  JMP 0x0068f749
0068f742  MOV dword ptr [EBP + -0x5c],0x0
0068f749  MOV EDX,dword ptr [EBP + -0x14]
0068f74c  ADD EDX,0x1
0068f74f  MOV dword ptr [EBP + -0x14],EDX
0068f752  MOV dword ptr [EBP + -0x24],0x0
0068f759  MOV EAX,dword ptr [EBP + -0x18]
0068f75c  ADD EAX,0x8
0068f75f  MOV dword ptr [EBP + -0x4c],EAX
0068f762  MOV ECX,dword ptr [EBP + -0x4c]
0068f765  MOV dword ptr [EBP + -0x50],ECX
0068f768  CMP dword ptr [EBP + -0x50],0x0
0068f76c  JZ 0x0068f77e
0068f76e  MOV EDX,dword ptr [EBP + -0x50]
0068f771  MOV EAX,dword ptr [EBP + -0x24]
0068f774  MOV dword ptr [EDX],EAX
0068f776  MOV ECX,dword ptr [EBP + -0x50]
0068f779  MOV dword ptr [EBP + -0x60],ECX
0068f77c  JMP 0x0068f785
0068f77e  MOV dword ptr [EBP + -0x60],0x0
0068f785  JMP 0x0068f7a9
