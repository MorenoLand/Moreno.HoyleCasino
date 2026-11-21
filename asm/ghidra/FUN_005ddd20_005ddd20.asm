; FUN_005ddd20  005ddd20
005ddd20  PUSH EBP
005ddd21  MOV EBP,ESP
005ddd23  SUB ESP,0x88
005ddd29  MOV dword ptr [EBP + -0x7c],ECX
005ddd2c  MOV dword ptr [EBP + -0x4],0x0
005ddd33  MOV ECX,dword ptr [0x007947e4]
005ddd39  CALL 0x005da810
005ddd3e  MOVZX EAX,AL
005ddd41  TEST EAX,EAX
005ddd43  JZ 0x005ddeec
005ddd49  MOV dword ptr [EBP + -0x8],0x1
005ddd50  JMP 0x005ddd5b
005ddd52  MOV ECX,dword ptr [EBP + -0x8]
005ddd55  ADD ECX,0x1
005ddd58  MOV dword ptr [EBP + -0x8],ECX
005ddd5b  MOV EDX,dword ptr [0x0162ee84]
005ddd61  MOV EAX,dword ptr [EDX]
005ddd63  MOV ECX,dword ptr [0x0162ee84]
005ddd69  MOV EDX,dword ptr [EAX + 0x10c]
005ddd6f  CALL EDX
005ddd71  CMP dword ptr [EBP + -0x8],EAX
005ddd74  JGE 0x005ddeec
005ddd7a  MOV EAX,dword ptr [EBP + -0x8]
005ddd7d  PUSH EAX
005ddd7e  CALL 0x005dcb00
005ddd83  ADD ESP,0x4
005ddd86  MOV dword ptr [EBP + -0x34],EAX
005ddd89  MOV ECX,dword ptr [EBP + -0x34]
005ddd8c  CALL 0x0063aac0
005ddd91  MOV ECX,dword ptr [EAX]
005ddd93  MOV dword ptr [EBP + -0x2c],ECX
005ddd96  CMP dword ptr [EBP + -0x2c],0x2
005ddd9a  JZ 0x005dddb8
005ddd9c  MOV ECX,dword ptr [EBP + -0x34]
005ddd9f  CALL 0x0063aac0
005ddda4  MOV EDX,dword ptr [EAX]
005ddda6  MOV dword ptr [EBP + -0x30],EDX
005ddda9  CMP dword ptr [EBP + -0x30],0x3
005dddad  JZ 0x005dddb8
005dddaf  MOV dword ptr [EBP + -0x80],0x0
005dddb6  JMP 0x005dddbf
005dddb8  MOV dword ptr [EBP + -0x80],0x1
005dddbf  MOVZX EAX,byte ptr [EBP + -0x80]
005dddc3  TEST EAX,EAX
005dddc5  JZ 0x005ddee7
005dddcb  MOV ECX,dword ptr [EBP + -0x8]
005dddce  PUSH ECX
005dddcf  CALL 0x005dcb00
005dddd4  ADD ESP,0x4
005dddd7  MOV ECX,EAX
005dddd9  CALL 0x005d5a50
005dddde  MOV EDX,dword ptr [EBP + -0x7c]
005ddde1  CMP EAX,dword ptr [EDX + 0x4eec]
005ddde7  JGE 0x005dde07
005ddde9  PUSH 0x0
005dddeb  MOV EAX,dword ptr [EBP + -0x8]
005dddee  PUSH EAX
005dddef  MOV ECX,dword ptr [EBP + -0x8]
005dddf2  PUSH ECX
005dddf3  CALL 0x005dcb00
005dddf8  ADD ESP,0x4
005dddfb  MOV ECX,EAX
005dddfd  CALL 0x0063a3e0
005dde02  JMP 0x005ddee7
005dde07  MOV EDX,dword ptr [EBP + -0x8]
005dde0a  SUB EDX,0x1
005dde0d  MOV dword ptr [EBP + -0x28],EDX
005dde10  JMP 0x005dde1b
005dde12  MOV EAX,dword ptr [EBP + -0x28]
005dde15  SUB EAX,0x1
005dde18  MOV dword ptr [EBP + -0x28],EAX
005dde1b  CMP dword ptr [EBP + -0x28],-0x1
005dde1f  JLE 0x005ddee7
005dde25  MOV ECX,dword ptr [EBP + -0x28]
005dde28  PUSH ECX
005dde29  CALL 0x005dcb00
005dde2e  ADD ESP,0x4
005dde31  MOV dword ptr [EBP + -0x40],EAX
005dde34  MOV ECX,dword ptr [EBP + -0x40]
005dde37  CALL 0x0063aac0
005dde3c  MOV EDX,dword ptr [EAX]
005dde3e  MOV dword ptr [EBP + -0x38],EDX
005dde41  CMP dword ptr [EBP + -0x38],0x2
005dde45  JZ 0x005dde66
005dde47  MOV ECX,dword ptr [EBP + -0x40]
005dde4a  CALL 0x0063aac0
005dde4f  MOV EAX,dword ptr [EAX]
005dde51  MOV dword ptr [EBP + -0x3c],EAX
005dde54  CMP dword ptr [EBP + -0x3c],0x3
005dde58  JZ 0x005dde66
005dde5a  MOV dword ptr [EBP + 0xffffff7c],0x0
005dde64  JMP 0x005dde70
005dde66  MOV dword ptr [EBP + 0xffffff7c],0x1
005dde70  MOVZX ECX,byte ptr [EBP + 0xffffff7c]
005dde77  TEST ECX,ECX
005dde79  JZ 0x005ddee2
005dde7b  MOV EDX,dword ptr [EBP + -0x28]
005dde7e  PUSH EDX
005dde7f  CALL 0x005dcb00
005dde84  ADD ESP,0x4
005dde87  MOV dword ptr [EBP + -0x44],EAX
005dde8a  MOV ECX,dword ptr [EBP + -0x44]
005dde8d  CALL 0x0063aac0
005dde92  ADD EAX,0x4
005dde95  MOV dword ptr [EBP + -0x48],EAX
005dde98  MOV EAX,dword ptr [EBP + -0x8]
005dde9b  PUSH EAX
005dde9c  CALL 0x005dcb00
005ddea1  ADD ESP,0x4
005ddea4  MOV dword ptr [EBP + -0x4c],EAX
005ddea7  MOV ECX,dword ptr [EBP + -0x4c]
005ddeaa  CALL 0x0063aac0
005ddeaf  ADD EAX,0x4
005ddeb2  MOV dword ptr [EBP + -0x50],EAX
005ddeb5  MOV ECX,dword ptr [EBP + -0x48]
005ddeb8  PUSH ECX
005ddeb9  MOV EDX,dword ptr [EBP + -0x50]
005ddebc  PUSH EDX
005ddebd  CALL 0x00686ec0
005ddec2  ADD ESP,0x8
005ddec5  TEST EAX,EAX
005ddec7  JNZ 0x005ddee2
005ddec9  PUSH 0x0
005ddecb  MOV EAX,dword ptr [EBP + -0x8]
005ddece  PUSH EAX
005ddecf  MOV ECX,dword ptr [EBP + -0x8]
005dded2  PUSH ECX
005dded3  CALL 0x005dcb00
005dded8  ADD ESP,0x4
005ddedb  MOV ECX,EAX
005ddedd  CALL 0x0063a3e0
005ddee2  JMP 0x005dde12
005ddee7  JMP 0x005ddd52
005ddeec  PUSH 0x0
005ddeee  CALL 0x005dcb00
005ddef3  ADD ESP,0x4
005ddef6  MOV dword ptr [EBP + -0x54],EAX
005ddef9  MOV ECX,dword ptr [EBP + -0x54]
005ddefc  CALL 0x005d52e0
005ddf01  MOV DL,byte ptr [EAX + 0x5d]
005ddf04  MOV byte ptr [EBP + -0x55],DL
005ddf07  MOVZX EAX,byte ptr [EBP + -0x55]
005ddf0b  TEST EAX,EAX
005ddf0d  JNZ 0x005de15e
005ddf13  CMP dword ptr [0x007947e4],0x0
005ddf1a  JZ 0x005de15e
005ddf20  MOV ECX,dword ptr [0x007947e4]
005ddf26  MOV EDX,dword ptr [ECX]
005ddf28  MOV ECX,dword ptr [0x007947e4]
005ddf2e  MOV EAX,dword ptr [EDX + 0x260]
005ddf34  CALL EAX
005ddf36  MOVZX ECX,AL
005ddf39  TEST ECX,ECX
005ddf3b  JZ 0x005de15e
005ddf41  MOV ECX,dword ptr [0x007947e4]
005ddf47  CALL 0x005da810
005ddf4c  MOVZX EDX,AL
005ddf4f  TEST EDX,EDX
005ddf51  JNZ 0x005de15e
005ddf57  PUSH 0x0
005ddf59  LEA EAX,[EBP + -0x24]
005ddf5c  PUSH EAX
005ddf5d  MOV ECX,dword ptr [EBP + -0x7c]
005ddf60  CALL 0x005f3bf0
005ddf65  PUSH EAX
005ddf66  MOV ECX,dword ptr [EBP + -0x7c]
005ddf69  MOV EDX,dword ptr [ECX]
005ddf6b  MOV ECX,dword ptr [EBP + -0x7c]
005ddf6e  MOV EAX,dword ptr [EDX + 0x364]
005ddf74  CALL EAX
005ddf76  MOV dword ptr [EBP + -0x8],0x0
005ddf7d  JMP 0x005ddf88
005ddf7f  MOV ECX,dword ptr [EBP + -0x8]
005ddf82  ADD ECX,0x1
005ddf85  MOV dword ptr [EBP + -0x8],ECX
005ddf88  MOV EDX,dword ptr [0x0162ee84]
005ddf8e  MOV EAX,dword ptr [EDX]
005ddf90  MOV ECX,dword ptr [0x0162ee84]
005ddf96  MOV EDX,dword ptr [EAX + 0x10c]
005ddf9c  CALL EDX
005ddf9e  CMP dword ptr [EBP + -0x8],EAX
005ddfa1  JGE 0x005de06b
005ddfa7  MOV EAX,dword ptr [EBP + -0x8]
005ddfaa  PUSH EAX
005ddfab  CALL 0x005dcb00
005ddfb0  ADD ESP,0x4
005ddfb3  MOV dword ptr [EBP + -0x64],EAX
005ddfb6  MOV ECX,dword ptr [EBP + -0x64]
005ddfb9  CALL 0x0063aac0
005ddfbe  MOV ECX,dword ptr [EAX]
005ddfc0  MOV dword ptr [EBP + -0x5c],ECX
005ddfc3  CMP dword ptr [EBP + -0x5c],0x2
005ddfc7  JZ 0x005ddfe8
005ddfc9  MOV ECX,dword ptr [EBP + -0x64]
005ddfcc  CALL 0x0063aac0
005ddfd1  MOV EDX,dword ptr [EAX]
005ddfd3  MOV dword ptr [EBP + -0x60],EDX
005ddfd6  CMP dword ptr [EBP + -0x60],0x3
005ddfda  JZ 0x005ddfe8
005ddfdc  MOV dword ptr [EBP + 0xffffff78],0x0
005ddfe6  JMP 0x005ddff2
005ddfe8  MOV dword ptr [EBP + 0xffffff78],0x1
005ddff2  MOVZX EAX,byte ptr [EBP + 0xffffff78]
005ddff9  TEST EAX,EAX
005ddffb  JZ 0x005de066
005ddffd  MOV ECX,dword ptr [EBP + -0x4]
005de000  CMP ECX,dword ptr [EBP + -0x14]
005de003  JNZ 0x005de040
005de005  PUSH 0x0
005de007  MOV EDX,dword ptr [EBP + -0x8]
005de00a  PUSH EDX
005de00b  MOV EAX,dword ptr [EBP + -0x8]
005de00e  PUSH EAX
005de00f  CALL 0x005dcb00
005de014  ADD ESP,0x4
005de017  MOV ECX,EAX
005de019  CALL 0x0063a3e0
005de01e  MOV ECX,dword ptr [EBP + -0x8]
005de021  PUSH ECX
005de022  CALL 0x005dcb00
005de027  ADD ESP,0x4
005de02a  MOV dword ptr [EBP + -0x68],EAX
005de02d  MOV ECX,dword ptr [EBP + -0x68]
005de030  CALL 0x0063aac0
005de035  MOV dword ptr [EAX],0x0
005de03b  JMP 0x005ddf7f
005de040  PUSH 0x1
005de042  PUSH 0x1
005de044  PUSH 0x1
005de046  PUSH 0x0
005de048  PUSH -0x1
005de04a  MOV EDX,dword ptr [EBP + -0x8]
005de04d  PUSH EDX
005de04e  CALL 0x005dcb00
005de053  ADD ESP,0x4
005de056  MOV ECX,EAX
005de058  CALL 0x0063a8d0
005de05d  MOV EAX,dword ptr [EBP + -0x4]
005de060  ADD EAX,0x1
005de063  MOV dword ptr [EBP + -0x4],EAX
005de066  JMP 0x005ddf7f
005de06b  MOV ECX,dword ptr [EBP + -0x4]
005de06e  CMP ECX,dword ptr [EBP + -0x24]
005de071  JGE 0x005de079
005de073  CMP dword ptr [EBP + -0xc],0x0
005de077  JNZ 0x005de081
005de079  MOV EAX,dword ptr [EBP + -0x4]
005de07c  JMP 0x005de166
005de081  MOV dword ptr [EBP + -0x8],0x0
005de088  JMP 0x005de093
005de08a  MOV EDX,dword ptr [EBP + -0x8]
005de08d  ADD EDX,0x1
005de090  MOV dword ptr [EBP + -0x8],EDX
005de093  MOV EAX,[0x0162ee84]
005de098  MOV EDX,dword ptr [EAX]
005de09a  MOV ECX,dword ptr [0x0162ee84]
005de0a0  MOV EAX,dword ptr [EDX + 0x10c]
005de0a6  CALL EAX
005de0a8  CMP dword ptr [EBP + -0x8],EAX
005de0ab  JGE 0x005de159
005de0b1  MOV ECX,dword ptr [EBP + -0x7c]
005de0b4  MOV EDX,dword ptr [ECX + 0x58]
005de0b7  MOV EAX,dword ptr [EBP + -0x8]
005de0ba  MOV ECX,dword ptr [EDX + EAX*0x4]
005de0bd  MOV dword ptr [EBP + -0x70],ECX
005de0c0  MOV ECX,dword ptr [EBP + -0x70]
005de0c3  CALL 0x0063aac0
005de0c8  MOV EDX,dword ptr [EAX]
005de0ca  MOV dword ptr [EBP + -0x6c],EDX
005de0cd  XOR EAX,EAX
005de0cf  CMP dword ptr [EBP + -0x6c],0x1
005de0d3  SETZ AL
005de0d6  MOVZX ECX,AL
005de0d9  TEST ECX,ECX
005de0db  JZ 0x005de0fa
005de0dd  XOR EDX,EDX
005de0df  JNZ 0x005de0f8
005de0e1  PUSH 0x2d7
005de0e6  PUSH 0x6d4b54
005de0eb  PUSH 0x6b2f58
005de0f0  CALL 0x005e9f20
005de0f5  ADD ESP,0xc
005de0f8  JMP 0x005de159
005de0fa  MOV ECX,dword ptr [EBP + -0x7c]
005de0fd  MOV EDX,dword ptr [ECX + 0x58]
005de100  MOV EAX,dword ptr [EBP + -0x8]
005de103  MOV ECX,dword ptr [EDX + EAX*0x4]
005de106  MOV dword ptr [EBP + -0x78],ECX
005de109  MOV ECX,dword ptr [EBP + -0x78]
005de10c  CALL 0x0063aac0
005de111  MOV EDX,dword ptr [EAX]
005de113  MOV dword ptr [EBP + -0x74],EDX
005de116  XOR EAX,EAX
005de118  CMP dword ptr [EBP + -0x74],0x0
005de11c  SETZ AL
005de11f  MOVZX ECX,AL
005de122  TEST ECX,ECX
005de124  JZ 0x005de14a
005de126  PUSH 0x1
005de128  PUSH 0x1
005de12a  PUSH 0x1
005de12c  PUSH 0x0
005de12e  PUSH -0x1
005de130  MOV EDX,dword ptr [EBP + -0x7c]
005de133  MOV EAX,dword ptr [EDX + 0x58]
005de136  MOV ECX,dword ptr [EBP + -0x8]
005de139  MOV ECX,dword ptr [EAX + ECX*0x4]
005de13c  CALL 0x0063a8d0
005de141  MOV EDX,dword ptr [EBP + -0x4]
005de144  ADD EDX,0x1
005de147  MOV dword ptr [EBP + -0x4],EDX
005de14a  MOV EAX,dword ptr [EBP + -0x4]
005de14d  CMP EAX,dword ptr [EBP + -0x24]
005de150  JNZ 0x005de154
005de152  JMP 0x005de159
005de154  JMP 0x005de08a
005de159  MOV EAX,dword ptr [EBP + -0x4]
005de15c  JMP 0x005de166
005de15e  MOV ECX,dword ptr [EBP + -0x7c]
005de161  CALL 0x006363e0
005de166  MOV ESP,EBP
005de168  POP EBP
005de169  RET
