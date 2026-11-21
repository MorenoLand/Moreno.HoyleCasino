; FUN_005abdc0  005abdc0
005abdc0  PUSH EBP
005abdc1  MOV EBP,ESP
005abdc3  PUSH -0x1
005abdc5  PUSH 0x6a7c02
005abdca  MOV EAX,FS:[0x0]
005abdd0  PUSH EAX
005abdd1  SUB ESP,0x14
005abdd4  MOV EAX,[0x00781870]
005abdd9  XOR EAX,EBP
005abddb  PUSH EAX
005abddc  LEA EAX,[EBP + -0xc]
005abddf  MOV FS:[0x0],EAX
005abde5  MOV dword ptr [EBP + -0x1c],ECX
005abde8  XOR EAX,EAX
005abdea  CMP dword ptr [EBP + 0x8],0x0
005abdee  SETZ AL
005abdf1  MOV byte ptr [EBP + -0xd],AL
005abdf4  MOV ECX,dword ptr [0x007935f8]
005abdfa  CALL 0x005a7130
005abdff  PUSH 0x24
005abe01  CALL 0x00686d82
005abe06  ADD ESP,0x4
005abe09  MOV dword ptr [EBP + -0x18],EAX
005abe0c  MOV dword ptr [EBP + -0x4],0x0
005abe13  CMP dword ptr [EBP + -0x18],0x0
005abe17  JZ 0x005abe32
005abe19  MOVZX ECX,byte ptr [EBP + -0xd]
005abe1d  NEG ECX
005abe1f  SBB ECX,ECX
005abe21  ADD ECX,0x6
005abe24  PUSH ECX
005abe25  MOV ECX,dword ptr [EBP + -0x18]
005abe28  CALL 0x005acb70
005abe2d  MOV dword ptr [EBP + -0x20],EAX
005abe30  JMP 0x005abe39
005abe32  MOV dword ptr [EBP + -0x20],0x0
005abe39  MOV EDX,dword ptr [EBP + -0x20]
005abe3c  MOV dword ptr [EBP + -0x14],EDX
005abe3f  MOV dword ptr [EBP + -0x4],0xffffffff
005abe46  MOV EAX,dword ptr [EBP + -0x14]
005abe49  PUSH EAX
005abe4a  MOV ECX,dword ptr [0x00793600]
005abe50  MOV ECX,dword ptr [ECX + 0x4]
005abe53  CALL 0x005fc420
005abe58  MOV ECX,dword ptr [EBP + -0xc]
005abe5b  MOV dword ptr FS:[0x0],ECX
005abe62  POP ECX
005abe63  MOV ESP,EBP
005abe65  POP EBP
005abe66  RET 0x4
