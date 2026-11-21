; FUN_0049db00  0049db00
0049db00  PUSH EBP
0049db01  MOV EBP,ESP
0049db03  PUSH -0x1
0049db05  PUSH 0x6a0fde
0049db0a  MOV EAX,FS:[0x0]
0049db10  PUSH EAX
0049db11  SUB ESP,0x40
0049db14  MOV EAX,[0x00781870]
0049db19  XOR EAX,EBP
0049db1b  MOV dword ptr [EBP + -0x18],EAX
0049db1e  PUSH EAX
0049db1f  LEA EAX,[EBP + -0xc]
0049db22  MOV FS:[0x0],EAX
0049db28  MOV dword ptr [EBP + -0x4c],ECX
0049db2b  MOV EAX,dword ptr [EBP + -0x4c]
0049db2e  MOVSX ECX,word ptr [EAX + 0x4]
0049db32  CMP ECX,0x7
0049db35  JZ 0x0049db4e
0049db37  PUSH 0x1ba3
0049db3c  PUSH 0x6bd2d0
0049db41  PUSH 0x6be25c
0049db46  CALL 0x005e9f20
0049db4b  ADD ESP,0xc
0049db4e  PUSH 0x0
0049db50  PUSH 0x0
0049db52  PUSH 0x0
0049db54  PUSH 0x1
0049db56  PUSH 0x1
0049db58  PUSH 0x1
0049db5a  PUSH 0x1
0049db5c  LEA EAX,[EBP + -0x24]
0049db5f  PUSH EAX
0049db60  MOV ECX,dword ptr [EBP + -0x4c]
0049db63  CALL 0x00485940
0049db68  MOV dword ptr [EBP + -0x4],0x0
0049db6f  PUSH 0x0
0049db71  PUSH 0x0
0049db73  PUSH 0x0
0049db75  PUSH 0x0
0049db77  PUSH 0x1
0049db79  PUSH 0x1
0049db7b  PUSH 0x0
0049db7d  LEA ECX,[EBP + -0x10]
0049db80  PUSH ECX
0049db81  MOV ECX,dword ptr [EBP + -0x4c]
0049db84  CALL 0x00485940
0049db89  MOV byte ptr [EBP + -0x4],0x1
0049db8d  MOV word ptr [EBP + -0x14],0x0
0049db93  JMP 0x0049dba1
0049db95  MOV DX,word ptr [EBP + -0x14]
0049db99  ADD DX,0x1
0049db9d  MOV word ptr [EBP + -0x14],DX
0049dba1  MOVSX EAX,word ptr [EBP + -0x14]
0049dba5  CMP EAX,0x7
0049dba8  JGE 0x0049dbb5
0049dbaa  MOVSX ECX,word ptr [EBP + -0x14]
0049dbae  MOV byte ptr [EBP + ECX*0x1 + -0x20],0x0
0049dbb3  JMP 0x0049db95
0049dbb5  MOV EDX,dword ptr [0x00791390]
0049dbbb  PUSH EDX
0049dbbc  LEA EAX,[EBP + -0x39]
0049dbbf  PUSH EAX
0049dbc0  LEA ECX,[EBP + -0x10]
0049dbc3  CALL 0x004a2160
0049dbc8  MOV ECX,EAX
0049dbca  CALL 0x004a1e10
0049dbcf  MOVZX ECX,AL
0049dbd2  TEST ECX,ECX
0049dbd4  JZ 0x0049de0f
0049dbda  MOV word ptr [EBP + -0x14],0x0
0049dbe0  JMP 0x0049dbee
0049dbe2  MOV DX,word ptr [EBP + -0x14]
0049dbe6  ADD DX,0x1
0049dbea  MOV word ptr [EBP + -0x14],DX
0049dbee  MOVSX EAX,word ptr [EBP + -0x14]
0049dbf2  MOV ECX,dword ptr [EBP + -0x4c]
0049dbf5  MOVSX EDX,word ptr [ECX + 0x4]
0049dbf9  CMP EAX,EDX
0049dbfb  JGE 0x0049dc42
0049dbfd  LEA EAX,[EBP + -0x3c]
0049dc00  PUSH EAX
0049dc01  LEA ECX,[EBP + -0x10]
0049dc04  CALL 0x004a2200
0049dc09  PUSH EAX
0049dc0a  LEA ECX,[EBP + -0x3b]
0049dc0d  PUSH ECX
0049dc0e  LEA EDX,[EBP + -0x3a]
0049dc11  PUSH EDX
0049dc12  MOVSX ECX,word ptr [EBP + -0x14]
0049dc16  MOV EAX,dword ptr [EBP + -0x4c]
0049dc19  ADD ECX,dword ptr [EAX]
0049dc1b  CALL 0x00464480
0049dc20  MOV ECX,EAX
0049dc22  CALL 0x00463fd0
0049dc27  MOV ECX,EAX
0049dc29  CALL 0x004a1fb0
0049dc2e  MOVZX ECX,AL
0049dc31  TEST ECX,ECX
0049dc33  JZ 0x0049dc40
0049dc35  MOVSX EDX,word ptr [EBP + -0x14]
0049dc39  MOV byte ptr [EBP + EDX*0x1 + -0x20],0x1
0049dc3e  JMP 0x0049dc42
0049dc40  JMP 0x0049dbe2
0049dc42  MOV word ptr [EBP + -0x14],0x0
0049dc48  JMP 0x0049dc56
0049dc4a  MOV AX,word ptr [EBP + -0x14]
0049dc4e  ADD AX,0x1
0049dc52  MOV word ptr [EBP + -0x14],AX
0049dc56  MOVSX ECX,word ptr [EBP + -0x14]
0049dc5a  MOV EDX,dword ptr [EBP + -0x4c]
0049dc5d  MOVSX EAX,word ptr [EDX + 0x4]
0049dc61  CMP ECX,EAX
0049dc63  JGE 0x0049dcaa
0049dc65  LEA ECX,[EBP + -0x3f]
0049dc68  PUSH ECX
0049dc69  LEA ECX,[EBP + -0x10]
0049dc6c  CALL 0x004a2250
0049dc71  PUSH EAX
0049dc72  LEA EDX,[EBP + -0x3e]
0049dc75  PUSH EDX
0049dc76  LEA EAX,[EBP + -0x3d]
0049dc79  PUSH EAX
0049dc7a  MOVSX ECX,word ptr [EBP + -0x14]
0049dc7e  MOV EDX,dword ptr [EBP + -0x4c]
0049dc81  ADD ECX,dword ptr [EDX]
0049dc83  CALL 0x00464480
0049dc88  MOV ECX,EAX
0049dc8a  CALL 0x00463fd0
0049dc8f  MOV ECX,EAX
0049dc91  CALL 0x004a1fb0
0049dc96  MOVZX EAX,AL
0049dc99  TEST EAX,EAX
0049dc9b  JZ 0x0049dca8
0049dc9d  MOVSX ECX,word ptr [EBP + -0x14]
0049dca1  MOV byte ptr [EBP + ECX*0x1 + -0x20],0x1
0049dca6  JMP 0x0049dcaa
0049dca8  JMP 0x0049dc4a
0049dcaa  MOV word ptr [EBP + -0x14],0x0
0049dcb0  JMP 0x0049dcbe
0049dcb2  MOV DX,word ptr [EBP + -0x14]
0049dcb6  ADD DX,0x1
0049dcba  MOV word ptr [EBP + -0x14],DX
0049dcbe  MOVSX EAX,word ptr [EBP + -0x14]
0049dcc2  MOV ECX,dword ptr [EBP + -0x4c]
0049dcc5  MOVSX EDX,word ptr [ECX + 0x4]
0049dcc9  CMP EAX,EDX
0049dccb  JGE 0x0049dd12
0049dccd  LEA EAX,[EBP + -0x42]
0049dcd0  PUSH EAX
0049dcd1  LEA ECX,[EBP + -0x10]
0049dcd4  CALL 0x004a22a0
0049dcd9  PUSH EAX
0049dcda  LEA ECX,[EBP + -0x41]
0049dcdd  PUSH ECX
0049dcde  LEA EDX,[EBP + -0x40]
0049dce1  PUSH EDX
0049dce2  MOVSX ECX,word ptr [EBP + -0x14]
0049dce6  MOV EAX,dword ptr [EBP + -0x4c]
0049dce9  ADD ECX,dword ptr [EAX]
0049dceb  CALL 0x00464480
0049dcf0  MOV ECX,EAX
0049dcf2  CALL 0x00463fd0
0049dcf7  MOV ECX,EAX
0049dcf9  CALL 0x004a1fb0
0049dcfe  MOVZX ECX,AL
0049dd01  TEST ECX,ECX
0049dd03  JZ 0x0049dd10
0049dd05  MOVSX EDX,word ptr [EBP + -0x14]
0049dd09  MOV byte ptr [EBP + EDX*0x1 + -0x20],0x1
0049dd0e  JMP 0x0049dd12
0049dd10  JMP 0x0049dcb2
0049dd12  MOV word ptr [EBP + -0x14],0x0
0049dd18  JMP 0x0049dd26
0049dd1a  MOV AX,word ptr [EBP + -0x14]
0049dd1e  ADD AX,0x1
0049dd22  MOV word ptr [EBP + -0x14],AX
0049dd26  MOVSX ECX,word ptr [EBP + -0x14]
0049dd2a  MOV EDX,dword ptr [EBP + -0x4c]
0049dd2d  MOVSX EAX,word ptr [EDX + 0x4]
0049dd31  CMP ECX,EAX
0049dd33  JGE 0x0049dd7a
0049dd35  LEA ECX,[EBP + -0x45]
0049dd38  PUSH ECX
0049dd39  LEA ECX,[EBP + -0x10]
0049dd3c  CALL 0x004a22f0
0049dd41  PUSH EAX
0049dd42  LEA EDX,[EBP + -0x44]
0049dd45  PUSH EDX
0049dd46  LEA EAX,[EBP + -0x43]
0049dd49  PUSH EAX
0049dd4a  MOVSX ECX,word ptr [EBP + -0x14]
0049dd4e  MOV EDX,dword ptr [EBP + -0x4c]
0049dd51  ADD ECX,dword ptr [EDX]
0049dd53  CALL 0x00464480
0049dd58  MOV ECX,EAX
0049dd5a  CALL 0x00463fd0
0049dd5f  MOV ECX,EAX
0049dd61  CALL 0x004a1fb0
0049dd66  MOVZX EAX,AL
0049dd69  TEST EAX,EAX
0049dd6b  JZ 0x0049dd78
0049dd6d  MOVSX ECX,word ptr [EBP + -0x14]
0049dd71  MOV byte ptr [EBP + ECX*0x1 + -0x20],0x1
0049dd76  JMP 0x0049dd7a
0049dd78  JMP 0x0049dd1a
0049dd7a  MOV word ptr [EBP + -0x28],0x0
0049dd80  MOV word ptr [EBP + -0x2c],0x0
0049dd86  JMP 0x0049dd94
0049dd88  MOV DX,word ptr [EBP + -0x2c]
0049dd8c  ADD DX,0x1
0049dd90  MOV word ptr [EBP + -0x2c],DX
0049dd94  MOVSX EAX,word ptr [EBP + -0x2c]
0049dd98  CMP EAX,0x7
0049dd9b  JGE 0x0049dded
0049dd9d  MOVSX ECX,word ptr [EBP + -0x2c]
0049dda1  MOVZX EDX,byte ptr [EBP + ECX*0x1 + -0x20]
0049dda6  TEST EDX,EDX
0049dda8  JNZ 0x0049ddeb
0049ddaa  MOVSX EAX,word ptr [EBP + -0x28]
0049ddae  CMP EAX,0x3
0049ddb1  JL 0x0049ddca
0049ddb3  PUSH 0x1bd8
0049ddb8  PUSH 0x6bd2d0
0049ddbd  PUSH 0x6be250
0049ddc2  CALL 0x005e9f20
0049ddc7  ADD ESP,0xc
0049ddca  MOVSX EDX,word ptr [EBP + -0x2c]
0049ddce  MOV EAX,0x6
0049ddd3  SUB EAX,EDX
0049ddd5  MOVSX ECX,word ptr [EBP + -0x28]
0049ddd9  MOV EDX,dword ptr [EBP + 0x8]
0049dddc  MOV dword ptr [EDX + ECX*0x4],EAX
0049dddf  MOV AX,word ptr [EBP + -0x28]
0049dde3  ADD AX,0x1
0049dde7  MOV word ptr [EBP + -0x28],AX
0049ddeb  JMP 0x0049dd88
0049dded  MOVSX ECX,word ptr [EBP + -0x28]
0049ddf1  CMP ECX,0x3
0049ddf4  JZ 0x0049de0d
0049ddf6  PUSH 0x1bdd
0049ddfb  PUSH 0x6bd2d0
0049de00  PUSH 0x6be240
0049de05  CALL 0x005e9f20
0049de0a  ADD ESP,0xc
0049de0d  JMP 0x0049de2c
0049de0f  MOV EAX,dword ptr [EBP + 0x8]
0049de12  MOV dword ptr [EAX],0x0
0049de18  MOV ECX,dword ptr [EBP + 0x8]
0049de1b  MOV dword ptr [ECX + 0x4],0x1
0049de22  MOV EDX,dword ptr [EBP + 0x8]
0049de25  MOV dword ptr [EDX + 0x8],0x2
0049de2c  MOV EAX,dword ptr [EBP + 0x8]
0049de2f  MOV ECX,dword ptr [EBP + 0x8]
0049de32  MOV EDX,dword ptr [EAX + 0x8]
0049de35  CMP EDX,dword ptr [ECX + 0x4]
0049de38  JLE 0x0049de58
0049de3a  MOV EAX,dword ptr [EBP + 0x8]
0049de3d  MOV ECX,dword ptr [EAX + 0x8]
0049de40  MOV dword ptr [EBP + -0x30],ECX
0049de43  MOV EDX,dword ptr [EBP + 0x8]
0049de46  MOV EAX,dword ptr [EBP + 0x8]
0049de49  MOV ECX,dword ptr [EAX + 0x4]
0049de4c  MOV dword ptr [EDX + 0x8],ECX
0049de4f  MOV EDX,dword ptr [EBP + 0x8]
0049de52  MOV EAX,dword ptr [EBP + -0x30]
0049de55  MOV dword ptr [EDX + 0x4],EAX
0049de58  MOV ECX,dword ptr [EBP + 0x8]
0049de5b  MOV EDX,dword ptr [EBP + 0x8]
0049de5e  MOV EAX,dword ptr [ECX + 0x8]
0049de61  CMP EAX,dword ptr [EDX]
0049de63  JLE 0x0049de81
0049de65  MOV ECX,dword ptr [EBP + 0x8]
0049de68  MOV EDX,dword ptr [ECX + 0x8]
0049de6b  MOV dword ptr [EBP + -0x34],EDX
0049de6e  MOV EAX,dword ptr [EBP + 0x8]
0049de71  MOV ECX,dword ptr [EBP + 0x8]
0049de74  MOV EDX,dword ptr [ECX]
0049de76  MOV dword ptr [EAX + 0x8],EDX
0049de79  MOV EAX,dword ptr [EBP + 0x8]
0049de7c  MOV ECX,dword ptr [EBP + -0x34]
0049de7f  MOV dword ptr [EAX],ECX
0049de81  MOV EDX,dword ptr [EBP + 0x8]
0049de84  MOV EAX,dword ptr [EBP + 0x8]
0049de87  MOV ECX,dword ptr [EDX + 0x4]
0049de8a  CMP ECX,dword ptr [EAX]
0049de8c  JLE 0x0049deaa
0049de8e  MOV EDX,dword ptr [EBP + 0x8]
0049de91  MOV EAX,dword ptr [EDX + 0x4]
0049de94  MOV dword ptr [EBP + -0x38],EAX
0049de97  MOV ECX,dword ptr [EBP + 0x8]
0049de9a  MOV EDX,dword ptr [EBP + 0x8]
0049de9d  MOV EAX,dword ptr [EDX]
0049de9f  MOV dword ptr [ECX + 0x4],EAX
0049dea2  MOV ECX,dword ptr [EBP + 0x8]
0049dea5  MOV EDX,dword ptr [EBP + -0x38]
0049dea8  MOV dword ptr [ECX],EDX
0049deaa  MOV ECX,dword ptr [EBP + 0xc]
0049dead  CALL 0x00484b80
0049deb2  MOV EAX,dword ptr [EBP + -0x4c]
0049deb5  PUSH EAX
0049deb6  MOV ECX,dword ptr [EBP + 0x10]
0049deb9  CALL 0x00484490
0049debe  MOV word ptr [EBP + -0x14],0x0
0049dec4  JMP 0x0049ded2
0049dec6  MOV CX,word ptr [EBP + -0x14]
0049deca  ADD CX,0x1
0049dece  MOV word ptr [EBP + -0x14],CX
0049ded2  MOVSX EDX,word ptr [EBP + -0x14]
0049ded6  CMP EDX,0x3
0049ded9  JGE 0x0049df0d
0049dedb  MOVSX EAX,word ptr [EBP + -0x14]
0049dedf  MOV ECX,dword ptr [EBP + -0x4c]
0049dee2  MOV EDX,dword ptr [ECX]
0049dee4  MOV ECX,dword ptr [EBP + 0x8]
0049dee7  ADD EDX,dword ptr [ECX + EAX*0x4]
0049deea  PUSH EDX
0049deeb  MOV ECX,dword ptr [EBP + 0xc]
0049deee  CALL 0x00484830
0049def3  MOVSX EDX,word ptr [EBP + -0x14]
0049def7  MOV EAX,dword ptr [EBP + -0x4c]
0049defa  MOV ECX,dword ptr [EAX]
0049defc  MOV EAX,dword ptr [EBP + 0x8]
0049deff  ADD ECX,dword ptr [EAX + EDX*0x4]
0049df02  PUSH ECX
0049df03  MOV ECX,dword ptr [EBP + 0x10]
0049df06  CALL 0x00484ad0
0049df0b  JMP 0x0049dec6
0049df0d  MOV ECX,dword ptr [EBP + 0xc]
0049df10  MOVSX EDX,word ptr [ECX + 0x4]
0049df14  CMP EDX,0x3
0049df17  JZ 0x0049df30
0049df19  PUSH 0x1c01
0049df1e  PUSH 0x6bd2d0
0049df23  PUSH 0x6be228
0049df28  CALL 0x005e9f20
0049df2d  ADD ESP,0xc
0049df30  MOV ECX,dword ptr [EBP + 0x10]
0049df33  MOVSX EDX,word ptr [ECX + 0x4]
0049df37  CMP EDX,0x4
0049df3a  JZ 0x0049df53
0049df3c  PUSH 0x1c02
0049df41  PUSH 0x6bd2d0
0049df46  PUSH 0x6be214
0049df4b  CALL 0x005e9f20
0049df50  ADD ESP,0xc
0049df53  MOV byte ptr [EBP + -0x4],0x0
0049df57  LEA ECX,[EBP + -0x10]
0049df5a  CALL 0x004a20f0
0049df5f  MOV dword ptr [EBP + -0x4],0xffffffff
0049df66  LEA ECX,[EBP + -0x24]
0049df69  CALL 0x004a20f0
0049df6e  MOV ECX,dword ptr [EBP + -0xc]
0049df71  MOV dword ptr FS:[0x0],ECX
0049df78  POP ECX
0049df79  MOV ECX,dword ptr [EBP + -0x18]
0049df7c  XOR ECX,EBP
0049df7e  CALL 0x00686d72
0049df83  MOV ESP,EBP
0049df85  POP EBP
0049df86  RET 0xc
