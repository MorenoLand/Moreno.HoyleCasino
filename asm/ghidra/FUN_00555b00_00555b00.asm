; FUN_00555b00  00555b00
00555b00  PUSH EBP
00555b01  MOV EBP,ESP
00555b03  PUSH -0x1
00555b05  PUSH 0x6a56a8
00555b0a  MOV EAX,FS:[0x0]
00555b10  PUSH EAX
00555b11  SUB ESP,0x28
00555b14  MOV EAX,[0x00781870]
00555b19  XOR EAX,EBP
00555b1b  PUSH EAX
00555b1c  LEA EAX,[EBP + -0xc]
00555b1f  MOV FS:[0x0],EAX
00555b25  MOV dword ptr [EBP + -0x28],ECX
00555b28  MOV EAX,dword ptr [EBP + -0x28]
00555b2b  MOV dword ptr [EAX],0x6c86c4
00555b31  MOV dword ptr [EBP + -0x4],0x0
00555b38  MOV dword ptr [0x0079341c],0x0
00555b42  MOV ECX,dword ptr [0x00793420]
00555b48  MOV dword ptr [EBP + -0x14],ECX
00555b4b  MOV EDX,dword ptr [EBP + -0x14]
00555b4e  MOV dword ptr [EBP + -0x10],EDX
00555b51  CMP dword ptr [EBP + -0x10],0x0
00555b55  JZ 0x00555b6a
00555b57  PUSH 0x1
00555b59  MOV EAX,dword ptr [EBP + -0x10]
00555b5c  MOV EDX,dword ptr [EAX]
00555b5e  MOV ECX,dword ptr [EBP + -0x10]
00555b61  MOV EAX,dword ptr [EDX]
00555b63  CALL EAX
00555b65  MOV dword ptr [EBP + -0x2c],EAX
00555b68  JMP 0x00555b71
00555b6a  MOV dword ptr [EBP + -0x2c],0x0
00555b71  MOV dword ptr [0x00793420],0x0
00555b7b  MOV ECX,dword ptr [0x00793424]
00555b81  MOV dword ptr [EBP + -0x1c],ECX
00555b84  MOV EDX,dword ptr [EBP + -0x1c]
00555b87  MOV dword ptr [EBP + -0x18],EDX
00555b8a  CMP dword ptr [EBP + -0x18],0x0
00555b8e  JZ 0x00555ba3
00555b90  PUSH 0x1
00555b92  MOV EAX,dword ptr [EBP + -0x18]
00555b95  MOV EDX,dword ptr [EAX]
00555b97  MOV ECX,dword ptr [EBP + -0x18]
00555b9a  MOV EAX,dword ptr [EDX]
00555b9c  CALL EAX
00555b9e  MOV dword ptr [EBP + -0x30],EAX
00555ba1  JMP 0x00555baa
00555ba3  MOV dword ptr [EBP + -0x30],0x0
00555baa  MOV dword ptr [0x00793424],0x0
00555bb4  MOV ECX,dword ptr [0x00793428]
00555bba  MOV dword ptr [EBP + -0x24],ECX
00555bbd  MOV EDX,dword ptr [EBP + -0x24]
00555bc0  MOV dword ptr [EBP + -0x20],EDX
00555bc3  CMP dword ptr [EBP + -0x20],0x0
00555bc7  JZ 0x00555bdc
00555bc9  PUSH 0x1
00555bcb  MOV EAX,dword ptr [EBP + -0x20]
00555bce  MOV EDX,dword ptr [EAX]
00555bd0  MOV ECX,dword ptr [EBP + -0x20]
00555bd3  MOV EAX,dword ptr [EDX]
00555bd5  CALL EAX
00555bd7  MOV dword ptr [EBP + -0x34],EAX
00555bda  JMP 0x00555be3
00555bdc  MOV dword ptr [EBP + -0x34],0x0
00555be3  MOV dword ptr [0x00793428],0x0
00555bed  MOV dword ptr [EBP + -0x4],0xffffffff
00555bf4  MOV ECX,dword ptr [EBP + -0x28]
00555bf7  CALL 0x005d7bd0
00555bfc  MOV ECX,dword ptr [EBP + -0xc]
00555bff  MOV dword ptr FS:[0x0],ECX
00555c06  POP ECX
00555c07  MOV ESP,EBP
00555c09  POP EBP
00555c0a  RET
