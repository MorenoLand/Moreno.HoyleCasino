; FUN_00455cb0  00455cb0
00455cb0  PUSH EBP
00455cb1  MOV EBP,ESP
00455cb3  SUB ESP,0x2c
00455cb6  PUSH ESI
00455cb7  MOV dword ptr [EBP + -0x2c],ECX
00455cba  MOV dword ptr [EBP + -0x18],0xffffffff
00455cc1  MOV dword ptr [EBP + -0xc],0xffffffff
00455cc8  LEA EAX,[EBP + -0x28]
00455ccb  PUSH EAX
00455ccc  LEA ECX,[EBP + -0x4]
00455ccf  PUSH ECX
00455cd0  MOV ECX,dword ptr [EBP + -0x2c]
00455cd3  CALL 0x00452010
00455cd8  MOV EDX,dword ptr [EBP + -0x4]
00455cdb  MOV EAX,dword ptr [EBP + -0x2c]
00455cde  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
00455ce3  PUSH ECX
00455ce4  MOV ECX,dword ptr [EBP + -0x2c]
00455ce7  CALL 0x0044f680
00455cec  MOV ESI,EAX
00455cee  MOV EDX,dword ptr [EBP + -0x28]
00455cf1  MOV EAX,dword ptr [EBP + -0x2c]
00455cf4  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
00455cf9  PUSH ECX
00455cfa  MOV ECX,dword ptr [EBP + -0x2c]
00455cfd  CALL 0x0044f680
00455d02  CMP ESI,EAX
00455d04  JNZ 0x00455d32
00455d06  MOV EDX,dword ptr [EBP + -0x4]
00455d09  MOV dword ptr [EBP + -0x18],EDX
00455d0c  MOV EAX,dword ptr [EBP + -0x28]
00455d0f  MOV dword ptr [EBP + -0xc],EAX
00455d12  MOV ECX,dword ptr [EBP + 0xc]
00455d15  PUSH ECX
00455d16  MOV EDX,dword ptr [EBP + 0x8]
00455d19  PUSH EDX
00455d1a  MOV EAX,dword ptr [EBP + -0xc]
00455d1d  PUSH EAX
00455d1e  MOV ECX,dword ptr [EBP + -0x18]
00455d21  PUSH ECX
00455d22  MOV ECX,dword ptr [EBP + -0x2c]
00455d25  CALL 0x0044f840
00455d2a  XOR AX,AX
00455d2d  JMP 0x00455ff9
00455d32  LEA EDX,[EBP + -0x1c]
00455d35  PUSH EDX
00455d36  LEA EAX,[EBP + -0x24]
00455d39  PUSH EAX
00455d3a  MOV ECX,dword ptr [EBP + -0x2c]
00455d3d  CALL 0x00451f60
00455d42  MOV ECX,dword ptr [EBP + -0x24]
00455d45  MOV EDX,dword ptr [EBP + -0x2c]
00455d48  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
00455d4d  PUSH EAX
00455d4e  MOV ECX,dword ptr [EBP + -0x2c]
00455d51  CALL 0x0044f680
00455d56  MOV ESI,EAX
00455d58  MOV ECX,dword ptr [EBP + -0x1c]
00455d5b  MOV EDX,dword ptr [EBP + -0x2c]
00455d5e  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
00455d63  PUSH EAX
00455d64  MOV ECX,dword ptr [EBP + -0x2c]
00455d67  CALL 0x0044f680
00455d6c  CMP ESI,EAX
00455d6e  JNZ 0x00455d9c
00455d70  MOV ECX,dword ptr [EBP + -0x24]
00455d73  MOV dword ptr [EBP + -0x18],ECX
00455d76  MOV EDX,dword ptr [EBP + -0x1c]
00455d79  MOV dword ptr [EBP + -0xc],EDX
00455d7c  MOV EAX,dword ptr [EBP + 0xc]
00455d7f  PUSH EAX
00455d80  MOV ECX,dword ptr [EBP + 0x8]
00455d83  PUSH ECX
00455d84  MOV EDX,dword ptr [EBP + -0xc]
00455d87  PUSH EDX
00455d88  MOV EAX,dword ptr [EBP + -0x18]
00455d8b  PUSH EAX
00455d8c  MOV ECX,dword ptr [EBP + -0x2c]
00455d8f  CALL 0x0044f840
00455d94  XOR AX,AX
00455d97  JMP 0x00455ff9
00455d9c  MOV dword ptr [EBP + -0x10],0xffffffff
00455da3  MOV dword ptr [EBP + -0x20],0xffffffff
00455daa  MOV dword ptr [EBP + -0x8],0x0
00455db1  JMP 0x00455dbc
00455db3  MOV ECX,dword ptr [EBP + -0x8]
00455db6  ADD ECX,0x1
00455db9  MOV dword ptr [EBP + -0x8],ECX
00455dbc  CMP dword ptr [EBP + -0x8],0x7
00455dc0  JGE 0x00455e2d
00455dc2  MOV EDX,dword ptr [EBP + -0x8]
00455dc5  MOV EAX,dword ptr [EBP + -0x2c]
00455dc8  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
00455dcd  PUSH ECX
00455dce  MOV ECX,dword ptr [EBP + -0x2c]
00455dd1  CALL 0x0044f680
00455dd6  PUSH EAX
00455dd7  MOV ECX,dword ptr [EBP + -0x2c]
00455dda  CALL 0x0044f700
00455ddf  CMP EAX,0x2
00455de2  JNZ 0x00455e2b
00455de4  CMP dword ptr [EBP + -0x10],-0x1
00455de8  JNZ 0x00455e0c
00455dea  MOV EDX,dword ptr [EBP + -0x8]
00455ded  MOV EAX,dword ptr [EBP + -0x2c]
00455df0  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
00455df5  PUSH ECX
00455df6  MOV ECX,dword ptr [EBP + -0x2c]
00455df9  CALL 0x0044f680
00455dfe  MOV dword ptr [EBP + -0x10],EAX
00455e01  MOV EDX,dword ptr [EBP + -0x8]
00455e04  ADD EDX,0x1
00455e07  MOV dword ptr [EBP + -0x8],EDX
00455e0a  JMP 0x00455e2b
00455e0c  CMP dword ptr [EBP + -0x20],-0x1
00455e10  JNZ 0x00455e2b
00455e12  MOV EAX,dword ptr [EBP + -0x8]
00455e15  MOV ECX,dword ptr [EBP + -0x2c]
00455e18  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00455e1d  PUSH EDX
00455e1e  MOV ECX,dword ptr [EBP + -0x2c]
00455e21  CALL 0x0044f680
00455e26  MOV dword ptr [EBP + -0x20],EAX
00455e29  JMP 0x00455e2d
00455e2b  JMP 0x00455db3
00455e2d  MOV dword ptr [EBP + -0x18],0xffffffff
00455e34  MOV dword ptr [EBP + -0xc],0xffffffff
00455e3b  MOV EAX,dword ptr [EBP + -0x10]
00455e3e  ADD EAX,dword ptr [EBP + -0x20]
00455e41  CMP EAX,0x9
00455e44  JLE 0x00455e6a
00455e46  MOV ECX,dword ptr [EBP + -0x2c]
00455e49  CMP dword ptr [ECX + 0x338],0x6
00455e50  JNZ 0x00455fdb
00455e56  CMP dword ptr [EBP + -0x10],0x6
00455e5a  JG 0x00455fdb
00455e60  CMP dword ptr [EBP + -0x20],0x5
00455e64  JG 0x00455fdb
00455e6a  MOV word ptr [EBP + -0x14],0x3
00455e70  MOV dword ptr [EBP + -0x8],0x0
00455e77  JMP 0x00455e82
00455e79  MOV EDX,dword ptr [EBP + -0x8]
00455e7c  ADD EDX,0x1
00455e7f  MOV dword ptr [EBP + -0x8],EDX
00455e82  CMP dword ptr [EBP + -0x8],0x7
00455e86  JGE 0x00455ed8
00455e88  MOV EAX,dword ptr [EBP + -0x8]
00455e8b  MOV ECX,dword ptr [EBP + -0x2c]
00455e8e  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00455e93  PUSH EDX
00455e94  MOV ECX,dword ptr [EBP + -0x2c]
00455e97  CALL 0x0044f6c0
00455e9c  CMP EAX,-0x1
00455e9f  JZ 0x00455ed6
00455ea1  MOV EAX,dword ptr [EBP + -0x8]
00455ea4  MOV ECX,dword ptr [EBP + -0x2c]
00455ea7  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00455eac  PUSH EDX
00455ead  MOV ECX,dword ptr [EBP + -0x2c]
00455eb0  CALL 0x0044f6c0
00455eb5  MOV ECX,dword ptr [EBP + -0x2c]
00455eb8  CMP EAX,dword ptr [ECX + 0x2d0]
00455ebe  JZ 0x00455ed6
00455ec0  CMP dword ptr [EBP + -0x18],-0x1
00455ec4  JNZ 0x00455ece
00455ec6  MOV EDX,dword ptr [EBP + -0x8]
00455ec9  MOV dword ptr [EBP + -0x18],EDX
00455ecc  JMP 0x00455ed6
00455ece  MOV EAX,dword ptr [EBP + -0x8]
00455ed1  MOV dword ptr [EBP + -0xc],EAX
00455ed4  JMP 0x00455ed8
00455ed6  JMP 0x00455e79
00455ed8  CMP dword ptr [EBP + -0xc],-0x1
00455edc  JNZ 0x00455fbd
00455ee2  MOV ECX,dword ptr [EBP + -0x2c]
00455ee5  CMP dword ptr [ECX + 0x344],0x6
00455eec  JNZ 0x00455f1e
00455eee  MOV EDX,dword ptr [EBP + -0x2c]
00455ef1  MOV AX,word ptr [EDX + 0x4]
00455ef5  PUSH EAX
00455ef6  MOV ECX,dword ptr [EBP + -0x2c]
00455ef9  CALL 0x0044f6c0
00455efe  MOV ECX,dword ptr [EBP + -0x2c]
00455f01  CMP EAX,dword ptr [ECX + 0x2d0]
00455f07  JNZ 0x00455f12
00455f09  MOV dword ptr [EBP + -0xc],0x0
00455f10  JMP 0x00455f19
00455f12  MOV dword ptr [EBP + -0xc],0x1
00455f19  JMP 0x00455fbd
00455f1e  MOV dword ptr [EBP + -0x8],0x0
00455f25  JMP 0x00455f30
00455f27  MOV EDX,dword ptr [EBP + -0x8]
00455f2a  ADD EDX,0x1
00455f2d  MOV dword ptr [EBP + -0x8],EDX
00455f30  CMP dword ptr [EBP + -0x8],0x7
00455f34  JGE 0x00455fbd
00455f3a  MOV EAX,dword ptr [EBP + -0x8]
00455f3d  MOV ECX,dword ptr [EBP + -0x2c]
00455f40  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00455f45  PUSH EDX
00455f46  MOV ECX,dword ptr [EBP + -0x2c]
00455f49  CALL 0x0044f6c0
00455f4e  MOV ECX,dword ptr [EBP + -0x2c]
00455f51  CMP EAX,dword ptr [ECX + 0x2d0]
00455f57  JNZ 0x00455fb8
00455f59  MOV EDX,dword ptr [EBP + -0x8]
00455f5c  MOV EAX,dword ptr [EBP + -0x2c]
00455f5f  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
00455f64  PUSH ECX
00455f65  MOV ECX,dword ptr [EBP + -0x2c]
00455f68  CALL 0x0044f680
00455f6d  CMP EAX,0xe
00455f70  JZ 0x00455fb8
00455f72  MOV EDX,dword ptr [EBP + -0x8]
00455f75  MOV EAX,dword ptr [EBP + -0x2c]
00455f78  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
00455f7d  PUSH ECX
00455f7e  MOV ECX,dword ptr [EBP + -0x2c]
00455f81  CALL 0x0044f680
00455f86  MOV EDX,dword ptr [EBP + -0x2c]
00455f89  CMP EAX,dword ptr [EDX + 0x338]
00455f8f  JG 0x00455fb0
00455f91  MOV EAX,dword ptr [EBP + -0x8]
00455f94  MOV ECX,dword ptr [EBP + -0x2c]
00455f97  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00455f9c  PUSH EDX
00455f9d  MOV ECX,dword ptr [EBP + -0x2c]
00455fa0  CALL 0x0044f680
00455fa5  MOV ECX,dword ptr [EBP + -0x2c]
00455fa8  CMP EAX,dword ptr [ECX + 0x328]
00455fae  JGE 0x00455fb8
00455fb0  MOV EDX,dword ptr [EBP + -0x8]
00455fb3  MOV dword ptr [EBP + -0xc],EDX
00455fb6  JMP 0x00455fbd
00455fb8  JMP 0x00455f27
00455fbd  MOV EAX,dword ptr [EBP + 0xc]
00455fc0  PUSH EAX
00455fc1  MOV ECX,dword ptr [EBP + 0x8]
00455fc4  PUSH ECX
00455fc5  MOV EDX,dword ptr [EBP + -0xc]
00455fc8  PUSH EDX
00455fc9  MOV EAX,dword ptr [EBP + -0x18]
00455fcc  PUSH EAX
00455fcd  MOV ECX,dword ptr [EBP + -0x2c]
00455fd0  CALL 0x0044f840
00455fd5  MOV AX,word ptr [EBP + -0x14]
00455fd9  JMP 0x00455ff9
00455fdb  MOV ECX,dword ptr [EBP + 0xc]
00455fde  PUSH ECX
00455fdf  MOV EDX,dword ptr [EBP + 0x8]
00455fe2  PUSH EDX
00455fe3  MOV ECX,dword ptr [EBP + -0x2c]
00455fe6  CALL 0x00453e00
00455feb  MOVSX EAX,AX
00455fee  ADD EAX,0x1
00455ff1  MOV word ptr [EBP + -0x14],AX
00455ff5  MOV AX,word ptr [EBP + -0x14]
00455ff9  POP ESI
00455ffa  MOV ESP,EBP
00455ffc  POP EBP
00455ffd  RET 0x8
