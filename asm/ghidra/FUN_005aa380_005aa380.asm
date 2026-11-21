; FUN_005aa380  005aa380
005aa380  PUSH EBP
005aa381  MOV EBP,ESP
005aa383  PUSH -0x1
005aa385  PUSH 0x6a7ab2
005aa38a  MOV EAX,FS:[0x0]
005aa390  PUSH EAX
005aa391  SUB ESP,0x1c
005aa394  MOV EAX,[0x00781870]
005aa399  XOR EAX,EBP
005aa39b  PUSH EAX
005aa39c  LEA EAX,[EBP + -0xc]
005aa39f  MOV FS:[0x0],EAX
005aa3a5  MOV dword ptr [EBP + -0x20],ECX
005aa3a8  MOV EAX,[0x007935f8]
005aa3ad  CMP dword ptr [EAX + 0x40],0x0
005aa3b1  JZ 0x005aa439
005aa3b7  PUSH 0x13ad
005aa3bc  MOV ECX,dword ptr [0x007935f8]
005aa3c2  MOV ECX,dword ptr [ECX + 0x40]
005aa3c5  CALL 0x005eaf00
005aa3ca  PUSH 0x0
005aa3cc  MOV EDX,dword ptr [0x007935f8]
005aa3d2  MOV EAX,dword ptr [EDX + 0x40]
005aa3d5  MOV ECX,dword ptr [0x007935f8]
005aa3db  MOV ECX,dword ptr [ECX + 0x40]
005aa3de  MOV EDX,dword ptr [EAX]
005aa3e0  MOV EAX,dword ptr [EDX + 0xb0]
005aa3e6  CALL EAX
005aa3e8  PUSH 0x20
005aa3ea  CALL 0x00686d82
005aa3ef  ADD ESP,0x4
005aa3f2  MOV dword ptr [EBP + -0x14],EAX
005aa3f5  MOV dword ptr [EBP + -0x4],0x0
005aa3fc  CMP dword ptr [EBP + -0x14],0x0
005aa400  JZ 0x005aa413
005aa402  MOV ECX,dword ptr [EBP + 0x8]
005aa405  PUSH ECX
005aa406  MOV ECX,dword ptr [EBP + -0x14]
005aa409  CALL 0x006010a0
005aa40e  MOV dword ptr [EBP + -0x24],EAX
005aa411  JMP 0x005aa41a
005aa413  MOV dword ptr [EBP + -0x24],0x0
005aa41a  MOV EDX,dword ptr [EBP + -0x24]
005aa41d  MOV dword ptr [EBP + -0x10],EDX
005aa420  MOV dword ptr [EBP + -0x4],0xffffffff
005aa427  MOV EAX,dword ptr [EBP + -0x10]
005aa42a  PUSH EAX
005aa42b  MOV ECX,dword ptr [0x007935f8]
005aa431  MOV ECX,dword ptr [ECX + 0x40]
005aa434  CALL 0x005f5d50
005aa439  MOV EDX,dword ptr [0x007935f8]
005aa43f  CMP dword ptr [EDX + 0x3c],0x0
005aa443  JZ 0x005aa4c2
005aa445  PUSH 0x13ac
005aa44a  MOV EAX,[0x007935f8]
005aa44f  MOV ECX,dword ptr [EAX + 0x3c]
005aa452  CALL 0x005eaf00
005aa457  PUSH 0x0
005aa459  MOV ECX,dword ptr [0x007935f8]
005aa45f  MOV EDX,dword ptr [ECX + 0x3c]
005aa462  MOV EAX,[0x007935f8]
005aa467  MOV ECX,dword ptr [EAX + 0x3c]
005aa46a  MOV EDX,dword ptr [EDX]
005aa46c  MOV EAX,dword ptr [EDX + 0xb0]
005aa472  CALL EAX
005aa474  PUSH 0x20
005aa476  CALL 0x00686d82
005aa47b  ADD ESP,0x4
005aa47e  MOV dword ptr [EBP + -0x1c],EAX
005aa481  MOV dword ptr [EBP + -0x4],0x1
005aa488  CMP dword ptr [EBP + -0x1c],0x0
005aa48c  JZ 0x005aa49d
005aa48e  PUSH 0x0
005aa490  MOV ECX,dword ptr [EBP + -0x1c]
005aa493  CALL 0x006010a0
005aa498  MOV dword ptr [EBP + -0x28],EAX
005aa49b  JMP 0x005aa4a4
005aa49d  MOV dword ptr [EBP + -0x28],0x0
005aa4a4  MOV ECX,dword ptr [EBP + -0x28]
005aa4a7  MOV dword ptr [EBP + -0x18],ECX
005aa4aa  MOV dword ptr [EBP + -0x4],0xffffffff
005aa4b1  MOV EDX,dword ptr [EBP + -0x18]
005aa4b4  PUSH EDX
005aa4b5  MOV EAX,[0x007935f8]
005aa4ba  MOV ECX,dword ptr [EAX + 0x3c]
005aa4bd  CALL 0x005f5d50
005aa4c2  MOV ECX,dword ptr [EBP + -0xc]
005aa4c5  MOV dword ptr FS:[0x0],ECX
005aa4cc  POP ECX
005aa4cd  MOV ESP,EBP
005aa4cf  POP EBP
005aa4d0  RET 0x4
