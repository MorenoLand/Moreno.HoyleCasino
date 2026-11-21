; FUN_00451c20  00451c20
00451c20  PUSH EBP
00451c21  MOV EBP,ESP
00451c23  SUB ESP,0x10
00451c26  MOV dword ptr [EBP + -0x8],ECX
00451c29  MOV EAX,dword ptr [EBP + -0x8]
00451c2c  MOVZX ECX,byte ptr [EAX + 0x2ce]
00451c33  TEST ECX,ECX
00451c35  JZ 0x00451c45
00451c37  MOV EDX,dword ptr [EBP + -0x8]
00451c3a  MOVZX EAX,byte ptr [EDX + 0x2c2]
00451c41  TEST EAX,EAX
00451c43  JNZ 0x00451c4c
00451c45  XOR AL,AL
00451c47  JMP 0x00451f5a
00451c4c  MOV ECX,dword ptr [EBP + 0x14]
00451c4f  MOV dword ptr [ECX],0xffffffff
00451c55  MOV EDX,dword ptr [EBP + 0x18]
00451c58  MOV dword ptr [EDX],0xffffffff
00451c5e  MOV EAX,dword ptr [EBP + -0x8]
00451c61  CMP dword ptr [EAX + 0x2d4],0x6
00451c68  JNZ 0x00451c81
00451c6a  MOV ECX,dword ptr [EBP + 0x14]
00451c6d  MOV EDX,dword ptr [EBP + 0xc]
00451c70  MOV dword ptr [ECX],EDX
00451c72  MOV EAX,dword ptr [EBP + 0x18]
00451c75  MOV ECX,dword ptr [EBP + 0x10]
00451c78  MOV dword ptr [EAX],ECX
00451c7a  MOV AL,0x1
00451c7c  JMP 0x00451f5a
00451c81  MOV EDX,dword ptr [EBP + -0x8]
00451c84  MOVZX EAX,byte ptr [EDX + 0x2ca]
00451c8b  TEST EAX,EAX
00451c8d  JZ 0x00451e2c
00451c93  CMP dword ptr [EBP + 0x8],0xe
00451c97  JZ 0x00451d5f
00451c9d  MOV dword ptr [EBP + -0x4],0x0
00451ca4  JMP 0x00451caf
00451ca6  MOV ECX,dword ptr [EBP + -0x4]
00451ca9  ADD ECX,0x1
00451cac  MOV dword ptr [EBP + -0x4],ECX
00451caf  CMP dword ptr [EBP + -0x4],0x7
00451cb3  JGE 0x00451d5a
00451cb9  MOV EDX,dword ptr [EBP + -0x4]
00451cbc  MOV EAX,dword ptr [EBP + -0x8]
00451cbf  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
00451cc4  PUSH ECX
00451cc5  MOV ECX,dword ptr [EBP + -0x8]
00451cc8  CALL 0x0044f680
00451ccd  PUSH EAX
00451cce  MOV ECX,dword ptr [EBP + -0x8]
00451cd1  CALL 0x0044f700
00451cd6  CMP EAX,0x3
00451cd9  JNZ 0x00451d55
00451cdb  MOV EDX,dword ptr [EBP + -0x4]
00451cde  MOV EAX,dword ptr [EBP + -0x8]
00451ce1  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
00451ce6  PUSH ECX
00451ce7  MOV ECX,dword ptr [EBP + -0x8]
00451cea  CALL 0x0044f6c0
00451cef  MOV EDX,dword ptr [EBP + -0x8]
00451cf2  CMP EAX,dword ptr [EDX + 0x2d0]
00451cf8  JNZ 0x00451d05
00451cfa  MOV EAX,dword ptr [EBP + -0x4]
00451cfd  ADD EAX,0x2
00451d00  MOV dword ptr [EBP + -0xc],EAX
00451d03  JMP 0x00451d0b
00451d05  MOV ECX,dword ptr [EBP + -0x4]
00451d08  MOV dword ptr [EBP + -0xc],ECX
00451d0b  MOV EDX,dword ptr [EBP + 0x14]
00451d0e  MOV EAX,dword ptr [EBP + -0xc]
00451d11  MOV dword ptr [EDX],EAX
00451d13  MOV ECX,dword ptr [EBP + -0x4]
00451d16  MOV EDX,dword ptr [EBP + -0x8]
00451d19  MOV AX,word ptr [EDX + ECX*0x2 + 0x6]
00451d1e  PUSH EAX
00451d1f  MOV ECX,dword ptr [EBP + -0x8]
00451d22  CALL 0x0044f6c0
00451d27  MOV ECX,dword ptr [EBP + -0x8]
00451d2a  CMP EAX,dword ptr [ECX + 0x2d0]
00451d30  JNZ 0x00451d3d
00451d32  MOV EDX,dword ptr [EBP + -0x4]
00451d35  ADD EDX,0x2
00451d38  MOV dword ptr [EBP + -0x10],EDX
00451d3b  JMP 0x00451d46
00451d3d  MOV EAX,dword ptr [EBP + -0x4]
00451d40  ADD EAX,0x1
00451d43  MOV dword ptr [EBP + -0x10],EAX
00451d46  MOV ECX,dword ptr [EBP + 0x18]
00451d49  MOV EDX,dword ptr [EBP + -0x10]
00451d4c  MOV dword ptr [ECX],EDX
00451d4e  MOV AL,0x1
00451d50  JMP 0x00451f5a
00451d55  JMP 0x00451ca6
00451d5a  JMP 0x00451e25
00451d5f  MOV EAX,dword ptr [EBP + -0x8]
00451d62  MOVZX ECX,byte ptr [EAX + 0x2be]
00451d69  TEST ECX,ECX
00451d6b  JZ 0x00451dd1
00451d6d  MOV EDX,dword ptr [EBP + -0x8]
00451d70  CMP dword ptr [EDX + 0x2d4],0x4
00451d77  JNZ 0x00451dd1
00451d79  MOV EAX,dword ptr [EBP + -0x8]
00451d7c  MOV CX,word ptr [EAX + 0x4]
00451d80  PUSH ECX
00451d81  MOV ECX,dword ptr [EBP + -0x8]
00451d84  CALL 0x0044f6c0
00451d89  MOV EDX,dword ptr [EBP + -0x8]
00451d8c  CMP EAX,dword ptr [EDX + 0x2d0]
00451d92  JZ 0x00451dca
00451d94  MOV EAX,dword ptr [EBP + -0x8]
00451d97  MOV CX,word ptr [EAX + 0x6]
00451d9b  PUSH ECX
00451d9c  MOV ECX,dword ptr [EBP + -0x8]
00451d9f  CALL 0x0044f6c0
00451da4  MOV EDX,dword ptr [EBP + -0x8]
00451da7  CMP EAX,dword ptr [EDX + 0x2d0]
00451dad  JZ 0x00451dca
00451daf  MOV EAX,dword ptr [EBP + -0x8]
00451db2  MOV CX,word ptr [EAX + 0x8]
00451db6  PUSH ECX
00451db7  MOV ECX,dword ptr [EBP + -0x8]
00451dba  CALL 0x0044f6c0
00451dbf  MOV EDX,dword ptr [EBP + -0x8]
00451dc2  CMP EAX,dword ptr [EDX + 0x2d0]
00451dc8  JNZ 0x00451dd1
00451dca  XOR AL,AL
00451dcc  JMP 0x00451f5a
00451dd1  MOV dword ptr [EBP + -0x4],0x0
00451dd8  JMP 0x00451de3
00451dda  MOV EAX,dword ptr [EBP + -0x4]
00451ddd  ADD EAX,0x1
00451de0  MOV dword ptr [EBP + -0x4],EAX
00451de3  CMP dword ptr [EBP + -0x4],0x3
00451de7  JGE 0x00451e25
00451de9  MOV ECX,dword ptr [EBP + -0x4]
00451dec  MOV EDX,dword ptr [EBP + -0x8]
00451def  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
00451df4  PUSH EAX
00451df5  MOV ECX,dword ptr [EBP + -0x8]
00451df8  CALL 0x0044f6c0
00451dfd  CMP EAX,-0x1
00451e00  JZ 0x00451e23
00451e02  MOV ECX,dword ptr [EBP + 0x14]
00451e05  CMP dword ptr [ECX],-0x1
00451e08  JNZ 0x00451e14
00451e0a  MOV EDX,dword ptr [EBP + 0x14]
00451e0d  MOV EAX,dword ptr [EBP + -0x4]
00451e10  MOV dword ptr [EDX],EAX
00451e12  JMP 0x00451e23
00451e14  MOV ECX,dword ptr [EBP + 0x18]
00451e17  MOV EDX,dword ptr [EBP + -0x4]
00451e1a  MOV dword ptr [ECX],EDX
00451e1c  MOV AL,0x1
00451e1e  JMP 0x00451f5a
00451e23  JMP 0x00451dda
00451e25  XOR AL,AL
00451e27  JMP 0x00451f5a
00451e2c  MOV EAX,dword ptr [EBP + -0x8]
00451e2f  MOVZX ECX,byte ptr [EAX + 0x2be]
00451e36  TEST ECX,ECX
00451e38  JZ 0x00451e5c
00451e3a  MOV EDX,dword ptr [EBP + -0x8]
00451e3d  MOVZX EAX,byte ptr [EDX + 0x2be]
00451e44  TEST EAX,EAX
00451e46  JZ 0x00451ee8
00451e4c  MOV ECX,dword ptr [EBP + -0x8]
00451e4f  CMP dword ptr [ECX + 0x2d4],0x4
00451e56  JNZ 0x00451ee8
00451e5c  MOV EDX,dword ptr [EBP + 0xc]
00451e5f  MOV EAX,dword ptr [EBP + -0x8]
00451e62  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
00451e67  PUSH ECX
00451e68  MOV ECX,dword ptr [EBP + -0x8]
00451e6b  CALL 0x0044f6c0
00451e70  MOV EDX,dword ptr [EBP + -0x8]
00451e73  CMP EAX,dword ptr [EDX + 0x2d0]
00451e79  JZ 0x00451ee2
00451e7b  MOV EAX,dword ptr [EBP + 0xc]
00451e7e  MOV ECX,dword ptr [EBP + -0x8]
00451e81  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00451e86  PUSH EDX
00451e87  MOV ECX,dword ptr [EBP + -0x8]
00451e8a  CALL 0x0044f6c0
00451e8f  CMP EAX,-0x1
00451e92  JZ 0x00451ee2
00451e94  MOV EAX,dword ptr [EBP + 0x10]
00451e97  MOV ECX,dword ptr [EBP + -0x8]
00451e9a  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00451e9f  PUSH EDX
00451ea0  MOV ECX,dword ptr [EBP + -0x8]
00451ea3  CALL 0x0044f6c0
00451ea8  MOV ECX,dword ptr [EBP + -0x8]
00451eab  CMP EAX,dword ptr [ECX + 0x2d0]
00451eb1  JZ 0x00451ee2
00451eb3  MOV EDX,dword ptr [EBP + 0x10]
00451eb6  MOV EAX,dword ptr [EBP + -0x8]
00451eb9  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
00451ebe  PUSH ECX
00451ebf  MOV ECX,dword ptr [EBP + -0x8]
00451ec2  CALL 0x0044f6c0
00451ec7  CMP EAX,-0x1
00451eca  JZ 0x00451ee2
00451ecc  MOV EDX,dword ptr [EBP + 0x14]
00451ecf  MOV EAX,dword ptr [EBP + 0xc]
00451ed2  MOV dword ptr [EDX],EAX
00451ed4  MOV ECX,dword ptr [EBP + 0x18]
00451ed7  MOV EDX,dword ptr [EBP + 0x10]
00451eda  MOV dword ptr [ECX],EDX
00451edc  MOV AL,0x1
00451ede  JMP 0x00451f5a
00451ee2  XOR AL,AL
00451ee4  JMP 0x00451f5a
00451ee8  CMP dword ptr [EBP + 0x8],0xe
00451eec  JZ 0x00451f04
00451eee  MOV EAX,dword ptr [EBP + 0x14]
00451ef1  MOV ECX,dword ptr [EBP + 0xc]
00451ef4  MOV dword ptr [EAX],ECX
00451ef6  MOV EDX,dword ptr [EBP + 0x18]
00451ef9  MOV EAX,dword ptr [EBP + 0x10]
00451efc  MOV dword ptr [EDX],EAX
00451efe  MOV AL,0x1
00451f00  JMP 0x00451f5a
00451f04  MOV ECX,dword ptr [EBP + 0xc]
00451f07  MOV EDX,dword ptr [EBP + -0x8]
00451f0a  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
00451f0f  PUSH EAX
00451f10  MOV ECX,dword ptr [EBP + -0x8]
00451f13  CALL 0x0044f6c0
00451f18  MOV ECX,dword ptr [EBP + -0x8]
00451f1b  CMP EAX,dword ptr [ECX + 0x2d0]
00451f21  JZ 0x00451f58
00451f23  MOV EDX,dword ptr [EBP + 0x10]
00451f26  MOV EAX,dword ptr [EBP + -0x8]
00451f29  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
00451f2e  PUSH ECX
00451f2f  MOV ECX,dword ptr [EBP + -0x8]
00451f32  CALL 0x0044f6c0
00451f37  MOV EDX,dword ptr [EBP + -0x8]
00451f3a  CMP EAX,dword ptr [EDX + 0x2d0]
00451f40  JZ 0x00451f58
00451f42  MOV EAX,dword ptr [EBP + 0x14]
00451f45  MOV ECX,dword ptr [EBP + 0xc]
00451f48  MOV dword ptr [EAX],ECX
00451f4a  MOV EDX,dword ptr [EBP + 0x18]
00451f4d  MOV EAX,dword ptr [EBP + 0x10]
00451f50  MOV dword ptr [EDX],EAX
00451f52  MOV AL,0x1
00451f54  JMP 0x00451f5a
00451f58  XOR AL,AL
00451f5a  MOV ESP,EBP
00451f5c  POP EBP
00451f5d  RET 0x14
