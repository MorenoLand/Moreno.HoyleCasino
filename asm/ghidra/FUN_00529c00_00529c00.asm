; FUN_00529c00  00529c00
00529c00  PUSH EBP
00529c01  MOV EBP,ESP
00529c03  SUB ESP,0x8
00529c06  MOV dword ptr [EBP + -0x8],ECX
00529c09  MOV ECX,dword ptr [EBP + -0x8]
00529c0c  CALL 0x005e9e20
00529c11  MOV EAX,dword ptr [EBP + -0x8]
00529c14  MOV dword ptr [EAX],0x6c3b18
00529c1a  MOV ECX,dword ptr [EBP + -0x8]
00529c1d  MOV dword ptr [ECX + 0x4],0x0
00529c24  MOV EDX,dword ptr [EBP + -0x8]
00529c27  MOV dword ptr [EDX + 0x8],0x0
00529c2e  MOV EAX,dword ptr [EBP + -0x8]
00529c31  MOV dword ptr [EAX + 0xc],0x0
00529c38  MOV ECX,dword ptr [EBP + -0x8]
00529c3b  MOV dword ptr [ECX + 0x10],0x0
00529c42  MOV EDX,dword ptr [EBP + -0x8]
00529c45  MOV dword ptr [EDX + 0x14],0x0
00529c4c  MOV EAX,dword ptr [EBP + -0x8]
00529c4f  MOV dword ptr [EAX + 0x18],0x0
00529c56  MOV ECX,dword ptr [EBP + -0x8]
00529c59  MOV dword ptr [ECX + 0x1c],0x0
00529c60  MOV EDX,dword ptr [EBP + -0x8]
00529c63  MOV dword ptr [EDX + 0x20],0x0
00529c6a  MOV EAX,dword ptr [EBP + -0x8]
00529c6d  MOV dword ptr [EAX + 0x24],0x0
00529c74  MOV ECX,dword ptr [EBP + -0x8]
00529c77  MOV dword ptr [ECX + 0x28],0x0
00529c7e  MOV EDX,dword ptr [EBP + -0x8]
00529c81  MOV dword ptr [EDX + 0x2c],0x0
00529c88  MOV EAX,dword ptr [EBP + -0x8]
00529c8b  MOV dword ptr [EAX + 0x30],0x0
00529c92  MOV ECX,dword ptr [EBP + -0x8]
00529c95  MOV dword ptr [ECX + 0x34],0x0
00529c9c  MOV EDX,dword ptr [EBP + -0x8]
00529c9f  MOV dword ptr [EDX + 0x38],0x0
00529ca6  MOV EAX,dword ptr [EBP + -0x8]
00529ca9  MOV dword ptr [EAX + 0x60],0x0
00529cb0  MOV ECX,dword ptr [EBP + -0x8]
00529cb3  MOV dword ptr [ECX + 0x64],0x0
00529cba  MOV EDX,dword ptr [EBP + -0x8]
00529cbd  MOV dword ptr [EDX + 0x68],0x0
00529cc4  MOV EAX,dword ptr [EBP + -0x8]
00529cc7  MOV dword ptr [EAX + 0x6c],0x0
00529cce  MOV ECX,dword ptr [EBP + -0x8]
00529cd1  MOV dword ptr [ECX + 0x70],0x0
00529cd8  MOV dword ptr [EBP + -0x4],0x0
00529cdf  JMP 0x00529cea
00529ce1  MOV EDX,dword ptr [EBP + -0x4]
00529ce4  ADD EDX,0x1
00529ce7  MOV dword ptr [EBP + -0x4],EDX
00529cea  CMP dword ptr [EBP + -0x4],0x6
00529cee  JGE 0x00529d00
00529cf0  MOV EAX,dword ptr [EBP + -0x4]
00529cf3  MOV ECX,dword ptr [EBP + -0x8]
00529cf6  MOV dword ptr [ECX + EAX*0x4 + 0x74],0x0
00529cfe  JMP 0x00529ce1
00529d00  MOV EDX,dword ptr [EBP + -0x8]
00529d03  MOV dword ptr [EDX + 0x8c],0x0
00529d0d  MOV dword ptr [EBP + -0x4],0x0
00529d14  JMP 0x00529d1f
00529d16  MOV EAX,dword ptr [EBP + -0x4]
00529d19  ADD EAX,0x1
00529d1c  MOV dword ptr [EBP + -0x4],EAX
00529d1f  CMP dword ptr [EBP + -0x4],0x4
00529d23  JGE 0x00529d38
00529d25  MOV ECX,dword ptr [EBP + -0x4]
00529d28  MOV EDX,dword ptr [EBP + -0x8]
00529d2b  MOV dword ptr [EDX + ECX*0x4 + 0x90],0x0
00529d36  JMP 0x00529d16
00529d38  MOV dword ptr [EBP + -0x4],0x0
00529d3f  JMP 0x00529d4a
00529d41  MOV EAX,dword ptr [EBP + -0x4]
00529d44  ADD EAX,0x1
00529d47  MOV dword ptr [EBP + -0x4],EAX
00529d4a  CMP dword ptr [EBP + -0x4],0x3
00529d4e  JGE 0x00529d63
00529d50  MOV ECX,dword ptr [EBP + -0x4]
00529d53  MOV EDX,dword ptr [EBP + -0x8]
00529d56  MOV dword ptr [EDX + ECX*0x4 + 0xa0],0x0
00529d61  JMP 0x00529d41
00529d63  MOV dword ptr [EBP + -0x4],0x0
00529d6a  JMP 0x00529d75
00529d6c  MOV EAX,dword ptr [EBP + -0x4]
00529d6f  ADD EAX,0x1
00529d72  MOV dword ptr [EBP + -0x4],EAX
00529d75  CMP dword ptr [EBP + -0x4],0x8
00529d79  JGE 0x00529d8b
00529d7b  MOV ECX,dword ptr [EBP + -0x4]
00529d7e  MOV EDX,dword ptr [EBP + -0x8]
00529d81  MOV dword ptr [EDX + ECX*0x4 + 0x3c],0x0
00529d89  JMP 0x00529d6c
00529d8b  MOV EAX,dword ptr [EBP + -0x8]
00529d8e  MOV dword ptr [EAX + 0xac],0x0
00529d98  MOV ECX,dword ptr [EBP + -0x8]
00529d9b  MOV dword ptr [ECX + 0xb0],0x0
00529da5  MOV EDX,dword ptr [EBP + -0x8]
00529da8  MOV dword ptr [EDX + 0x5c],0x0
00529daf  MOV dword ptr [EBP + -0x4],0x0
00529db6  JMP 0x00529dc1
00529db8  MOV EAX,dword ptr [EBP + -0x4]
00529dbb  ADD EAX,0x1
00529dbe  MOV dword ptr [EBP + -0x4],EAX
00529dc1  CMP dword ptr [EBP + -0x4],0x3
00529dc5  JGE 0x00529dda
00529dc7  MOV ECX,dword ptr [EBP + -0x4]
00529dca  MOV EDX,dword ptr [EBP + -0x8]
00529dcd  MOV dword ptr [EDX + ECX*0x4 + 0xb4],0x0
00529dd8  JMP 0x00529db8
00529dda  MOV EAX,dword ptr [EBP + -0x8]
00529ddd  MOV dword ptr [EAX + 0xc0],0x0
00529de7  MOV ECX,dword ptr [EBP + -0x8]
00529dea  MOV dword ptr [ECX + 0xc4],0x0
00529df4  MOV EDX,dword ptr [EBP + -0x8]
00529df7  MOV dword ptr [EDX + 0xc8],0x0
00529e01  MOV dword ptr [EBP + -0x4],0x0
00529e08  JMP 0x00529e13
00529e0a  MOV EAX,dword ptr [EBP + -0x4]
00529e0d  ADD EAX,0x1
00529e10  MOV dword ptr [EBP + -0x4],EAX
00529e13  CMP dword ptr [EBP + -0x4],0x5
00529e17  JGE 0x00529e3d
00529e19  MOV ECX,dword ptr [EBP + -0x4]
00529e1c  MOV EDX,dword ptr [EBP + -0x8]
00529e1f  MOV dword ptr [EDX + ECX*0x4 + 0xcc],0x0
00529e2a  MOV EAX,dword ptr [EBP + -0x4]
00529e2d  MOV ECX,dword ptr [EBP + -0x8]
00529e30  MOV dword ptr [ECX + EAX*0x4 + 0xe0],0x0
00529e3b  JMP 0x00529e0a
00529e3d  MOV dword ptr [EBP + -0x4],0x0
00529e44  JMP 0x00529e4f
00529e46  MOV EDX,dword ptr [EBP + -0x4]
00529e49  ADD EDX,0x1
00529e4c  MOV dword ptr [EBP + -0x4],EDX
00529e4f  CMP dword ptr [EBP + -0x4],0x3
00529e53  JGE 0x00529e68
00529e55  MOV EAX,dword ptr [EBP + -0x4]
00529e58  MOV ECX,dword ptr [EBP + -0x8]
00529e5b  MOV dword ptr [ECX + EAX*0x4 + 0xf4],0x0
00529e66  JMP 0x00529e46
00529e68  MOV EAX,dword ptr [EBP + -0x8]
00529e6b  MOV ESP,EBP
00529e6d  POP EBP
00529e6e  RET
