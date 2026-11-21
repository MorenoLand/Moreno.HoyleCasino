; FUN_00606de0  00606de0
00606de0  PUSH EBP
00606de1  MOV EBP,ESP
00606de3  PUSH ECX
00606de4  MOV dword ptr [EBP + -0x4],ECX
00606de7  MOV EAX,dword ptr [EBP + -0x4]
00606dea  CMP dword ptr [EAX + 0x8],0x0
00606dee  JZ 0x00606e05
00606df0  PUSH 0x0
00606df2  MOV ECX,dword ptr [EBP + -0x4]
00606df5  MOV EDX,dword ptr [ECX + 0x8]
00606df8  MOV EAX,dword ptr [EBP + -0x4]
00606dfb  MOV ECX,dword ptr [EAX + 0x8]
00606dfe  MOV EDX,dword ptr [EDX]
00606e00  MOV EAX,dword ptr [EDX + 0x1c]
00606e03  CALL EAX
00606e05  MOV ECX,dword ptr [EBP + -0x4]
00606e08  MOV byte ptr [ECX + 0xc],0x0
00606e0c  MOV EDX,dword ptr [EBP + -0x4]
00606e0f  MOV EAX,dword ptr [EDX + 0x14]
00606e12  PUSH EAX
00606e13  MOV ECX,dword ptr [EBP + -0x4]
00606e16  MOV EDX,dword ptr [ECX + 0x10]
00606e19  PUSH EDX
00606e1a  MOV EAX,dword ptr [EBP + -0x4]
00606e1d  MOV ECX,dword ptr [EAX + 0x4]
00606e20  MOV EDX,dword ptr [EBP + -0x4]
00606e23  MOV EAX,dword ptr [EDX + 0x4]
00606e26  MOV EDX,dword ptr [ECX]
00606e28  MOV ECX,EAX
00606e2a  MOV EAX,dword ptr [EDX + 0x44]
00606e2d  CALL EAX
00606e2f  MOV ECX,dword ptr [EBP + -0x4]
00606e32  MOVZX EDX,byte ptr [ECX + 0xd]
00606e36  TEST EDX,EDX
00606e38  JZ 0x00606e4f
00606e3a  MOV EAX,dword ptr [EBP + -0x4]
00606e3d  MOV ECX,dword ptr [EAX + 0x4]
00606e40  MOV EDX,dword ptr [EBP + -0x4]
00606e43  MOV EAX,dword ptr [EDX + 0x4]
00606e46  MOV EDX,dword ptr [ECX]
00606e48  MOV ECX,EAX
00606e4a  MOV EAX,dword ptr [EDX + 0x70]
00606e4d  CALL EAX
00606e4f  PUSH 0x0
00606e51  MOV ECX,dword ptr [EBP + -0x4]
00606e54  MOV ECX,dword ptr [ECX + 0x4]
00606e57  CALL 0x005f6050
00606e5c  MOV ESP,EBP
00606e5e  POP EBP
00606e5f  RET
