; FUN_0068fbb0  0068fbb0
0068fbb0  PUSH EBP
0068fbb1  MOV EBP,ESP
0068fbb3  SUB ESP,0x30
0068fbb6  MOV dword ptr [EBP + -0x2c],ECX
0068fbb9  PUSH 0x42
0068fbbb  PUSH 0x0
0068fbbd  MOV EAX,dword ptr [EBP + -0x2c]
0068fbc0  ADD EAX,0x8
0068fbc3  PUSH EAX
0068fbc4  CALL 0x00686fa2
0068fbc9  ADD ESP,0xc
0068fbcc  MOV ECX,dword ptr [EBP + -0x2c]
0068fbcf  MOV dword ptr [ECX + 0x8],0x42
0068fbd6  MOV EDX,dword ptr [EBP + -0x2c]
0068fbd9  MOV dword ptr [EDX + 0xc],0x0
0068fbe0  MOV EAX,dword ptr [EBP + -0x2c]
0068fbe3  MOV dword ptr [EAX + 0x10],0x0
0068fbea  MOV ECX,dword ptr [EBP + -0x2c]
0068fbed  MOV dword ptr [ECX + 0x14],0x0
0068fbf4  MOV EDX,dword ptr [EBP + -0x2c]
0068fbf7  MOV dword ptr [EDX + 0x1c],0x14010c
0068fbfe  MOV EAX,dword ptr [EBP + -0x2c]
0068fc01  MOV word ptr [EAX + 0x28],0x1
0068fc07  MOV ECX,dword ptr [EBP + -0x2c]
0068fc0a  MOV word ptr [ECX + 0x20],0xffff
0068fc10  MOV EDX,dword ptr [EBP + -0x2c]
0068fc13  MOV word ptr [EDX + 0x22],0xffff
0068fc19  MOV EAX,dword ptr [EBP + -0x2c]
0068fc1c  MOV word ptr [EAX + 0x24],0x1
0068fc22  MOV ECX,dword ptr [EBP + -0x2c]
0068fc25  MOV word ptr [ECX + 0x26],0xffff
0068fc2b  MOV EDX,dword ptr [EBP + -0x2c]
0068fc2e  ADD EDX,0x8
0068fc31  PUSH EDX
0068fc32  CALL dword ptr [0x006b24b0]
0068fc38  TEST EAX,EAX
0068fc3a  JNZ 0x0068fc43
0068fc3c  XOR AL,AL
0068fc3e  JMP 0x0068fe29
0068fc43  PUSH 0x26
0068fc45  MOV EAX,dword ptr [EBP + -0x2c]
0068fc48  MOV ECX,dword ptr [EAX + 0x18]
0068fc4b  PUSH ECX
0068fc4c  CALL dword ptr [0x006b2014]
0068fc52  AND EAX,0x1
0068fc55  JNZ 0x0068fc78
0068fc57  MOV EDX,dword ptr [EBP + -0x2c]
0068fc5a  MOV EAX,dword ptr [EDX + 0x18]
0068fc5d  PUSH EAX
0068fc5e  CALL dword ptr [0x006b2034]
0068fc64  PUSH 0x6e56dc
0068fc69  CALL 0x0068fb10
0068fc6e  ADD ESP,0x4
0068fc71  XOR AL,AL
0068fc73  JMP 0x0068fe29
0068fc78  MOV ECX,dword ptr [EBP + -0x2c]
0068fc7b  MOV EDX,dword ptr [ECX + 0x14]
0068fc7e  PUSH EDX
0068fc7f  CALL dword ptr [0x006b2040]
0068fc85  MOV dword ptr [EBP + -0x20],EAX
0068fc88  PUSH 0x0
0068fc8a  LEA EAX,[EBP + -0x4]
0068fc8d  PUSH EAX
0068fc8e  MOV ECX,dword ptr [EBP + -0x20]
0068fc91  MOVZX EDX,word ptr [ECX + 0x2]
0068fc95  ADD EDX,dword ptr [EBP + -0x20]
0068fc98  PUSH EDX
0068fc99  CALL 0x0069d56c
0068fc9e  TEST EAX,EAX
0068fca0  JZ 0x0068fdaa
0068fca6  MOV EAX,dword ptr [EBP + -0x2c]
0068fca9  MOV ECX,dword ptr [EAX + 0x10]
0068fcac  PUSH ECX
0068fcad  CALL dword ptr [0x006b2040]
0068fcb3  MOV dword ptr [EBP + -0x24],EAX
0068fcb6  MOV EDX,dword ptr [EBP + -0x24]
0068fcb9  MOV EAX,dword ptr [EDX + 0x28]
0068fcbc  AND EAX,0x1
0068fcbf  JZ 0x0068fd8d
0068fcc5  MOV byte ptr [EBP + -0x25],0x0
0068fcc9  MOV ECX,dword ptr [EBP + 0xc]
0068fccc  MOV dword ptr [EBP + -0x30],ECX
0068fccf  CMP dword ptr [EBP + -0x30],0x1
0068fcd3  JZ 0x0068fcf8
0068fcd5  CMP dword ptr [EBP + -0x30],0x2
0068fcd9  JZ 0x0068fcdd
0068fcdb  JMP 0x0068fd11
0068fcdd  MOV EDX,dword ptr [EBP + -0x24]
0068fce0  MOVSX EAX,word ptr [EDX + 0x2c]
0068fce4  CMP EAX,0x2
0068fce7  JZ 0x0068fcf6
0068fce9  MOV ECX,dword ptr [EBP + -0x24]
0068fcec  MOV word ptr [ECX + 0x2c],0x2
0068fcf2  MOV byte ptr [EBP + -0x25],0x1
0068fcf6  JMP 0x0068fd11
0068fcf8  MOV EDX,dword ptr [EBP + -0x24]
0068fcfb  MOVSX EAX,word ptr [EDX + 0x2c]
0068fcff  CMP EAX,0x1
0068fd02  JZ 0x0068fd11
0068fd04  MOV ECX,dword ptr [EBP + -0x24]
0068fd07  MOV word ptr [ECX + 0x2c],0x1
0068fd0d  MOV byte ptr [EBP + -0x25],0x1
0068fd11  MOVZX EDX,byte ptr [EBP + -0x25]
0068fd15  TEST EDX,EDX
0068fd17  JZ 0x0068fd84
0068fd19  MOV EAX,dword ptr [EBP + -0x24]
0068fd1c  MOV dword ptr [EAX + 0x28],0x1
0068fd23  PUSH 0xa
0068fd25  MOV ECX,dword ptr [EBP + -0x24]
0068fd28  PUSH ECX
0068fd29  MOV EDX,dword ptr [EBP + -0x24]
0068fd2c  PUSH EDX
0068fd2d  MOV EAX,dword ptr [EBP + -0x20]
0068fd30  MOVZX ECX,word ptr [EAX + 0x2]
0068fd34  ADD ECX,dword ptr [EBP + -0x20]
0068fd37  PUSH ECX
0068fd38  MOV EDX,dword ptr [EBP + -0x4]
0068fd3b  PUSH EDX
0068fd3c  MOV EAX,[0x007960d8]
0068fd41  MOV ECX,dword ptr [EAX + 0x10]
0068fd44  MOV EDX,dword ptr [ECX + 0x8c]
0068fd4a  PUSH EDX
0068fd4b  CALL 0x0069d566
0068fd50  MOV EAX,dword ptr [EBP + -0x2c]
0068fd53  MOV ECX,dword ptr [EAX + 0x18]
0068fd56  PUSH ECX
0068fd57  CALL dword ptr [0x006b2034]
0068fd5d  MOV EDX,dword ptr [EBP + -0x24]
0068fd60  PUSH EDX
0068fd61  PUSH 0x0
0068fd63  MOV EAX,dword ptr [EBP + -0x20]
0068fd66  MOVZX ECX,word ptr [EAX + 0x2]
0068fd6a  ADD ECX,dword ptr [EBP + -0x20]
0068fd6d  PUSH ECX
0068fd6e  MOV EDX,dword ptr [EBP + -0x20]
0068fd71  MOVZX EAX,word ptr [EDX]
0068fd74  ADD EAX,dword ptr [EBP + -0x20]
0068fd77  PUSH EAX
0068fd78  CALL dword ptr [0x006b2020]
0068fd7e  MOV ECX,dword ptr [EBP + -0x2c]
0068fd81  MOV dword ptr [ECX + 0x18],EAX
0068fd84  MOV EDX,dword ptr [EBP + -0x4]
0068fd87  PUSH EDX
0068fd88  CALL 0x0069d560
0068fd8d  MOV EAX,dword ptr [EBP + -0x2c]
0068fd90  MOV ECX,dword ptr [EAX + 0x10]
0068fd93  PUSH ECX
0068fd94  CALL dword ptr [0x006b2044]
0068fd9a  MOV dword ptr [EBP + -0x24],0x0
0068fda1  MOV EDX,dword ptr [EBP + -0x4]
0068fda4  PUSH EDX
0068fda5  CALL 0x0069d560
0068fdaa  MOV EAX,dword ptr [EBP + -0x2c]
0068fdad  MOV ECX,dword ptr [EAX + 0x14]
0068fdb0  PUSH ECX
0068fdb1  CALL dword ptr [0x006b2044]
0068fdb7  MOV dword ptr [EBP + -0x20],0x0
0068fdbe  MOV dword ptr [EBP + -0x1c],0x14
0068fdc5  CMP dword ptr [EBP + 0x8],0x0
0068fdc9  JZ 0x0068fdd3
0068fdcb  MOV EDX,dword ptr [EBP + 0x8]
0068fdce  MOV dword ptr [EBP + -0x18],EDX
0068fdd1  JMP 0x0068fdda
0068fdd3  MOV dword ptr [EBP + -0x18],0x6b27f8
0068fdda  MOV dword ptr [EBP + -0x14],0x0
0068fde1  MOV dword ptr [EBP + -0x10],0x0
0068fde8  MOV dword ptr [EBP + -0xc],0x0
0068fdef  LEA EAX,[EBP + -0x1c]
0068fdf2  PUSH EAX
0068fdf3  MOV ECX,dword ptr [EBP + -0x2c]
0068fdf6  MOV EDX,dword ptr [ECX + 0x18]
0068fdf9  PUSH EDX
0068fdfa  CALL dword ptr [0x006b201c]
0068fe00  MOV dword ptr [EBP + -0x8],EAX
0068fe03  CMP dword ptr [EBP + -0x8],-0x1
0068fe07  JNZ 0x0068fe27
0068fe09  MOV EAX,dword ptr [EBP + -0x2c]
0068fe0c  MOV ECX,dword ptr [EAX + 0x18]
0068fe0f  PUSH ECX
0068fe10  CALL dword ptr [0x006b2034]
0068fe16  PUSH 0x6e56d0
0068fe1b  CALL 0x0068fb10
0068fe20  ADD ESP,0x4
0068fe23  XOR AL,AL
0068fe25  JMP 0x0068fe29
0068fe27  MOV AL,0x1
0068fe29  MOV ESP,EBP
0068fe2b  POP EBP
0068fe2c  RET 0x8
