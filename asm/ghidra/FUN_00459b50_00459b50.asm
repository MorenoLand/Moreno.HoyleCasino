; FUN_00459b50  00459b50
00459b50  PUSH EBP
00459b51  MOV EBP,ESP
00459b53  PUSH -0x1
00459b55  PUSH 0x69f0ec
00459b5a  MOV EAX,FS:[0x0]
00459b60  PUSH EAX
00459b61  SUB ESP,0x14
00459b64  MOV EAX,[0x00781870]
00459b69  XOR EAX,EBP
00459b6b  PUSH EAX
00459b6c  LEA EAX,[EBP + -0xc]
00459b6f  MOV FS:[0x0],EAX
00459b75  MOV dword ptr [EBP + -0x1c],ECX
00459b78  MOV EAX,dword ptr [EBP + -0x1c]
00459b7b  MOV dword ptr [EAX],0x6b98a8
00459b81  MOV dword ptr [EBP + -0x4],0x0
00459b88  MOV dword ptr [EBP + -0x10],0x0
00459b8f  JMP 0x00459b9a
00459b91  MOV ECX,dword ptr [EBP + -0x10]
00459b94  ADD ECX,0x1
00459b97  MOV dword ptr [EBP + -0x10],ECX
00459b9a  CMP dword ptr [EBP + -0x10],0x7
00459b9e  JGE 0x00459bd5
00459ba0  MOV EDX,dword ptr [EBP + -0x10]
00459ba3  MOV EAX,dword ptr [EBP + -0x1c]
00459ba6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
00459baa  MOV dword ptr [EBP + -0x18],ECX
00459bad  MOV EDX,dword ptr [EBP + -0x18]
00459bb0  MOV dword ptr [EBP + -0x14],EDX
00459bb3  CMP dword ptr [EBP + -0x14],0x0
00459bb7  JZ 0x00459bcc
00459bb9  PUSH 0x1
00459bbb  MOV EAX,dword ptr [EBP + -0x14]
00459bbe  MOV EDX,dword ptr [EAX]
00459bc0  MOV ECX,dword ptr [EBP + -0x14]
00459bc3  MOV EAX,dword ptr [EDX]
00459bc5  CALL EAX
00459bc7  MOV dword ptr [EBP + -0x20],EAX
00459bca  JMP 0x00459bd3
00459bcc  MOV dword ptr [EBP + -0x20],0x0
00459bd3  JMP 0x00459b91
00459bd5  MOV dword ptr [EBP + -0x4],0xffffffff
00459bdc  MOV ECX,dword ptr [EBP + -0x1c]
00459bdf  CALL 0x005e9e40
00459be4  MOV ECX,dword ptr [EBP + -0xc]
00459be7  MOV dword ptr FS:[0x0],ECX
00459bee  POP ECX
00459bef  MOV ESP,EBP
00459bf1  POP EBP
00459bf2  RET
