; FUN_005dca80  005dca80
005dca80  PUSH EBP
005dca81  MOV EBP,ESP
005dca83  PUSH -0x1
005dca85  PUSH 0x6a94db
005dca8a  MOV EAX,FS:[0x0]
005dca90  PUSH EAX
005dca91  SUB ESP,0xc
005dca94  MOV EAX,[0x00781870]
005dca99  XOR EAX,EBP
005dca9b  PUSH EAX
005dca9c  LEA EAX,[EBP + -0xc]
005dca9f  MOV FS:[0x0],EAX
005dcaa5  PUSH 0x4f84
005dcaaa  CALL 0x00686d82
005dcaaf  ADD ESP,0x4
005dcab2  MOV dword ptr [EBP + -0x14],EAX
005dcab5  MOV dword ptr [EBP + -0x4],0x0
005dcabc  CMP dword ptr [EBP + -0x14],0x0
005dcac0  JZ 0x005dcacf
005dcac2  MOV ECX,dword ptr [EBP + -0x14]
005dcac5  CALL 0x005dcb80
005dcaca  MOV dword ptr [EBP + -0x18],EAX
005dcacd  JMP 0x005dcad6
005dcacf  MOV dword ptr [EBP + -0x18],0x0
005dcad6  MOV EAX,dword ptr [EBP + -0x18]
005dcad9  MOV dword ptr [EBP + -0x10],EAX
005dcadc  MOV dword ptr [EBP + -0x4],0xffffffff
005dcae3  MOV ECX,dword ptr [EBP + -0x10]
005dcae6  MOV dword ptr [0x007947e0],ECX
005dcaec  MOV EAX,[0x007947e0]
005dcaf1  MOV ECX,dword ptr [EBP + -0xc]
005dcaf4  MOV dword ptr FS:[0x0],ECX
005dcafb  POP ECX
005dcafc  MOV ESP,EBP
005dcafe  POP EBP
005dcaff  RET
