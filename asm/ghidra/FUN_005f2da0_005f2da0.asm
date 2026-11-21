; FUN_005f2da0  005f2da0
005f2da0  PUSH EBP
005f2da1  MOV EBP,ESP
005f2da3  PUSH -0x1
005f2da5  PUSH 0x6a9e68
005f2daa  MOV EAX,FS:[0x0]
005f2db0  PUSH EAX
005f2db1  PUSH ECX
005f2db2  MOV EAX,[0x00781870]
005f2db7  XOR EAX,EBP
005f2db9  PUSH EAX
005f2dba  LEA EAX,[EBP + -0xc]
005f2dbd  MOV FS:[0x0],EAX
005f2dc3  MOV dword ptr [EBP + -0x10],ECX
005f2dc6  MOV ECX,dword ptr [EBP + -0x10]
005f2dc9  CALL 0x005e9e20
005f2dce  MOV dword ptr [EBP + -0x4],0x0
005f2dd5  MOV EAX,dword ptr [EBP + -0x10]
005f2dd8  MOV dword ptr [EAX],0x6d666c
005f2dde  MOV ECX,dword ptr [EBP + -0x10]
005f2de1  ADD ECX,0x4
005f2de4  CALL 0x0060c5f0
005f2de9  MOV ECX,dword ptr [EBP + -0x10]
005f2dec  MOV dword ptr [0x015e55e8],ECX
005f2df2  MOV EDX,dword ptr [EBP + -0x10]
005f2df5  MOV EAX,dword ptr [EBP + 0x8]
005f2df8  MOV dword ptr [EDX + 0x44],EAX
005f2dfb  MOV ECX,dword ptr [EBP + -0x10]
005f2dfe  MOV EDX,dword ptr [EBP + 0xc]
005f2e01  MOV dword ptr [ECX + 0x48],EDX
005f2e04  MOV EAX,dword ptr [EBP + -0x10]
005f2e07  MOV dword ptr [EAX + 0x20],0x0
005f2e0e  MOV ECX,dword ptr [EBP + -0x10]
005f2e11  MOV byte ptr [ECX + 0x24],0x0
005f2e15  MOV EDX,dword ptr [EBP + -0x10]
005f2e18  MOV dword ptr [EDX + 0x18],0x0
005f2e1f  MOV EAX,dword ptr [EBP + -0x10]
005f2e22  MOV dword ptr [EAX + 0x1c],0x0
005f2e29  MOV ECX,dword ptr [EBP + -0x10]
005f2e2c  MOV dword ptr [ECX + 0x2c],0xffffffff
005f2e33  MOV EDX,dword ptr [EBP + -0x10]
005f2e36  MOV dword ptr [EDX + 0x30],0xffffffff
005f2e3d  MOV EAX,dword ptr [EBP + -0x10]
005f2e40  MOV dword ptr [EAX + 0x34],0xffffffff
005f2e47  MOV dword ptr [0x015e55e4],0x0
005f2e51  MOV ECX,dword ptr [EBP + -0x10]
005f2e54  MOV dword ptr [ECX + 0x28],0x0
005f2e5b  MOV EDX,dword ptr [EBP + -0x10]
005f2e5e  MOV dword ptr [EDX + 0x38],0x0
005f2e65  MOV EAX,dword ptr [EBP + -0x10]
005f2e68  MOV dword ptr [EAX + 0x3c],0x0
005f2e6f  MOV ECX,dword ptr [EBP + -0x10]
005f2e72  MOV dword ptr [ECX + 0x14],0x0
005f2e79  MOV EDX,dword ptr [EBP + -0x10]
005f2e7c  MOV dword ptr [EDX + 0x40],0x0
005f2e83  MOV EAX,dword ptr [EBP + -0x10]
005f2e86  MOV byte ptr [EAX + 0x4c],0x1
005f2e8a  MOV dword ptr [EBP + -0x4],0xffffffff
005f2e91  MOV EAX,dword ptr [EBP + -0x10]
005f2e94  MOV ECX,dword ptr [EBP + -0xc]
005f2e97  MOV dword ptr FS:[0x0],ECX
005f2e9e  POP ECX
005f2e9f  MOV ESP,EBP
005f2ea1  POP EBP
005f2ea2  RET 0x8
