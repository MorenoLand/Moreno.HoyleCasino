; FUN_00671c80  00671c80
00671c80  PUSH EBP
00671c81  MOV EBP,ESP
00671c83  PUSH -0x1
00671c85  PUSH 0x6ad208
00671c8a  MOV EAX,FS:[0x0]
00671c90  PUSH EAX
00671c91  PUSH ECX
00671c92  MOV EAX,[0x00781870]
00671c97  XOR EAX,EBP
00671c99  PUSH EAX
00671c9a  LEA EAX,[EBP + -0xc]
00671c9d  MOV FS:[0x0],EAX
00671ca3  MOV dword ptr [EBP + -0x10],ECX
00671ca6  PUSH 0x0
00671ca8  MOV ECX,dword ptr [EBP + -0x10]
00671cab  CALL 0x005fc0d0
00671cb0  MOV dword ptr [EBP + -0x4],0x0
00671cb7  MOV EAX,dword ptr [EBP + -0x10]
00671cba  MOV dword ptr [EAX],0x6e1200
00671cc0  MOV ECX,dword ptr [EBP + -0x10]
00671cc3  MOV DL,byte ptr [EBP + 0x8]
00671cc6  MOV byte ptr [ECX + 0x20],DL
00671cc9  MOV EAX,dword ptr [EBP + -0x10]
00671ccc  MOV ECX,dword ptr [EBP + 0xc]
00671ccf  MOV dword ptr [EAX + 0x24],ECX
00671cd2  MOV EDX,dword ptr [EBP + -0x10]
00671cd5  MOV EAX,dword ptr [EDX + 0x24]
00671cd8  MOV ECX,dword ptr [EBP + -0x10]
00671cdb  MOV ECX,dword ptr [ECX + 0x24]
00671cde  MOV EDX,dword ptr [EAX]
00671ce0  MOV EAX,dword ptr [EDX + 0x74]
00671ce3  CALL EAX
00671ce5  MOV dword ptr [EBP + -0x4],0xffffffff
00671cec  MOV EAX,dword ptr [EBP + -0x10]
00671cef  MOV ECX,dword ptr [EBP + -0xc]
00671cf2  MOV dword ptr FS:[0x0],ECX
00671cf9  POP ECX
00671cfa  MOV ESP,EBP
00671cfc  POP EBP
00671cfd  RET 0x8
