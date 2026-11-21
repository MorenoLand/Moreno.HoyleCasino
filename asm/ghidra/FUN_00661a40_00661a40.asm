; FUN_00661a40  00661a40
00661a40  PUSH EBP
00661a41  MOV EBP,ESP
00661a43  PUSH -0x1
00661a45  PUSH 0x6aca01
00661a4a  MOV EAX,FS:[0x0]
00661a50  PUSH EAX
00661a51  SUB ESP,0x280
00661a57  PUSH ESI
00661a58  PUSH EDI
00661a59  MOV EAX,[0x00781870]
00661a5e  XOR EAX,EBP
00661a60  PUSH EAX
00661a61  LEA EAX,[EBP + -0xc]
00661a64  MOV FS:[0x0],EAX
00661a6a  MOV dword ptr [EBP + 0xfffffd84],ECX
00661a70  PUSH 0x67
00661a72  MOV EAX,dword ptr [EBP + 0xfffffd84]
00661a78  MOV ECX,dword ptr [EAX + 0x80]
00661a7e  CALL 0x005fb4c0
00661a83  MOV dword ptr [EBP + -0x5c],EAX
00661a86  MOV ECX,dword ptr [EBP + -0x5c]
00661a89  CALL 0x00606490
00661a8e  MOV dword ptr [EBP + -0x14],EAX
00661a91  MOV ECX,dword ptr [EBP + 0x8]
00661a94  MOV dword ptr [EBP + 0xfffffd80],ECX
00661a9a  CMP dword ptr [EBP + 0xfffffd80],0x64
00661aa1  JZ 0x00661ab1
00661aa3  CMP dword ptr [EBP + 0xfffffd80],0x65
00661aaa  JZ 0x00661ab6
00661aac  JMP 0x00661ce2
00661ab1  JMP 0x00662288
00661ab6  MOV EDX,dword ptr [EBP + 0xfffffd84]
00661abc  MOV EAX,dword ptr [EDX + 0x84]
00661ac2  MOV ECX,dword ptr [EBP + 0xfffffd84]
00661ac8  MOV ECX,dword ptr [ECX + 0x84]
00661ace  MOV EDX,dword ptr [EAX]
00661ad0  MOV EAX,dword ptr [EDX + 0x70]
00661ad3  CALL EAX
00661ad5  MOV ECX,dword ptr [EBP + 0xfffffd84]
00661adb  MOV EDX,dword ptr [ECX + 0x88]
00661ae1  MOV EAX,dword ptr [EBP + 0xfffffd84]
00661ae7  MOV ECX,dword ptr [EAX + 0x88]
00661aed  MOV EDX,dword ptr [EDX]
00661aef  MOV EAX,dword ptr [EDX + 0x70]
00661af2  CALL EAX
00661af4  MOV ECX,dword ptr [EBP + -0x14]
00661af7  ADD ECX,0x14
00661afa  PUSH ECX
00661afb  MOV EDX,dword ptr [EBP + 0xfffffd84]
00661b01  MOV ECX,dword ptr [EDX + 0x80]
00661b07  CALL 0x005fb2b0
00661b0c  MOV dword ptr [EBP + 0xfffffdf0],EAX
00661b12  PUSH 0x67
00661b14  MOV EAX,dword ptr [EBP + -0x14]
00661b17  ADD EAX,0x1
00661b1a  PUSH EAX
00661b1b  MOV ECX,dword ptr [EBP + 0xfffffd84]
00661b21  MOV ECX,dword ptr [ECX + 0x80]
00661b27  CALL 0x005fb510
00661b2c  MOV dword ptr [EBP + 0xfffffdcc],EAX
00661b32  MOV EDX,dword ptr [EBP + 0xfffffdcc]
00661b38  MOV EAX,dword ptr [EDX]
00661b3a  MOV ECX,dword ptr [EBP + 0xfffffdcc]
00661b40  MOV EDX,dword ptr [EAX + 0x4c]
00661b43  CALL EDX
00661b45  MOV dword ptr [EBP + 0xfffffdd0],EAX
00661b4b  MOV EAX,dword ptr [EBP + 0xfffffdcc]
00661b51  MOV EDX,dword ptr [EAX]
00661b53  MOV ECX,dword ptr [EBP + 0xfffffdcc]
00661b59  MOV EAX,dword ptr [EDX + 0x54]
00661b5c  CALL EAX
00661b5e  MOV dword ptr [EBP + 0xfffffdd4],EAX
00661b64  MOV ECX,dword ptr [EBP + 0xfffffdf0]
00661b6a  MOV ECX,dword ptr [ECX + 0x4]
00661b6d  CALL 0x005f8550
00661b72  MOV ESI,EAX
00661b74  MOV EDX,dword ptr [EBP + 0xfffffdf0]
00661b7a  MOV EAX,dword ptr [EDX]
00661b7c  MOV ECX,dword ptr [EBP + 0xfffffdf0]
00661b82  MOV EDX,dword ptr [EAX + 0x4c]
00661b85  CALL EDX
00661b87  MOV EDI,EAX
00661b89  MOV ECX,dword ptr [EBP + 0xfffffdf0]
00661b8f  CALL 0x005eb470
00661b94  ADD EDI,EAX
00661b96  SUB ESI,EDI
00661b98  MOV dword ptr [EBP + 0xfffffdd8],ESI
00661b9e  MOV dword ptr [EBP + 0xfffffddc],0x0
00661ba8  MOV EAX,dword ptr [EBP + 0xfffffdcc]
00661bae  MOV EDX,dword ptr [EAX]
00661bb0  MOV ECX,dword ptr [EBP + 0xfffffdcc]
00661bb6  MOV EAX,dword ptr [EDX + 0x4c]
00661bb9  CALL EAX
00661bbb  SUB EAX,0x1f4
00661bc0  MOV dword ptr [EBP + 0xfffffde0],EAX
00661bc6  MOV dword ptr [EBP + 0xfffffde4],0x0
00661bd0  MOV ECX,dword ptr [EBP + 0xfffffdcc]
00661bd6  MOV EDX,dword ptr [ECX]
00661bd8  MOV ECX,dword ptr [EBP + 0xfffffdcc]
00661bde  MOV EAX,dword ptr [EDX + 0x4c]
00661be1  CALL EAX
00661be3  ADD EAX,0x12c
00661be8  MOV dword ptr [EBP + 0xfffffde8],EAX
00661bee  MOV dword ptr [EBP + 0xfffffdec],0x0
00661bf8  MOV ECX,dword ptr [EBP + 0xfffffdcc]
00661bfe  MOV dword ptr [ECX + 0x184],0x1
00661c08  PUSH 0x4c
00661c0a  CALL 0x00686d82
00661c0f  ADD ESP,0x4
00661c12  MOV dword ptr [EBP + 0xfffffda8],EAX
00661c18  MOV dword ptr [EBP + -0x4],0x0
00661c1f  CMP dword ptr [EBP + 0xfffffda8],0x0
00661c26  JZ 0x00661c4e
00661c28  PUSH 0x1
00661c2a  LEA EDX,[EBP + 0xfffffdd0]
00661c30  PUSH EDX
00661c31  MOV EAX,dword ptr [EBP + 0xfffffd84]
00661c37  MOV ECX,dword ptr [EAX + 0x4]
00661c3a  PUSH ECX
00661c3b  MOV ECX,dword ptr [EBP + 0xfffffda8]
00661c41  CALL 0x006632a0
00661c46  MOV dword ptr [EBP + 0xfffffd7c],EAX
00661c4c  JMP 0x00661c58
00661c4e  MOV dword ptr [EBP + 0xfffffd7c],0x0
00661c58  MOV EDX,dword ptr [EBP + 0xfffffd7c]
00661c5e  MOV dword ptr [EBP + 0xfffffdac],EDX
00661c64  MOV dword ptr [EBP + -0x4],0xffffffff
00661c6b  MOV EAX,dword ptr [EBP + 0xfffffdac]
00661c71  MOV dword ptr [EBP + 0xfffffdc8],EAX
00661c77  MOV ECX,dword ptr [EBP + 0xfffffdcc]
00661c7d  MOV EAX,0x1e
00661c82  CDQ
00661c83  IDIV dword ptr [ECX + 0x184]
00661c89  MOV dword ptr [EBP + 0xfffffd90],EAX
00661c8f  MOV EDX,dword ptr [EBP + 0xfffffdc8]
00661c95  MOV EAX,dword ptr [EBP + 0xfffffd90]
00661c9b  MOV dword ptr [EDX + 0x48],EAX
00661c9e  FILD dword ptr [EBP + 0xfffffd90]
00661ca4  FLD1
00661ca6  FDIVRP
00661ca8  MOV ECX,dword ptr [EBP + 0xfffffdc8]
00661cae  FSTP float ptr [ECX + 0x44]
00661cb1  MOV EDX,dword ptr [EBP + 0xfffffdcc]
00661cb7  PUSH EDX
00661cb8  MOV EAX,dword ptr [EBP + 0xfffffdc8]
00661cbe  MOV EDX,dword ptr [EAX]
00661cc0  MOV ECX,dword ptr [EBP + 0xfffffdc8]
00661cc6  MOV EAX,dword ptr [EDX + 0x4]
00661cc9  CALL EAX
00661ccb  MOV ECX,dword ptr [EBP + 0xfffffdc8]
00661cd1  PUSH ECX
00661cd2  MOV ECX,dword ptr [EBP + 0xfffffdcc]
00661cd8  CALL 0x005f6050
00661cdd  JMP 0x00662288
00661ce2  CMP dword ptr [EBP + 0x8],0x0
00661ce6  JGE 0x00661ced
00661ce8  JMP 0x00662288
00661ced  MOV EDX,dword ptr [EBP + 0x8]
00661cf0  PUSH EDX
00661cf1  PUSH 0x6df6d8
00661cf6  CALL 0x0062fde0
00661cfb  ADD ESP,0x8
00661cfe  MOV EAX,dword ptr [EBP + -0x14]
00661d01  ADD EAX,0x1
00661d04  MOV dword ptr [EBP + -0x14],EAX
00661d07  MOV ECX,dword ptr [EBP + -0x14]
00661d0a  PUSH ECX
00661d0b  MOV ECX,dword ptr [EBP + 0xfffffd84]
00661d11  CALL 0x00661500
00661d16  MOV dword ptr [EBP + -0x60],EAX
00661d19  PUSH 0x220
00661d1e  CALL 0x00686d82
00661d23  ADD ESP,0x4
00661d26  MOV dword ptr [EBP + 0xfffffda0],EAX
00661d2c  MOV dword ptr [EBP + -0x4],0x1
00661d33  CMP dword ptr [EBP + 0xfffffda0],0x0
00661d3a  JZ 0x00661d4f
00661d3c  MOV ECX,dword ptr [EBP + 0xfffffda0]
00661d42  CALL 0x00625bf0
00661d47  MOV dword ptr [EBP + 0xfffffd78],EAX
00661d4d  JMP 0x00661d59
00661d4f  MOV dword ptr [EBP + 0xfffffd78],0x0
00661d59  MOV EDX,dword ptr [EBP + 0xfffffd78]
00661d5f  MOV dword ptr [EBP + 0xfffffda4],EDX
00661d65  MOV dword ptr [EBP + -0x4],0xffffffff
00661d6c  PUSH -0x1
00661d6e  PUSH -0x1
00661d70  PUSH -0x1
00661d72  PUSH -0x1
00661d74  PUSH 0x0
00661d76  MOV EAX,dword ptr [EBP + -0x14]
00661d79  LEA ECX,[EAX*0x4 + 0x2]
00661d80  PUSH ECX
00661d81  PUSH 0x0
00661d83  PUSH 0x0
00661d85  PUSH 0x0
00661d87  PUSH 0x67
00661d89  MOV EDX,dword ptr [EBP + -0x14]
00661d8c  ADD EDX,0x1
00661d8f  PUSH EDX
00661d90  MOV EAX,dword ptr [EBP + -0x5c]
00661d93  PUSH EAX
00661d94  MOV ECX,dword ptr [EBP + 0xfffffda4]
00661d9a  PUSH ECX
00661d9b  MOV EDX,dword ptr [EBP + 0xfffffd84]
00661da1  MOV ECX,dword ptr [EDX + 0x80]
00661da7  CALL 0x005fa3c0
00661dac  PUSH 0x67
00661dae  MOV EAX,dword ptr [EBP + -0x14]
00661db1  ADD EAX,0x1
00661db4  PUSH EAX
00661db5  MOV ECX,dword ptr [EBP + 0xfffffd84]
00661dbb  MOV ECX,dword ptr [ECX + 0x80]
00661dc1  CALL 0x005fb510
00661dc6  MOV dword ptr [EBP + -0x3c],EAX
00661dc9  PUSH 0x1
00661dcb  MOV ECX,dword ptr [EBP + -0x3c]
00661dce  CALL 0x00625c30
00661dd3  PUSH 0x0
00661dd5  PUSH 0xff
00661dda  PUSH 0x0
00661ddc  MOV EDX,dword ptr [EBP + -0x14]
00661ddf  LEA EAX,[EDX*0x4 + 0x2]
00661de6  PUSH EAX
00661de7  PUSH 0x0
00661de9  MOV ECX,dword ptr [EBP + -0x60]
00661dec  PUSH ECX
00661ded  PUSH 0x30d5f7
00661df2  MOV EDX,dword ptr [EBP + -0x14]
00661df5  ADD EDX,0x14
00661df8  PUSH EDX
00661df9  PUSH 0x0
00661dfb  MOV EAX,dword ptr [EBP + 0xfffffd84]
00661e01  MOV ECX,dword ptr [EAX + 0x80]
00661e07  CALL 0x005f9ce0
00661e0c  MOV dword ptr [EBP + -0x18],EAX
00661e0f  PUSH 0x1
00661e11  MOV ECX,dword ptr [EBP + -0x18]
00661e14  CALL 0x005eb000
00661e19  MOV ECX,dword ptr [EBP + -0x18]
00661e1c  PUSH ECX
00661e1d  MOV ECX,dword ptr [EBP + -0x3c]
00661e20  CALL 0x005ff5a0
00661e25  MOV EDX,dword ptr [EBP + -0x18]
00661e28  MOV dword ptr [EBP + -0x10],EDX
00661e2b  MOV dword ptr [EBP + 0xfffffdc4],0x0
00661e35  JMP 0x00661e46
00661e37  MOV EAX,dword ptr [EBP + 0xfffffdc4]
00661e3d  ADD EAX,0x1
00661e40  MOV dword ptr [EBP + 0xfffffdc4],EAX
00661e46  MOV ECX,dword ptr [EBP + 0xfffffdc4]
00661e4c  SHL ECX,0x4
00661e4f  CMP dword ptr [ECX + 0x75db00],0x0
00661e56  JZ 0x00661f7e
00661e5c  MOV EDX,dword ptr [EBP + 0xfffffdc4]
00661e62  SHL EDX,0x4
00661e65  MOV EAX,dword ptr [EDX + 0x75db00]
00661e6b  CMP EAX,dword ptr [EBP + 0x8]
00661e6e  JZ 0x00661e72
00661e70  JMP 0x00661e37
00661e72  PUSH 0x0
00661e74  PUSH 0xff
00661e79  PUSH 0x0
00661e7b  MOV ECX,dword ptr [EBP + -0x14]
00661e7e  LEA EDX,[ECX*0x4 + 0x3]
00661e85  PUSH EDX
00661e86  PUSH 0x0
00661e88  MOV EAX,dword ptr [EBP + -0x60]
00661e8b  PUSH EAX
00661e8c  MOV ECX,dword ptr [EBP + 0xfffffdc4]
00661e92  SHL ECX,0x4
00661e95  MOV EDX,dword ptr [ECX + 0x75db04]
00661e9b  PUSH EDX
00661e9c  PUSH 0x0
00661e9e  PUSH 0x0
00661ea0  MOV EAX,dword ptr [EBP + 0xfffffd84]
00661ea6  MOV ECX,dword ptr [EAX + 0x80]
00661eac  CALL 0x005f9ce0
00661eb1  MOV dword ptr [EBP + -0x18],EAX
00661eb4  MOV ECX,dword ptr [EBP + 0xfffffdc4]
00661eba  SHL ECX,0x4
00661ebd  MOV EDX,dword ptr [ECX + 0x75db08]
00661ec3  PUSH EDX
00661ec4  MOV ECX,dword ptr [EBP + -0x18]
00661ec7  CALL 0x005eb000
00661ecc  MOV EAX,dword ptr [EBP + 0xfffffdc4]
00661ed2  SHL EAX,0x4
00661ed5  MOV ECX,dword ptr [EAX + 0x75db0c]
00661edb  PUSH ECX
00661edc  MOV EDX,dword ptr [EBP + -0x18]
00661edf  MOV EAX,dword ptr [EDX]
00661ee1  MOV ECX,dword ptr [EBP + -0x18]
00661ee4  MOV EDX,dword ptr [EAX + 0xb0]
00661eea  CALL EDX
00661eec  MOV EAX,dword ptr [EBP + -0x18]
00661eef  PUSH EAX
00661ef0  MOV ECX,dword ptr [EBP + -0x3c]
00661ef3  CALL 0x005ff5a0
00661ef8  MOV ECX,dword ptr [EBP + -0x10]
00661efb  MOV EDX,dword ptr [ECX]
00661efd  MOV ECX,dword ptr [EBP + -0x10]
00661f00  MOV EAX,dword ptr [EDX + 0x4c]
00661f03  CALL EAX
00661f05  MOV ESI,EAX
00661f07  MOV ECX,dword ptr [EBP + -0x10]
00661f0a  CALL 0x005eb470
00661f0f  ADD ESI,EAX
00661f11  MOV dword ptr [EBP + 0xfffffdc0],ESI
00661f17  MOV ECX,dword ptr [EBP + -0x10]
00661f1a  MOV ECX,dword ptr [ECX + 0x4]
00661f1d  CALL 0x005f8550
00661f22  MOV dword ptr [EBP + 0xfffffdbc],EAX
00661f28  MOV EDX,dword ptr [EBP + 0xfffffdc0]
00661f2e  ADD EDX,0x1e
00661f31  MOV dword ptr [EBP + 0xfffffdc0],EDX
00661f37  MOV EAX,dword ptr [EBP + 0xfffffdbc]
00661f3d  SUB EAX,dword ptr [EBP + 0xfffffdc0]
00661f43  CDQ
00661f44  SUB EAX,EDX
00661f46  SAR EAX,0x1
00661f48  ADD EAX,dword ptr [EBP + 0xfffffdc0]
00661f4e  MOV dword ptr [EBP + 0xfffffdc0],EAX
00661f54  MOV ECX,dword ptr [EBP + -0x18]
00661f57  CALL 0x005f5550
00661f5c  CDQ
00661f5d  SUB EAX,EDX
00661f5f  SAR EAX,0x1
00661f61  MOV ECX,dword ptr [EBP + 0xfffffdc0]
00661f67  SUB ECX,EAX
00661f69  PUSH ECX
00661f6a  MOV EDX,dword ptr [EBP + -0x18]
00661f6d  MOV EAX,dword ptr [EDX]
00661f6f  MOV ECX,dword ptr [EBP + -0x18]
00661f72  MOV EDX,dword ptr [EAX + 0x48]
00661f75  CALL EDX
00661f77  JMP 0x00661f7e
00661f7e  PUSH 0x0
00661f80  PUSH 0xff
00661f85  PUSH 0x1
00661f87  MOV EAX,dword ptr [EBP + -0x14]
00661f8a  LEA ECX,[EAX*0x4 + 0x3]
00661f91  PUSH ECX
00661f92  PUSH 0x0
00661f94  MOV EDX,dword ptr [EBP + -0x60]
00661f97  PUSH EDX
00661f98  PUSH 0x30d5fa
00661f9d  PUSH 0x0
00661f9f  PUSH 0x0
00661fa1  MOV EAX,dword ptr [EBP + 0xfffffd84]
00661fa7  MOV ECX,dword ptr [EAX + 0x80]
00661fad  CALL 0x005f9ce0
00661fb2  PUSH EAX
00661fb3  MOV ECX,dword ptr [EBP + -0x3c]
00661fb6  CALL 0x005ff5a0
00661fbb  CMP dword ptr [EBP + -0x14],0x1
00661fbf  JNZ 0x0066203a
00661fc1  PUSH 0x0
00661fc3  PUSH 0xff
00661fc8  PUSH 0x0
00661fca  MOV ECX,dword ptr [EBP + -0x14]
00661fcd  SHL ECX,0x2
00661fd0  PUSH ECX
00661fd1  PUSH 0x0
00661fd3  PUSH 0x0
00661fd5  PUSH 0x30d5f7
00661fda  PUSH 0x64
00661fdc  PUSH 0x0
00661fde  MOV EDX,dword ptr [EBP + 0xfffffd84]
00661fe4  MOV ECX,dword ptr [EDX + 0x80]
00661fea  CALL 0x005f9ce0
00661fef  MOV dword ptr [EBP + -0x18],EAX
00661ff2  PUSH 0x0
00661ff4  MOV ECX,dword ptr [EBP + -0x18]
00661ff7  CALL 0x005eb000
00661ffc  PUSH 0x0
00661ffe  PUSH -0x1
00662000  PUSH -0x1
00662002  PUSH -0x1
00662004  PUSH -0x1
00662006  PUSH 0x6b27f8
0066200b  MOV EAX,dword ptr [EBP + -0x14]
0066200e  LEA ECX,[EAX*0x4 + 0x1]
00662015  PUSH ECX
00662016  PUSH 0x0
00662018  PUSH 0x0
0066201a  PUSH 0x30d5f9
0066201f  PUSH 0x65
00662021  PUSH 0x0
00662023  MOV EDX,dword ptr [EBP + 0xfffffd84]
00662029  MOV ECX,dword ptr [EDX + 0x80]
0066202f  CALL 0x005f9de0
00662034  MOV dword ptr [EBP + 0xfffffdb8],EAX
0066203a  LEA EAX,[EBP + 0xfffffdf4]
00662040  PUSH EAX
00662041  MOV ECX,dword ptr [EBP + 0x8]
00662044  PUSH ECX
00662045  MOV EDX,dword ptr [EBP + 0xfffffd84]
0066204b  MOV EAX,dword ptr [EDX]
0066204d  MOV ECX,dword ptr [EBP + 0xfffffd84]
00662053  MOV EDX,dword ptr [EAX + 0x44]
00662056  CALL EDX
00662058  MOV dword ptr [EBP + -0x70],0x30d5f5
0066205f  MOV dword ptr [EBP + -0x6c],0x0
00662066  MOV dword ptr [EBP + -0x68],0x0
0066206d  LEA ECX,[EBP + -0x58]
00662070  CALL 0x00662ef0
00662075  MOV dword ptr [EBP + -0x58],0x6df6d4
0066207c  PUSH 0x770b08
00662081  LEA ECX,[EBP + -0x58]
00662084  CALL 0x00663060
00662089  LEA EAX,[EBP + -0x70]
0066208c  PUSH EAX
0066208d  LEA ECX,[EBP + -0x58]
00662090  CALL 0x00662f30
00662095  MOV dword ptr [EBP + 0xfffffdb4],0x0
0066209f  JMP 0x006620b0
006620a1  MOV ECX,dword ptr [EBP + 0xfffffdb4]
006620a7  ADD ECX,0x1
006620aa  MOV dword ptr [EBP + 0xfffffdb4],ECX
006620b0  MOV EDX,dword ptr [EBP + 0xfffffdb4]
006620b6  CMP dword ptr [EBP + EDX*0x4 + 0xfffffdf8],-0x1
006620be  JZ 0x00662100
006620c0  MOV EAX,dword ptr [EBP + 0xfffffdb4]
006620c6  MOV ECX,dword ptr [EBP + EAX*0x4 + 0xfffffdf8]
006620cd  MOV dword ptr [EBP + 0xfffffdb0],ECX
006620d3  CMP dword ptr [EBP + 0xfffffdb0],-0x2
006620da  JNZ 0x006620de
006620dc  JMP 0x006620a1
006620de  MOV EDX,dword ptr [EBP + -0x3c]
006620e1  PUSH EDX
006620e2  MOV EAX,dword ptr [EBP + -0x14]
006620e5  PUSH EAX
006620e6  LEA ECX,[EBP + -0x58]
006620e9  PUSH ECX
006620ea  PUSH 0x0
006620ec  MOV EDX,dword ptr [EBP + 0xfffffdb0]
006620f2  PUSH EDX
006620f3  MOV ECX,dword ptr [EBP + 0xfffffd84]
006620f9  CALL 0x00662360
006620fe  JMP 0x006620a1
00662100  MOV EAX,dword ptr [EBP + -0x14]
00662103  PUSH EAX
00662104  MOV ECX,dword ptr [EBP + -0x5c]
00662107  CALL 0x006064e0
0066210c  MOV ECX,dword ptr [EBP + 0xfffffd84]
00662112  CALL 0x00662ce0
00662117  PUSH 0x1
00662119  MOV ECX,dword ptr [EBP + -0x3c]
0066211c  CALL 0x00625e00
00662121  MOV ECX,dword ptr [EBP + 0xfffffd84]
00662127  MOV dword ptr [ECX + 0x8c],0x0
00662131  MOV EDX,dword ptr [EBP + -0x10]
00662134  MOV ECX,dword ptr [EDX + 0x4]
00662137  CALL 0x005f8550
0066213c  MOV ESI,EAX
0066213e  MOV EAX,dword ptr [EBP + -0x10]
00662141  MOV EDX,dword ptr [EAX]
00662143  MOV ECX,dword ptr [EBP + -0x10]
00662146  MOV EAX,dword ptr [EDX + 0x4c]
00662149  CALL EAX
0066214b  MOV EDI,EAX
0066214d  MOV ECX,dword ptr [EBP + -0x10]
00662150  CALL 0x005eb470
00662155  ADD EDI,EAX
00662157  SUB ESI,EDI
00662159  MOV dword ptr [EBP + -0x38],ESI
0066215c  MOV dword ptr [EBP + -0x34],0x0
00662163  MOV dword ptr [EBP + -0x30],0x0
0066216a  MOV dword ptr [EBP + -0x2c],0x0
00662171  MOV ECX,dword ptr [EBP + -0x10]
00662174  MOV ECX,dword ptr [ECX + 0x4]
00662177  CALL 0x005f8550
0066217c  MOV ESI,EAX
0066217e  MOV EDX,dword ptr [EBP + -0x10]
00662181  MOV EAX,dword ptr [EDX]
00662183  MOV ECX,dword ptr [EBP + -0x10]
00662186  MOV EDX,dword ptr [EAX + 0x4c]
00662189  CALL EDX
0066218b  MOV EDI,EAX
0066218d  MOV ECX,dword ptr [EBP + -0x10]
00662190  CALL 0x005eb470
00662195  ADD EDI,EAX
00662197  SUB ESI,EDI
00662199  SUB ESI,0xc8
0066219f  MOV dword ptr [EBP + -0x28],ESI
006621a2  MOV dword ptr [EBP + -0x24],0x0
006621a9  MOV dword ptr [EBP + -0x20],0x12c
006621b0  MOV dword ptr [EBP + -0x1c],0x0
006621b7  MOV EAX,dword ptr [EBP + -0x34]
006621ba  PUSH EAX
006621bb  MOV ECX,dword ptr [EBP + -0x38]
006621be  PUSH ECX
006621bf  MOV EDX,dword ptr [EBP + -0x3c]
006621c2  MOV EAX,dword ptr [EDX]
006621c4  MOV ECX,dword ptr [EBP + -0x3c]
006621c7  MOV EDX,dword ptr [EAX + 0x44]
006621ca  CALL EDX
006621cc  MOV EAX,dword ptr [EBP + -0x3c]
006621cf  MOV dword ptr [EAX + 0x184],0x1
006621d9  PUSH 0x4c
006621db  CALL 0x00686d82
006621e0  ADD ESP,0x4
006621e3  MOV dword ptr [EBP + 0xfffffd98],EAX
006621e9  MOV dword ptr [EBP + -0x4],0x2
006621f0  CMP dword ptr [EBP + 0xfffffd98],0x0
006621f7  JZ 0x00662214
006621f9  PUSH 0x1
006621fb  LEA ECX,[EBP + -0x38]
006621fe  PUSH ECX
006621ff  PUSH 0x0
00662201  MOV ECX,dword ptr [EBP + 0xfffffd98]
00662207  CALL 0x006632a0
0066220c  MOV dword ptr [EBP + 0xfffffd74],EAX
00662212  JMP 0x0066221e
00662214  MOV dword ptr [EBP + 0xfffffd74],0x0
0066221e  MOV EDX,dword ptr [EBP + 0xfffffd74]
00662224  MOV dword ptr [EBP + 0xfffffd9c],EDX
0066222a  MOV dword ptr [EBP + -0x4],0xffffffff
00662231  MOV EAX,dword ptr [EBP + 0xfffffd9c]
00662237  MOV dword ptr [EBP + -0x64],EAX
0066223a  MOV ECX,dword ptr [EBP + -0x3c]
0066223d  MOV EAX,0x1e
00662242  CDQ
00662243  IDIV dword ptr [ECX + 0x184]
00662249  MOV dword ptr [EBP + 0xfffffd88],EAX
0066224f  MOV EDX,dword ptr [EBP + -0x64]
00662252  MOV EAX,dword ptr [EBP + 0xfffffd88]
00662258  MOV dword ptr [EDX + 0x48],EAX
0066225b  FILD dword ptr [EBP + 0xfffffd88]
00662261  FLD1
00662263  FDIVRP
00662265  MOV ECX,dword ptr [EBP + -0x64]
00662268  FSTP float ptr [ECX + 0x44]
0066226b  MOV EDX,dword ptr [EBP + -0x3c]
0066226e  PUSH EDX
0066226f  MOV EAX,dword ptr [EBP + -0x64]
00662272  MOV EDX,dword ptr [EAX]
00662274  MOV ECX,dword ptr [EBP + -0x64]
00662277  MOV EAX,dword ptr [EDX + 0x4]
0066227a  CALL EAX
0066227c  MOV ECX,dword ptr [EBP + -0x64]
0066227f  PUSH ECX
00662280  MOV ECX,dword ptr [EBP + -0x3c]
00662283  CALL 0x005f6050
00662288  MOV ECX,dword ptr [EBP + -0xc]
0066228b  MOV dword ptr FS:[0x0],ECX
00662292  POP ECX
00662293  POP EDI
00662294  POP ESI
00662295  MOV ESP,EBP
00662297  POP EBP
00662298  RET 0x4
