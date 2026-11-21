; FUN_005af990  005af990
005af990  PUSH EBP
005af991  MOV EBP,ESP
005af993  PUSH -0x1
005af995  PUSH 0x6a7d2b
005af99a  MOV EAX,FS:[0x0]
005af9a0  PUSH EAX
005af9a1  SUB ESP,0x34
005af9a4  MOV EAX,[0x00781870]
005af9a9  XOR EAX,EBP
005af9ab  PUSH EAX
005af9ac  LEA EAX,[EBP + -0xc]
005af9af  MOV FS:[0x0],EAX
005af9b5  MOV dword ptr [EBP + -0x30],ECX
005af9b8  MOV EAX,dword ptr [EBP + -0x30]
005af9bb  MOV dword ptr [EAX],0x6cfeac
005af9c1  MOV dword ptr [EBP + -0x4],0x0
005af9c8  MOV dword ptr [0x00793600],0x0
005af9d2  MOV ECX,dword ptr [0x00793604]
005af9d8  MOV dword ptr [EBP + -0x14],ECX
005af9db  MOV EDX,dword ptr [EBP + -0x14]
005af9de  MOV dword ptr [EBP + -0x10],EDX
005af9e1  CMP dword ptr [EBP + -0x10],0x0
005af9e5  JZ 0x005af9fa
005af9e7  PUSH 0x1
005af9e9  MOV EAX,dword ptr [EBP + -0x10]
005af9ec  MOV EDX,dword ptr [EAX]
005af9ee  MOV ECX,dword ptr [EBP + -0x10]
005af9f1  MOV EAX,dword ptr [EDX]
005af9f3  CALL EAX
005af9f5  MOV dword ptr [EBP + -0x34],EAX
005af9f8  JMP 0x005afa01
005af9fa  MOV dword ptr [EBP + -0x34],0x0
005afa01  MOV dword ptr [0x00793604],0x0
005afa0b  MOV ECX,dword ptr [0x007935fc]
005afa11  MOV dword ptr [EBP + -0x1c],ECX
005afa14  MOV EDX,dword ptr [EBP + -0x1c]
005afa17  MOV dword ptr [EBP + -0x18],EDX
005afa1a  CMP dword ptr [EBP + -0x18],0x0
005afa1e  JZ 0x005afa33
005afa20  PUSH 0x1
005afa22  MOV EAX,dword ptr [EBP + -0x18]
005afa25  MOV EDX,dword ptr [EAX]
005afa27  MOV ECX,dword ptr [EBP + -0x18]
005afa2a  MOV EAX,dword ptr [EDX]
005afa2c  CALL EAX
005afa2e  MOV dword ptr [EBP + -0x38],EAX
005afa31  JMP 0x005afa3a
005afa33  MOV dword ptr [EBP + -0x38],0x0
005afa3a  MOV dword ptr [0x007935fc],0x0
005afa44  MOV ECX,dword ptr [0x007935f8]
005afa4a  MOV dword ptr [EBP + -0x24],ECX
005afa4d  MOV EDX,dword ptr [EBP + -0x24]
005afa50  MOV dword ptr [EBP + -0x20],EDX
005afa53  CMP dword ptr [EBP + -0x20],0x0
005afa57  JZ 0x005afa6c
005afa59  PUSH 0x1
005afa5b  MOV EAX,dword ptr [EBP + -0x20]
005afa5e  MOV EDX,dword ptr [EAX]
005afa60  MOV ECX,dword ptr [EBP + -0x20]
005afa63  MOV EAX,dword ptr [EDX]
005afa65  CALL EAX
005afa67  MOV dword ptr [EBP + -0x3c],EAX
005afa6a  JMP 0x005afa73
005afa6c  MOV dword ptr [EBP + -0x3c],0x0
005afa73  MOV dword ptr [0x007935f8],0x0
005afa7d  MOV ECX,dword ptr [0x007935f4]
005afa83  MOV dword ptr [EBP + -0x2c],ECX
005afa86  MOV EDX,dword ptr [EBP + -0x2c]
005afa89  MOV dword ptr [EBP + -0x28],EDX
005afa8c  CMP dword ptr [EBP + -0x28],0x0
005afa90  JZ 0x005afaa5
005afa92  PUSH 0x1
005afa94  MOV EAX,dword ptr [EBP + -0x28]
005afa97  MOV EDX,dword ptr [EAX]
005afa99  MOV ECX,dword ptr [EBP + -0x28]
005afa9c  MOV EAX,dword ptr [EDX]
005afa9e  CALL EAX
005afaa0  MOV dword ptr [EBP + -0x40],EAX
005afaa3  JMP 0x005afaac
005afaa5  MOV dword ptr [EBP + -0x40],0x0
005afaac  MOV dword ptr [0x007935f4],0x0
005afab6  MOV dword ptr [EBP + -0x4],0xffffffff
005afabd  MOV ECX,dword ptr [EBP + -0x30]
005afac0  CALL 0x005d7bd0
005afac5  MOV ECX,dword ptr [EBP + -0xc]
005afac8  MOV dword ptr FS:[0x0],ECX
005afacf  POP ECX
005afad0  MOV ESP,EBP
005afad2  POP EBP
005afad3  RET
