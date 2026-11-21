; FUN_005b9ab0  005b9ab0
005b9ab0  PUSH EBP
005b9ab1  MOV EBP,ESP
005b9ab3  SUB ESP,0x420
005b9ab9  MOV EAX,[0x00781870]
005b9abe  XOR EAX,EBP
005b9ac0  MOV dword ptr [EBP + -0x1c],EAX
005b9ac3  PUSH ESI
005b9ac4  MOV dword ptr [EBP + 0xfffffbe0],ECX
005b9aca  MOV dword ptr [EBP + -0x18],0x0
005b9ad1  MOV EAX,dword ptr [EBP + -0x18]
005b9ad4  PUSH EAX
005b9ad5  MOV ECX,dword ptr [EBP + 0xfffffbe0]
005b9adb  CALL 0x005b9320
005b9ae0  MOV dword ptr [EBP + 0xfffffbf4],EAX
005b9ae6  MOV ECX,dword ptr [EBP + 0xfffffbf4]
005b9aec  CALL 0x005f8550
005b9af1  SUB EAX,0x28
005b9af4  MOV dword ptr [EBP + -0x8],EAX
005b9af7  MOV ECX,dword ptr [EBP + 0xfffffbf4]
005b9afd  CALL 0x005f8570
005b9b02  SUB EAX,0x28
005b9b05  MOV dword ptr [EBP + -0x4],EAX
005b9b08  MOV dword ptr [EBP + -0x14],0x28
005b9b0f  MOV dword ptr [EBP + -0x10],0x28
005b9b16  MOV ECX,dword ptr [EBP + -0x14]
005b9b19  MOV dword ptr [EBP + 0xfffffbec],ECX
005b9b1f  MOV EDX,dword ptr [EBP + -0x10]
005b9b22  MOV dword ptr [EBP + 0xfffffbf0],EDX
005b9b28  MOV dword ptr [EBP + -0xc],0x0
005b9b2f  PUSH 0xf0
005b9b34  PUSH 0xf0
005b9b39  PUSH 0xf0
005b9b3e  PUSH 0xf0
005b9b43  PUSH 0xf0
005b9b48  PUSH 0xf0
005b9b4d  MOV EAX,dword ptr [EBP + 0x8]
005b9b50  PUSH EAX
005b9b51  PUSH 0x0
005b9b53  PUSH 0x0
005b9b55  MOV ECX,dword ptr [EBP + 0xfffffbf4]
005b9b5b  CALL 0x005f8570
005b9b60  PUSH EAX
005b9b61  MOV ECX,dword ptr [EBP + 0xfffffbf4]
005b9b67  CALL 0x005f8550
005b9b6c  PUSH EAX
005b9b6d  MOV ECX,dword ptr [EBP + -0x18]
005b9b70  ADD ECX,0x384
005b9b76  PUSH ECX
005b9b77  PUSH 0x0
005b9b79  MOV ECX,dword ptr [EBP + 0xfffffbf4]
005b9b7f  CALL 0x005fa880
005b9b84  MOV EDX,dword ptr [EBP + -0x18]
005b9b87  PUSH EDX
005b9b88  MOV EAX,dword ptr [EBP + -0x18]
005b9b8b  ADD EAX,0x384
005b9b90  PUSH EAX
005b9b91  MOV ECX,dword ptr [EBP + 0xfffffbe0]
005b9b97  CALL 0x005b9440
005b9b9c  MOV ECX,dword ptr [EBP + 0x8]
005b9b9f  ADD ECX,0x2
005b9ba2  MOV EDX,dword ptr [EBP + 0xfffffbe0]
005b9ba8  MOV dword ptr [EDX + 0x24],ECX
005b9bab  MOV dword ptr [EBP + 0xfffffbe8],0x0
005b9bb5  JMP 0x005b9bc6
005b9bb7  MOV EAX,dword ptr [EBP + 0xfffffbe8]
005b9bbd  ADD EAX,0x1
005b9bc0  MOV dword ptr [EBP + 0xfffffbe8],EAX
005b9bc6  CMP dword ptr [EBP + 0xfffffbe8],0x9b
005b9bd0  JG 0x005b9e51
005b9bd6  MOV ECX,dword ptr [EBP + 0xfffffbe8]
005b9bdc  IMUL ECX,ECX,0xc
005b9bdf  CMP dword ptr [ECX + 0x770028],0x0
005b9be6  JNZ 0x005b9bea
005b9be8  JMP 0x005b9bb7
005b9bea  MOV EDX,dword ptr [EBP + 0xc]
005b9bed  PUSH EDX
005b9bee  MOV EAX,dword ptr [EBP + 0xfffffbe8]
005b9bf4  PUSH EAX
005b9bf5  PUSH 0x6d1bd0
005b9bfa  LEA ECX,[EBP + 0xfffffbf8]
005b9c00  PUSH ECX
005b9c01  CALL dword ptr [0x006b2220]
005b9c07  ADD ESP,0x10
005b9c0a  PUSH -0x1
005b9c0c  PUSH 0x5
005b9c0e  MOV EDX,dword ptr [EBP + 0x8]
005b9c11  ADD EDX,0x1
005b9c14  PUSH EDX
005b9c15  MOV EAX,dword ptr [EBP + 0xfffffbf0]
005b9c1b  PUSH EAX
005b9c1c  MOV ECX,dword ptr [EBP + 0xfffffbec]
005b9c22  PUSH ECX
005b9c23  PUSH 0xa
005b9c25  PUSH 0xa
005b9c27  MOV EDX,dword ptr [EBP + 0xfffffbe8]
005b9c2d  PUSH EDX
005b9c2e  LEA EAX,[EBP + 0xfffffbf8]
005b9c34  PUSH EAX
005b9c35  MOV ECX,dword ptr [EBP + 0xfffffbe8]
005b9c3b  ADD ECX,0x3e8
005b9c41  PUSH ECX
005b9c42  PUSH 0x0
005b9c44  MOV ECX,dword ptr [EBP + 0xfffffbf4]
005b9c4a  CALL 0x005fa5b0
005b9c4f  MOV dword ptr [EBP + 0xfffffbe4],EAX
005b9c55  MOV ECX,dword ptr [EBP + 0xfffffbe4]
005b9c5b  CALL 0x005ef180
005b9c60  MOV EDX,dword ptr [EBP + 0xfffffbe4]
005b9c66  MOV EAX,dword ptr [EDX]
005b9c68  MOV ECX,dword ptr [EBP + 0xfffffbe4]
005b9c6e  MOV EDX,dword ptr [EAX + 0x54]
005b9c71  CALL EDX
005b9c73  MOV ESI,EAX
005b9c75  MOV ECX,dword ptr [EBP + 0xfffffbe4]
005b9c7b  CALL 0x005f5590
005b9c80  ADD ESI,EAX
005b9c82  CMP ESI,dword ptr [EBP + -0x4]
005b9c85  JLE 0x005b9cc4
005b9c87  MOV EAX,dword ptr [EBP + -0xc]
005b9c8a  ADD EAX,0x14
005b9c8d  MOV dword ptr [EBP + 0xfffffbec],EAX
005b9c93  MOV ECX,dword ptr [EBP + -0x10]
005b9c96  MOV dword ptr [EBP + 0xfffffbf0],ECX
005b9c9c  MOV dword ptr [EBP + -0xc],0x0
005b9ca3  MOV EDX,dword ptr [EBP + 0xfffffbf0]
005b9ca9  PUSH EDX
005b9caa  MOV EAX,dword ptr [EBP + 0xfffffbec]
005b9cb0  PUSH EAX
005b9cb1  MOV ECX,dword ptr [EBP + 0xfffffbe4]
005b9cb7  MOV EDX,dword ptr [ECX]
005b9cb9  MOV ECX,dword ptr [EBP + 0xfffffbe4]
005b9cbf  MOV EAX,dword ptr [EDX + 0x44]
005b9cc2  CALL EAX
005b9cc4  MOV ECX,dword ptr [EBP + 0xfffffbe4]
005b9cca  CALL 0x005f5550
005b9ccf  MOV ECX,dword ptr [EBP + -0x8]
005b9cd2  SUB ECX,dword ptr [EBP + -0x14]
005b9cd5  CMP EAX,ECX
005b9cd7  JGE 0x005b9dcd
005b9cdd  MOV EDX,dword ptr [EBP + 0xfffffbe4]
005b9ce3  MOV EAX,dword ptr [EDX]
005b9ce5  MOV ECX,dword ptr [EBP + 0xfffffbe4]
005b9ceb  MOV EDX,dword ptr [EAX + 0x4c]
005b9cee  CALL EDX
005b9cf0  MOV ESI,EAX
005b9cf2  MOV ECX,dword ptr [EBP + 0xfffffbe4]
005b9cf8  CALL 0x005f5550
005b9cfd  ADD ESI,EAX
005b9cff  CMP ESI,dword ptr [EBP + -0x8]
005b9d02  JLE 0x005b9dcd
005b9d08  PUSH -0x1
005b9d0a  MOV EAX,dword ptr [EBP + 0xfffffbe4]
005b9d10  PUSH EAX
005b9d11  MOV ECX,dword ptr [EBP + 0xfffffbf4]
005b9d17  CALL 0x005fbd40
005b9d1c  MOV ECX,dword ptr [EBP + -0x18]
005b9d1f  ADD ECX,0x1
005b9d22  MOV dword ptr [EBP + -0x18],ECX
005b9d25  MOV EDX,dword ptr [EBP + -0x18]
005b9d28  PUSH EDX
005b9d29  MOV ECX,dword ptr [EBP + 0xfffffbe0]
005b9d2f  CALL 0x005b9320
005b9d34  MOV dword ptr [EBP + 0xfffffbf4],EAX
005b9d3a  MOV EAX,dword ptr [EBP + -0x14]
005b9d3d  MOV dword ptr [EBP + 0xfffffbec],EAX
005b9d43  MOV ECX,dword ptr [EBP + -0x10]
005b9d46  MOV dword ptr [EBP + 0xfffffbf0],ECX
005b9d4c  PUSH 0xff
005b9d51  PUSH 0xff
005b9d56  PUSH 0xff
005b9d5b  PUSH 0xff
005b9d60  PUSH 0xff
005b9d65  PUSH 0xff
005b9d6a  MOV EDX,dword ptr [EBP + 0x8]
005b9d6d  PUSH EDX
005b9d6e  PUSH 0x0
005b9d70  PUSH 0x0
005b9d72  MOV ECX,dword ptr [EBP + 0xfffffbf4]
005b9d78  CALL 0x005f8570
005b9d7d  PUSH EAX
005b9d7e  MOV ECX,dword ptr [EBP + 0xfffffbf4]
005b9d84  CALL 0x005f8550
005b9d89  PUSH EAX
005b9d8a  MOV EAX,dword ptr [EBP + -0x18]
005b9d8d  ADD EAX,0x384
005b9d92  PUSH EAX
005b9d93  PUSH 0x0
005b9d95  MOV ECX,dword ptr [EBP + 0xfffffbf4]
005b9d9b  CALL 0x005fa880
005b9da0  MOV ECX,dword ptr [EBP + -0x18]
005b9da3  PUSH ECX
005b9da4  MOV EDX,dword ptr [EBP + -0x18]
005b9da7  ADD EDX,0x384
005b9dad  PUSH EDX
005b9dae  MOV ECX,dword ptr [EBP + 0xfffffbe0]
005b9db4  CALL 0x005b9440
005b9db9  MOV EAX,dword ptr [EBP + 0xfffffbe8]
005b9dbf  SUB EAX,0x1
005b9dc2  MOV dword ptr [EBP + 0xfffffbe8],EAX
005b9dc8  JMP 0x005b9bb7
005b9dcd  MOV ECX,dword ptr [EBP + -0x18]
005b9dd0  PUSH ECX
005b9dd1  MOV EDX,dword ptr [EBP + 0xfffffbe8]
005b9dd7  ADD EDX,0x3e8
005b9ddd  PUSH EDX
005b9dde  MOV ECX,dword ptr [EBP + 0xfffffbe0]
005b9de4  CALL 0x005b9440
005b9de9  MOV ECX,dword ptr [EBP + 0xfffffbe4]
005b9def  CALL 0x005f5590
005b9df4  ADD EAX,dword ptr [EBP + 0xfffffbf0]
005b9dfa  MOV dword ptr [EBP + 0xfffffbf0],EAX
005b9e00  MOV EAX,dword ptr [EBP + 0xfffffbe4]
005b9e06  MOV EDX,dword ptr [EAX]
005b9e08  MOV ECX,dword ptr [EBP + 0xfffffbe4]
005b9e0e  MOV EAX,dword ptr [EDX + 0x4c]
005b9e11  CALL EAX
005b9e13  MOV ESI,EAX
005b9e15  MOV ECX,dword ptr [EBP + 0xfffffbe4]
005b9e1b  CALL 0x005f5550
005b9e20  ADD ESI,EAX
005b9e22  CMP dword ptr [EBP + -0xc],ESI
005b9e25  JGE 0x005b9e4c
005b9e27  MOV ECX,dword ptr [EBP + 0xfffffbe4]
005b9e2d  MOV EDX,dword ptr [ECX]
005b9e2f  MOV ECX,dword ptr [EBP + 0xfffffbe4]
005b9e35  MOV EAX,dword ptr [EDX + 0x4c]
005b9e38  CALL EAX
005b9e3a  MOV ESI,EAX
005b9e3c  MOV ECX,dword ptr [EBP + 0xfffffbe4]
005b9e42  CALL 0x005f5550
005b9e47  ADD ESI,EAX
005b9e49  MOV dword ptr [EBP + -0xc],ESI
005b9e4c  JMP 0x005b9bb7
005b9e51  MOV ECX,dword ptr [EBP + 0xfffffbe0]
005b9e57  CALL 0x005b94f0
005b9e5c  POP ESI
005b9e5d  MOV ECX,dword ptr [EBP + -0x1c]
005b9e60  XOR ECX,EBP
005b9e62  CALL 0x00686d72
005b9e67  MOV ESP,EBP
005b9e69  POP EBP
005b9e6a  RET 0x8
