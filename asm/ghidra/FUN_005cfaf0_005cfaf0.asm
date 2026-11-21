; FUN_005cfaf0  005cfaf0
005cfaf0  PUSH EBP
005cfaf1  MOV EBP,ESP
005cfaf3  PUSH -0x1
005cfaf5  PUSH 0x6a8cdd
005cfafa  MOV EAX,FS:[0x0]
005cfb00  PUSH EAX
005cfb01  PUSH ECX
005cfb02  MOV EAX,[0x00781870]
005cfb07  XOR EAX,EBP
005cfb09  PUSH EAX
005cfb0a  LEA EAX,[EBP + -0xc]
005cfb0d  MOV FS:[0x0],EAX
005cfb13  MOV dword ptr [EBP + -0x10],ECX
005cfb16  PUSH 0x0
005cfb18  PUSH 0x1
005cfb1a  MOV ECX,dword ptr [EBP + -0x10]
005cfb1d  CALL 0x005f71f0
005cfb22  MOV dword ptr [EBP + -0x4],0x0
005cfb29  MOV EAX,dword ptr [EBP + -0x10]
005cfb2c  MOV dword ptr [EAX],0x6d3224
005cfb32  PUSH 0x0
005cfb34  PUSH 0x30d4f3
005cfb39  MOV ECX,dword ptr [EBP + -0x10]
005cfb3c  CALL 0x005f83d0
005cfb41  MOV dword ptr [EBP + -0x4],0xffffffff
005cfb48  MOV EAX,dword ptr [EBP + -0x10]
005cfb4b  MOV ECX,dword ptr [EBP + -0xc]
005cfb4e  MOV dword ptr FS:[0x0],ECX
005cfb55  POP ECX
005cfb56  MOV ESP,EBP
005cfb58  POP EBP
005cfb59  RET
