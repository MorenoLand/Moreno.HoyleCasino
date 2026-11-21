; FUN_00545bb0  00545bb0
00545bb0  PUSH EBP
00545bb1  MOV EBP,ESP
00545bb3  SUB ESP,0xc
00545bb6  MOV dword ptr [EBP + -0xc],ECX
00545bb9  MOV EAX,dword ptr [EBP + -0xc]
00545bbc  MOV ECX,dword ptr [EAX + 0xb8]
00545bc2  MOV EDX,dword ptr [EBP + -0xc]
00545bc5  MOV EAX,dword ptr [EDX + 0xb8]
00545bcb  MOV EDX,dword ptr [ECX]
00545bcd  MOV ECX,EAX
00545bcf  MOV EAX,dword ptr [EDX + 0x70]
00545bd2  CALL EAX
00545bd4  MOV ECX,dword ptr [0x00793404]
00545bda  MOV EDX,dword ptr [ECX + 0x8]
00545bdd  MOV dword ptr [EBP + -0x8],EDX
00545be0  CMP dword ptr [EBP + -0x8],0x0
00545be4  JZ 0x00545c81
00545bea  PUSH 0x0
00545bec  MOV EAX,dword ptr [EBP + -0xc]
00545bef  MOV ECX,dword ptr [EAX + 0x2c]
00545bf2  CALL 0x005f5d50
00545bf7  PUSH 0x0
00545bf9  MOV ECX,dword ptr [EBP + -0xc]
00545bfc  MOV EDX,dword ptr [ECX + 0x2c]
00545bff  MOV EAX,dword ptr [EBP + -0xc]
00545c02  MOV ECX,dword ptr [EAX + 0x2c]
00545c05  MOV EDX,dword ptr [EDX]
00545c07  MOV EAX,dword ptr [EDX + 0xb0]
00545c0d  CALL EAX
00545c0f  MOV dword ptr [EBP + -0x4],0x0
00545c16  JMP 0x00545c21
00545c18  MOV ECX,dword ptr [EBP + -0x4]
00545c1b  ADD ECX,0x1
00545c1e  MOV dword ptr [EBP + -0x4],ECX
00545c21  CMP dword ptr [EBP + -0x4],0x3
00545c25  JGE 0x00545c5a
00545c27  PUSH 0x0
00545c29  MOV EDX,dword ptr [EBP + -0x4]
00545c2c  MOV EAX,dword ptr [EBP + -0xc]
00545c2f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x10]
00545c33  CALL 0x005f5d50
00545c38  PUSH 0x0
00545c3a  MOV ECX,dword ptr [EBP + -0x4]
00545c3d  MOV EDX,dword ptr [EBP + -0xc]
00545c40  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x10]
00545c44  MOV ECX,dword ptr [EBP + -0x4]
00545c47  MOV EDX,dword ptr [EBP + -0xc]
00545c4a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x10]
00545c4e  MOV EAX,dword ptr [EAX]
00545c50  MOV EDX,dword ptr [EAX + 0xb0]
00545c56  CALL EDX
00545c58  JMP 0x00545c18
00545c5a  PUSH 0x0
00545c5c  MOV EAX,dword ptr [EBP + -0xc]
00545c5f  MOV ECX,dword ptr [EAX + 0x24]
00545c62  MOV EDX,dword ptr [EBP + -0xc]
00545c65  MOV EAX,dword ptr [EDX + 0x24]
00545c68  MOV EDX,dword ptr [ECX]
00545c6a  MOV ECX,EAX
00545c6c  MOV EAX,dword ptr [EDX + 0xb0]
00545c72  CALL EAX
00545c74  PUSH 0x0
00545c76  MOV ECX,dword ptr [EBP + -0xc]
00545c79  MOV ECX,dword ptr [ECX + 0x24]
00545c7c  CALL 0x005f5d50
00545c81  MOV ESP,EBP
00545c83  POP EBP
00545c84  RET
