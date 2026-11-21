; FUN_00629e40  00629e40
00629e40  PUSH EBP
00629e41  MOV EBP,ESP
00629e43  PUSH -0x1
00629e45  PUSH 0x6ab64e
00629e4a  MOV EAX,FS:[0x0]
00629e50  PUSH EAX
00629e51  SUB ESP,0x1c
00629e54  MOV EAX,[0x00781870]
00629e59  XOR EAX,EBP
00629e5b  PUSH EAX
00629e5c  LEA EAX,[EBP + -0xc]
00629e5f  MOV FS:[0x0],EAX
00629e65  MOV dword ptr [EBP + -0x20],ECX
00629e68  MOV ECX,dword ptr [EBP + -0x20]
00629e6b  CALL 0x005f49d0
00629e70  MOV dword ptr [EBP + -0x4],0x0
00629e77  MOV EAX,dword ptr [EBP + -0x20]
00629e7a  MOV dword ptr [EAX],0x6d952c
00629e80  MOV ECX,dword ptr [EBP + -0x20]
00629e83  MOV dword ptr [ECX + 0x48],0x0
00629e8a  MOV EDX,dword ptr [EBP + -0x20]
00629e8d  MOV dword ptr [EDX + 0x4c],0x0
00629e94  MOV EAX,dword ptr [EBP + -0x20]
00629e97  MOV dword ptr [EAX + 0x50],0x0
00629e9e  MOV ECX,dword ptr [EBP + -0x20]
00629ea1  MOV dword ptr [ECX + 0x54],0x0
00629ea8  PUSH 0x1e4
00629ead  CALL 0x00686d82
00629eb2  ADD ESP,0x4
00629eb5  MOV dword ptr [EBP + -0x14],EAX
00629eb8  MOV byte ptr [EBP + -0x4],0x1
00629ebc  CMP dword ptr [EBP + -0x14],0x0
00629ec0  JZ 0x00629ed5
00629ec2  PUSH 0x1
00629ec4  MOV EDX,dword ptr [EBP + -0x20]
00629ec7  PUSH EDX
00629ec8  MOV ECX,dword ptr [EBP + -0x14]
00629ecb  CALL 0x0062a760
00629ed0  MOV dword ptr [EBP + -0x24],EAX
00629ed3  JMP 0x00629edc
00629ed5  MOV dword ptr [EBP + -0x24],0x0
00629edc  MOV EAX,dword ptr [EBP + -0x24]
00629edf  MOV dword ptr [EBP + -0x10],EAX
00629ee2  MOV byte ptr [EBP + -0x4],0x0
00629ee6  MOV ECX,dword ptr [EBP + -0x20]
00629ee9  MOV EDX,dword ptr [EBP + -0x10]
00629eec  MOV dword ptr [ECX + 0x50],EDX
00629eef  PUSH 0x1e4
00629ef4  CALL 0x00686d82
00629ef9  ADD ESP,0x4
00629efc  MOV dword ptr [EBP + -0x1c],EAX
00629eff  MOV byte ptr [EBP + -0x4],0x2
00629f03  CMP dword ptr [EBP + -0x1c],0x0
00629f07  JZ 0x00629f1c
00629f09  PUSH 0x0
00629f0b  MOV EAX,dword ptr [EBP + -0x20]
00629f0e  PUSH EAX
00629f0f  MOV ECX,dword ptr [EBP + -0x1c]
00629f12  CALL 0x0062a760
00629f17  MOV dword ptr [EBP + -0x28],EAX
00629f1a  JMP 0x00629f23
00629f1c  MOV dword ptr [EBP + -0x28],0x0
00629f23  MOV ECX,dword ptr [EBP + -0x28]
00629f26  MOV dword ptr [EBP + -0x18],ECX
00629f29  MOV byte ptr [EBP + -0x4],0x0
00629f2d  MOV EDX,dword ptr [EBP + -0x20]
00629f30  MOV EAX,dword ptr [EBP + -0x18]
00629f33  MOV dword ptr [EDX + 0x4c],EAX
00629f36  MOV dword ptr [EBP + -0x4],0xffffffff
00629f3d  MOV EAX,dword ptr [EBP + -0x20]
00629f40  MOV ECX,dword ptr [EBP + -0xc]
00629f43  MOV dword ptr FS:[0x0],ECX
00629f4a  POP ECX
00629f4b  MOV ESP,EBP
00629f4d  POP EBP
00629f4e  RET
