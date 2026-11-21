; FUN_0056bbc0  0056bbc0
0056bbc0  PUSH EBP
0056bbc1  MOV EBP,ESP
0056bbc3  PUSH -0x1
0056bbc5  PUSH 0x6a5d0b
0056bbca  MOV EAX,FS:[0x0]
0056bbd0  PUSH EAX
0056bbd1  SUB ESP,0xec
0056bbd7  MOV EAX,[0x00781870]
0056bbdc  XOR EAX,EBP
0056bbde  PUSH EAX
0056bbdf  LEA EAX,[EBP + -0xc]
0056bbe2  MOV FS:[0x0],EAX
0056bbe8  MOV dword ptr [EBP + 0xffffff54],ECX
0056bbee  MOV EAX,dword ptr [EBP + 0xffffff54]
0056bbf4  MOV dword ptr [EAX],0x6ca2b0
0056bbfa  MOV dword ptr [EBP + -0x4],0x0
0056bc01  MOV word ptr [EBP + -0x10],0x0
0056bc07  JMP 0x0056bc15
0056bc09  MOV CX,word ptr [EBP + -0x10]
0056bc0d  ADD CX,0x1
0056bc11  MOV word ptr [EBP + -0x10],CX
0056bc15  MOVSX EDX,word ptr [EBP + -0x10]
0056bc19  CMP EDX,0x5
0056bc1c  JGE 0x0056bc80
0056bc1e  MOVSX EAX,word ptr [EBP + -0x10]
0056bc22  MOV ECX,dword ptr [EBP + 0xffffff54]
0056bc28  CMP dword ptr [ECX + EAX*0x4 + 0x8],0x0
0056bc2d  JZ 0x0056bc7e
0056bc2f  MOVSX EDX,word ptr [EBP + -0x10]
0056bc33  MOV EAX,dword ptr [EBP + 0xffffff54]
0056bc39  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
0056bc3d  MOV dword ptr [EBP + -0x18],ECX
0056bc40  MOV EDX,dword ptr [EBP + -0x18]
0056bc43  MOV dword ptr [EBP + -0x14],EDX
0056bc46  CMP dword ptr [EBP + -0x14],0x0
0056bc4a  JZ 0x0056bc62
0056bc4c  PUSH 0x1
0056bc4e  MOV EAX,dword ptr [EBP + -0x14]
0056bc51  MOV EDX,dword ptr [EAX]
0056bc53  MOV ECX,dword ptr [EBP + -0x14]
0056bc56  MOV EAX,dword ptr [EDX]
0056bc58  CALL EAX
0056bc5a  MOV dword ptr [EBP + 0xffffff50],EAX
0056bc60  JMP 0x0056bc6c
0056bc62  MOV dword ptr [EBP + 0xffffff50],0x0
0056bc6c  MOVSX ECX,word ptr [EBP + -0x10]
0056bc70  MOV EDX,dword ptr [EBP + 0xffffff54]
0056bc76  MOV dword ptr [EDX + ECX*0x4 + 0x8],0x0
0056bc7e  JMP 0x0056bc09
0056bc80  MOV word ptr [EBP + -0x10],0x0
0056bc86  JMP 0x0056bc94
0056bc88  MOV AX,word ptr [EBP + -0x10]
0056bc8c  ADD AX,0x1
0056bc90  MOV word ptr [EBP + -0x10],AX
0056bc94  MOVSX ECX,word ptr [EBP + -0x10]
0056bc98  CMP ECX,0x4
0056bc9b  JGE 0x0056bd66
0056bca1  MOVSX EDX,word ptr [EBP + -0x10]
0056bca5  MOV EAX,dword ptr [EBP + 0xffffff54]
0056bcab  CMP dword ptr [EAX + EDX*0x4 + 0x34],0x0
0056bcb0  JZ 0x0056bd01
0056bcb2  MOVSX ECX,word ptr [EBP + -0x10]
0056bcb6  MOV EDX,dword ptr [EBP + 0xffffff54]
0056bcbc  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x34]
0056bcc0  MOV dword ptr [EBP + -0x20],EAX
0056bcc3  MOV ECX,dword ptr [EBP + -0x20]
0056bcc6  MOV dword ptr [EBP + -0x1c],ECX
0056bcc9  CMP dword ptr [EBP + -0x1c],0x0
0056bccd  JZ 0x0056bce5
0056bccf  PUSH 0x1
0056bcd1  MOV EDX,dword ptr [EBP + -0x1c]
0056bcd4  MOV EAX,dword ptr [EDX]
0056bcd6  MOV ECX,dword ptr [EBP + -0x1c]
0056bcd9  MOV EDX,dword ptr [EAX]
0056bcdb  CALL EDX
0056bcdd  MOV dword ptr [EBP + 0xffffff4c],EAX
0056bce3  JMP 0x0056bcef
0056bce5  MOV dword ptr [EBP + 0xffffff4c],0x0
0056bcef  MOVSX EAX,word ptr [EBP + -0x10]
0056bcf3  MOV ECX,dword ptr [EBP + 0xffffff54]
0056bcf9  MOV dword ptr [ECX + EAX*0x4 + 0x34],0x0
0056bd01  MOVSX EDX,word ptr [EBP + -0x10]
0056bd05  MOV EAX,dword ptr [EBP + 0xffffff54]
0056bd0b  CMP dword ptr [EAX + EDX*0x4 + 0x44],0x0
0056bd10  JZ 0x0056bd61
0056bd12  MOVSX ECX,word ptr [EBP + -0x10]
0056bd16  MOV EDX,dword ptr [EBP + 0xffffff54]
0056bd1c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x44]
0056bd20  MOV dword ptr [EBP + -0x28],EAX
0056bd23  MOV ECX,dword ptr [EBP + -0x28]
0056bd26  MOV dword ptr [EBP + -0x24],ECX
0056bd29  CMP dword ptr [EBP + -0x24],0x0
0056bd2d  JZ 0x0056bd45
0056bd2f  PUSH 0x1
0056bd31  MOV EDX,dword ptr [EBP + -0x24]
0056bd34  MOV EAX,dword ptr [EDX]
0056bd36  MOV ECX,dword ptr [EBP + -0x24]
0056bd39  MOV EDX,dword ptr [EAX]
0056bd3b  CALL EDX
0056bd3d  MOV dword ptr [EBP + 0xffffff48],EAX
0056bd43  JMP 0x0056bd4f
0056bd45  MOV dword ptr [EBP + 0xffffff48],0x0
0056bd4f  MOVSX EAX,word ptr [EBP + -0x10]
0056bd53  MOV ECX,dword ptr [EBP + 0xffffff54]
0056bd59  MOV dword ptr [ECX + EAX*0x4 + 0x44],0x0
0056bd61  JMP 0x0056bc88
0056bd66  MOV word ptr [EBP + -0x10],0x0
0056bd6c  JMP 0x0056bd7a
0056bd6e  MOV DX,word ptr [EBP + -0x10]
0056bd72  ADD DX,0x1
0056bd76  MOV word ptr [EBP + -0x10],DX
0056bd7a  MOVSX EAX,word ptr [EBP + -0x10]
0056bd7e  CMP EAX,0x2
0056bd81  JGE 0x0056be4c
0056bd87  MOVSX ECX,word ptr [EBP + -0x10]
0056bd8b  MOV EDX,dword ptr [EBP + 0xffffff54]
0056bd91  CMP dword ptr [EDX + ECX*0x4 + 0x54],0x0
0056bd96  JZ 0x0056bde7
0056bd98  MOVSX EAX,word ptr [EBP + -0x10]
0056bd9c  MOV ECX,dword ptr [EBP + 0xffffff54]
0056bda2  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x54]
0056bda6  MOV dword ptr [EBP + -0x30],EDX
0056bda9  MOV EAX,dword ptr [EBP + -0x30]
0056bdac  MOV dword ptr [EBP + -0x2c],EAX
0056bdaf  CMP dword ptr [EBP + -0x2c],0x0
0056bdb3  JZ 0x0056bdcb
0056bdb5  PUSH 0x1
0056bdb7  MOV ECX,dword ptr [EBP + -0x2c]
0056bdba  MOV EDX,dword ptr [ECX]
0056bdbc  MOV ECX,dword ptr [EBP + -0x2c]
0056bdbf  MOV EAX,dword ptr [EDX]
0056bdc1  CALL EAX
0056bdc3  MOV dword ptr [EBP + 0xffffff44],EAX
0056bdc9  JMP 0x0056bdd5
0056bdcb  MOV dword ptr [EBP + 0xffffff44],0x0
0056bdd5  MOVSX ECX,word ptr [EBP + -0x10]
0056bdd9  MOV EDX,dword ptr [EBP + 0xffffff54]
0056bddf  MOV dword ptr [EDX + ECX*0x4 + 0x54],0x0
0056bde7  MOVSX EAX,word ptr [EBP + -0x10]
0056bdeb  MOV ECX,dword ptr [EBP + 0xffffff54]
0056bdf1  CMP dword ptr [ECX + EAX*0x4 + 0x5c],0x0
0056bdf6  JZ 0x0056be47
0056bdf8  MOVSX EDX,word ptr [EBP + -0x10]
0056bdfc  MOV EAX,dword ptr [EBP + 0xffffff54]
0056be02  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x5c]
0056be06  MOV dword ptr [EBP + -0x38],ECX
0056be09  MOV EDX,dword ptr [EBP + -0x38]
0056be0c  MOV dword ptr [EBP + -0x34],EDX
0056be0f  CMP dword ptr [EBP + -0x34],0x0
0056be13  JZ 0x0056be2b
0056be15  PUSH 0x1
0056be17  MOV EAX,dword ptr [EBP + -0x34]
0056be1a  MOV EDX,dword ptr [EAX]
0056be1c  MOV ECX,dword ptr [EBP + -0x34]
0056be1f  MOV EAX,dword ptr [EDX]
0056be21  CALL EAX
0056be23  MOV dword ptr [EBP + 0xffffff40],EAX
0056be29  JMP 0x0056be35
0056be2b  MOV dword ptr [EBP + 0xffffff40],0x0
0056be35  MOVSX ECX,word ptr [EBP + -0x10]
0056be39  MOV EDX,dword ptr [EBP + 0xffffff54]
0056be3f  MOV dword ptr [EDX + ECX*0x4 + 0x5c],0x0
0056be47  JMP 0x0056bd6e
0056be4c  MOV EAX,dword ptr [EBP + 0xffffff54]
0056be52  CMP dword ptr [EAX + 0x20],0x0
0056be56  JZ 0x0056be9d
0056be58  MOV ECX,dword ptr [EBP + 0xffffff54]
0056be5e  MOV EDX,dword ptr [ECX + 0x20]
0056be61  MOV dword ptr [EBP + -0x40],EDX
0056be64  MOV EAX,dword ptr [EBP + -0x40]
0056be67  MOV dword ptr [EBP + -0x3c],EAX
0056be6a  CMP dword ptr [EBP + -0x3c],0x0
0056be6e  JZ 0x0056be86
0056be70  PUSH 0x1
0056be72  MOV ECX,dword ptr [EBP + -0x3c]
0056be75  MOV EDX,dword ptr [ECX]
0056be77  MOV ECX,dword ptr [EBP + -0x3c]
0056be7a  MOV EAX,dword ptr [EDX]
0056be7c  CALL EAX
0056be7e  MOV dword ptr [EBP + 0xffffff3c],EAX
0056be84  JMP 0x0056be90
0056be86  MOV dword ptr [EBP + 0xffffff3c],0x0
0056be90  MOV ECX,dword ptr [EBP + 0xffffff54]
0056be96  MOV dword ptr [ECX + 0x20],0x0
0056be9d  MOV EDX,dword ptr [EBP + 0xffffff54]
0056bea3  CMP dword ptr [EDX + 0x28],0x0
0056bea7  JZ 0x0056beee
0056bea9  MOV EAX,dword ptr [EBP + 0xffffff54]
0056beaf  MOV ECX,dword ptr [EAX + 0x28]
0056beb2  MOV dword ptr [EBP + -0x48],ECX
0056beb5  MOV EDX,dword ptr [EBP + -0x48]
0056beb8  MOV dword ptr [EBP + -0x44],EDX
0056bebb  CMP dword ptr [EBP + -0x44],0x0
0056bebf  JZ 0x0056bed7
0056bec1  PUSH 0x1
0056bec3  MOV EAX,dword ptr [EBP + -0x44]
0056bec6  MOV EDX,dword ptr [EAX]
0056bec8  MOV ECX,dword ptr [EBP + -0x44]
0056becb  MOV EAX,dword ptr [EDX]
0056becd  CALL EAX
0056becf  MOV dword ptr [EBP + 0xffffff38],EAX
0056bed5  JMP 0x0056bee1
0056bed7  MOV dword ptr [EBP + 0xffffff38],0x0
0056bee1  MOV ECX,dword ptr [EBP + 0xffffff54]
0056bee7  MOV dword ptr [ECX + 0x28],0x0
0056beee  MOV EDX,dword ptr [EBP + 0xffffff54]
0056bef4  CMP dword ptr [EDX + 0x24],0x0
0056bef8  JZ 0x0056bf3f
0056befa  MOV EAX,dword ptr [EBP + 0xffffff54]
0056bf00  MOV ECX,dword ptr [EAX + 0x24]
0056bf03  MOV dword ptr [EBP + -0x50],ECX
0056bf06  MOV EDX,dword ptr [EBP + -0x50]
0056bf09  MOV dword ptr [EBP + -0x4c],EDX
0056bf0c  CMP dword ptr [EBP + -0x4c],0x0
0056bf10  JZ 0x0056bf28
0056bf12  PUSH 0x1
0056bf14  MOV EAX,dword ptr [EBP + -0x4c]
0056bf17  MOV EDX,dword ptr [EAX]
0056bf19  MOV ECX,dword ptr [EBP + -0x4c]
0056bf1c  MOV EAX,dword ptr [EDX]
0056bf1e  CALL EAX
0056bf20  MOV dword ptr [EBP + 0xffffff34],EAX
0056bf26  JMP 0x0056bf32
0056bf28  MOV dword ptr [EBP + 0xffffff34],0x0
0056bf32  MOV ECX,dword ptr [EBP + 0xffffff54]
0056bf38  MOV dword ptr [ECX + 0x24],0x0
0056bf3f  MOV EDX,dword ptr [EBP + 0xffffff54]
0056bf45  CMP dword ptr [EDX + 0x2c],0x0
0056bf49  JZ 0x0056bf90
0056bf4b  MOV EAX,dword ptr [EBP + 0xffffff54]
0056bf51  MOV ECX,dword ptr [EAX + 0x2c]
0056bf54  MOV dword ptr [EBP + -0x58],ECX
0056bf57  MOV EDX,dword ptr [EBP + -0x58]
0056bf5a  MOV dword ptr [EBP + -0x54],EDX
0056bf5d  CMP dword ptr [EBP + -0x54],0x0
0056bf61  JZ 0x0056bf79
0056bf63  PUSH 0x1
0056bf65  MOV EAX,dword ptr [EBP + -0x54]
0056bf68  MOV EDX,dword ptr [EAX]
0056bf6a  MOV ECX,dword ptr [EBP + -0x54]
0056bf6d  MOV EAX,dword ptr [EDX]
0056bf6f  CALL EAX
0056bf71  MOV dword ptr [EBP + 0xffffff30],EAX
0056bf77  JMP 0x0056bf83
0056bf79  MOV dword ptr [EBP + 0xffffff30],0x0
0056bf83  MOV ECX,dword ptr [EBP + 0xffffff54]
0056bf89  MOV dword ptr [ECX + 0x2c],0x0
0056bf90  MOV EDX,dword ptr [EBP + 0xffffff54]
0056bf96  CMP dword ptr [EDX + 0x30],0x0
0056bf9a  JZ 0x0056bfe1
0056bf9c  MOV EAX,dword ptr [EBP + 0xffffff54]
0056bfa2  MOV ECX,dword ptr [EAX + 0x30]
0056bfa5  MOV dword ptr [EBP + -0x60],ECX
0056bfa8  MOV EDX,dword ptr [EBP + -0x60]
0056bfab  MOV dword ptr [EBP + -0x5c],EDX
0056bfae  CMP dword ptr [EBP + -0x5c],0x0
0056bfb2  JZ 0x0056bfca
0056bfb4  PUSH 0x1
0056bfb6  MOV EAX,dword ptr [EBP + -0x5c]
0056bfb9  MOV EDX,dword ptr [EAX]
0056bfbb  MOV ECX,dword ptr [EBP + -0x5c]
0056bfbe  MOV EAX,dword ptr [EDX]
0056bfc0  CALL EAX
0056bfc2  MOV dword ptr [EBP + 0xffffff2c],EAX
0056bfc8  JMP 0x0056bfd4
0056bfca  MOV dword ptr [EBP + 0xffffff2c],0x0
0056bfd4  MOV ECX,dword ptr [EBP + 0xffffff54]
0056bfda  MOV dword ptr [ECX + 0x30],0x0
0056bfe1  MOV EDX,dword ptr [EBP + 0xffffff54]
0056bfe7  CMP dword ptr [EDX + 0x1c],0x0
0056bfeb  JZ 0x0056c032
0056bfed  MOV EAX,dword ptr [EBP + 0xffffff54]
0056bff3  MOV ECX,dword ptr [EAX + 0x1c]
0056bff6  MOV dword ptr [EBP + -0x68],ECX
0056bff9  MOV EDX,dword ptr [EBP + -0x68]
0056bffc  MOV dword ptr [EBP + -0x64],EDX
0056bfff  CMP dword ptr [EBP + -0x64],0x0
0056c003  JZ 0x0056c01b
0056c005  PUSH 0x1
0056c007  MOV EAX,dword ptr [EBP + -0x64]
0056c00a  MOV EDX,dword ptr [EAX]
0056c00c  MOV ECX,dword ptr [EBP + -0x64]
0056c00f  MOV EAX,dword ptr [EDX]
0056c011  CALL EAX
0056c013  MOV dword ptr [EBP + 0xffffff28],EAX
0056c019  JMP 0x0056c025
0056c01b  MOV dword ptr [EBP + 0xffffff28],0x0
0056c025  MOV ECX,dword ptr [EBP + 0xffffff54]
0056c02b  MOV dword ptr [ECX + 0x1c],0x0
0056c032  MOV EDX,dword ptr [EBP + 0xffffff54]
0056c038  CMP dword ptr [EDX + 0x64],0x0
0056c03c  JZ 0x0056c083
0056c03e  MOV EAX,dword ptr [EBP + 0xffffff54]
0056c044  MOV ECX,dword ptr [EAX + 0x64]
0056c047  MOV dword ptr [EBP + -0x70],ECX
0056c04a  MOV EDX,dword ptr [EBP + -0x70]
0056c04d  MOV dword ptr [EBP + -0x6c],EDX
0056c050  CMP dword ptr [EBP + -0x6c],0x0
0056c054  JZ 0x0056c06c
0056c056  PUSH 0x1
0056c058  MOV EAX,dword ptr [EBP + -0x6c]
0056c05b  MOV EDX,dword ptr [EAX]
0056c05d  MOV ECX,dword ptr [EBP + -0x6c]
0056c060  MOV EAX,dword ptr [EDX]
0056c062  CALL EAX
0056c064  MOV dword ptr [EBP + 0xffffff24],EAX
0056c06a  JMP 0x0056c076
0056c06c  MOV dword ptr [EBP + 0xffffff24],0x0
0056c076  MOV ECX,dword ptr [EBP + 0xffffff54]
0056c07c  MOV dword ptr [ECX + 0x64],0x0
0056c083  MOV EDX,dword ptr [EBP + 0xffffff54]
0056c089  CMP dword ptr [EDX + 0x68],0x0
0056c08d  JZ 0x0056c0d4
0056c08f  MOV EAX,dword ptr [EBP + 0xffffff54]
0056c095  MOV ECX,dword ptr [EAX + 0x68]
0056c098  MOV dword ptr [EBP + -0x78],ECX
0056c09b  MOV EDX,dword ptr [EBP + -0x78]
0056c09e  MOV dword ptr [EBP + -0x74],EDX
0056c0a1  CMP dword ptr [EBP + -0x74],0x0
0056c0a5  JZ 0x0056c0bd
0056c0a7  PUSH 0x1
0056c0a9  MOV EAX,dword ptr [EBP + -0x74]
0056c0ac  MOV EDX,dword ptr [EAX]
0056c0ae  MOV ECX,dword ptr [EBP + -0x74]
0056c0b1  MOV EAX,dword ptr [EDX]
0056c0b3  CALL EAX
0056c0b5  MOV dword ptr [EBP + 0xffffff20],EAX
0056c0bb  JMP 0x0056c0c7
0056c0bd  MOV dword ptr [EBP + 0xffffff20],0x0
0056c0c7  MOV ECX,dword ptr [EBP + 0xffffff54]
0056c0cd  MOV dword ptr [ECX + 0x68],0x0
0056c0d4  MOV EDX,dword ptr [EBP + 0xffffff54]
0056c0da  CMP dword ptr [EDX + 0x6c],0x0
0056c0de  JZ 0x0056c125
0056c0e0  MOV EAX,dword ptr [EBP + 0xffffff54]
0056c0e6  MOV ECX,dword ptr [EAX + 0x6c]
0056c0e9  MOV dword ptr [EBP + -0x80],ECX
0056c0ec  MOV EDX,dword ptr [EBP + -0x80]
0056c0ef  MOV dword ptr [EBP + -0x7c],EDX
0056c0f2  CMP dword ptr [EBP + -0x7c],0x0
0056c0f6  JZ 0x0056c10e
0056c0f8  PUSH 0x1
0056c0fa  MOV EAX,dword ptr [EBP + -0x7c]
0056c0fd  MOV EDX,dword ptr [EAX]
0056c0ff  MOV ECX,dword ptr [EBP + -0x7c]
0056c102  MOV EAX,dword ptr [EDX]
0056c104  CALL EAX
0056c106  MOV dword ptr [EBP + 0xffffff1c],EAX
0056c10c  JMP 0x0056c118
0056c10e  MOV dword ptr [EBP + 0xffffff1c],0x0
0056c118  MOV ECX,dword ptr [EBP + 0xffffff54]
0056c11e  MOV dword ptr [ECX + 0x6c],0x0
0056c125  MOV EDX,dword ptr [EBP + 0xffffff54]
0056c12b  CMP dword ptr [EDX + 0x70],0x0
0056c12f  JZ 0x0056c188
0056c131  MOV EAX,dword ptr [EBP + 0xffffff54]
0056c137  MOV ECX,dword ptr [EAX + 0x70]
0056c13a  MOV dword ptr [EBP + 0xffffff78],ECX
0056c140  MOV EDX,dword ptr [EBP + 0xffffff78]
0056c146  MOV dword ptr [EBP + 0xffffff7c],EDX
0056c14c  CMP dword ptr [EBP + 0xffffff7c],0x0
0056c153  JZ 0x0056c171
0056c155  PUSH 0x1
0056c157  MOV EAX,dword ptr [EBP + 0xffffff7c]
0056c15d  MOV EDX,dword ptr [EAX]
0056c15f  MOV ECX,dword ptr [EBP + 0xffffff7c]
0056c165  MOV EAX,dword ptr [EDX]
0056c167  CALL EAX
0056c169  MOV dword ptr [EBP + 0xffffff18],EAX
0056c16f  JMP 0x0056c17b
0056c171  MOV dword ptr [EBP + 0xffffff18],0x0
0056c17b  MOV ECX,dword ptr [EBP + 0xffffff54]
0056c181  MOV dword ptr [ECX + 0x70],0x0
0056c188  MOV EDX,dword ptr [EBP + 0xffffff54]
0056c18e  CMP dword ptr [EDX + 0x74],0x0
0056c192  JZ 0x0056c1eb
0056c194  MOV EAX,dword ptr [EBP + 0xffffff54]
0056c19a  MOV ECX,dword ptr [EAX + 0x74]
0056c19d  MOV dword ptr [EBP + 0xffffff70],ECX
0056c1a3  MOV EDX,dword ptr [EBP + 0xffffff70]
0056c1a9  MOV dword ptr [EBP + 0xffffff74],EDX
0056c1af  CMP dword ptr [EBP + 0xffffff74],0x0
0056c1b6  JZ 0x0056c1d4
0056c1b8  PUSH 0x1
0056c1ba  MOV EAX,dword ptr [EBP + 0xffffff74]
0056c1c0  MOV EDX,dword ptr [EAX]
0056c1c2  MOV ECX,dword ptr [EBP + 0xffffff74]
0056c1c8  MOV EAX,dword ptr [EDX]
0056c1ca  CALL EAX
0056c1cc  MOV dword ptr [EBP + 0xffffff14],EAX
0056c1d2  JMP 0x0056c1de
0056c1d4  MOV dword ptr [EBP + 0xffffff14],0x0
0056c1de  MOV ECX,dword ptr [EBP + 0xffffff54]
0056c1e4  MOV dword ptr [ECX + 0x74],0x0
0056c1eb  MOV EDX,dword ptr [EBP + 0xffffff54]
0056c1f1  CMP dword ptr [EDX + 0x78],0x0
0056c1f5  JZ 0x0056c24e
0056c1f7  MOV EAX,dword ptr [EBP + 0xffffff54]
0056c1fd  MOV ECX,dword ptr [EAX + 0x78]
0056c200  MOV dword ptr [EBP + 0xffffff68],ECX
0056c206  MOV EDX,dword ptr [EBP + 0xffffff68]
0056c20c  MOV dword ptr [EBP + 0xffffff6c],EDX
0056c212  CMP dword ptr [EBP + 0xffffff6c],0x0
0056c219  JZ 0x0056c237
0056c21b  PUSH 0x1
0056c21d  MOV EAX,dword ptr [EBP + 0xffffff6c]
0056c223  MOV EDX,dword ptr [EAX]
0056c225  MOV ECX,dword ptr [EBP + 0xffffff6c]
0056c22b  MOV EAX,dword ptr [EDX]
0056c22d  CALL EAX
0056c22f  MOV dword ptr [EBP + 0xffffff10],EAX
0056c235  JMP 0x0056c241
0056c237  MOV dword ptr [EBP + 0xffffff10],0x0
0056c241  MOV ECX,dword ptr [EBP + 0xffffff54]
0056c247  MOV dword ptr [ECX + 0x78],0x0
0056c24e  MOV word ptr [EBP + -0x10],0x0
0056c254  JMP 0x0056c262
0056c256  MOV DX,word ptr [EBP + -0x10]
0056c25a  ADD DX,0x1
0056c25e  MOV word ptr [EBP + -0x10],DX
0056c262  MOVSX EAX,word ptr [EBP + -0x10]
0056c266  CMP EAX,0x7
0056c269  JGE 0x0056c2e2
0056c26b  MOVSX ECX,word ptr [EBP + -0x10]
0056c26f  MOV EDX,dword ptr [EBP + 0xffffff54]
0056c275  CMP dword ptr [EDX + ECX*0x4 + 0x7c],0x0
0056c27a  JZ 0x0056c2dd
0056c27c  MOVSX EAX,word ptr [EBP + -0x10]
0056c280  MOV ECX,dword ptr [EBP + 0xffffff54]
0056c286  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x7c]
0056c28a  MOV dword ptr [EBP + 0xffffff60],EDX
0056c290  MOV EAX,dword ptr [EBP + 0xffffff60]
0056c296  MOV dword ptr [EBP + 0xffffff64],EAX
0056c29c  CMP dword ptr [EBP + 0xffffff64],0x0
0056c2a3  JZ 0x0056c2c1
0056c2a5  PUSH 0x1
0056c2a7  MOV ECX,dword ptr [EBP + 0xffffff64]
0056c2ad  MOV EDX,dword ptr [ECX]
0056c2af  MOV ECX,dword ptr [EBP + 0xffffff64]
0056c2b5  MOV EAX,dword ptr [EDX]
0056c2b7  CALL EAX
0056c2b9  MOV dword ptr [EBP + 0xffffff0c],EAX
0056c2bf  JMP 0x0056c2cb
0056c2c1  MOV dword ptr [EBP + 0xffffff0c],0x0
0056c2cb  MOVSX ECX,word ptr [EBP + -0x10]
0056c2cf  MOV EDX,dword ptr [EBP + 0xffffff54]
0056c2d5  MOV dword ptr [EDX + ECX*0x4 + 0x7c],0x0
0056c2dd  JMP 0x0056c256
0056c2e2  MOV EAX,dword ptr [EBP + 0xffffff54]
0056c2e8  CMP dword ptr [EAX + 0x4],0x0
0056c2ec  JZ 0x0056c345
0056c2ee  MOV ECX,dword ptr [EBP + 0xffffff54]
0056c2f4  MOV EDX,dword ptr [ECX + 0x4]
0056c2f7  MOV dword ptr [EBP + 0xffffff58],EDX
0056c2fd  MOV EAX,dword ptr [EBP + 0xffffff58]
0056c303  MOV dword ptr [EBP + 0xffffff5c],EAX
0056c309  CMP dword ptr [EBP + 0xffffff5c],0x0
0056c310  JZ 0x0056c32e
0056c312  PUSH 0x1
0056c314  MOV ECX,dword ptr [EBP + 0xffffff5c]
0056c31a  MOV EDX,dword ptr [ECX]
0056c31c  MOV ECX,dword ptr [EBP + 0xffffff5c]
0056c322  MOV EAX,dword ptr [EDX]
0056c324  CALL EAX
0056c326  MOV dword ptr [EBP + 0xffffff08],EAX
0056c32c  JMP 0x0056c338
0056c32e  MOV dword ptr [EBP + 0xffffff08],0x0
0056c338  MOV ECX,dword ptr [EBP + 0xffffff54]
0056c33e  MOV dword ptr [ECX + 0x4],0x0
0056c345  MOV dword ptr [EBP + -0x4],0xffffffff
0056c34c  MOV ECX,dword ptr [EBP + 0xffffff54]
0056c352  CALL 0x005e9e40
0056c357  MOV ECX,dword ptr [EBP + -0xc]
0056c35a  MOV dword ptr FS:[0x0],ECX
0056c361  POP ECX
0056c362  MOV ESP,EBP
0056c364  POP EBP
0056c365  RET
